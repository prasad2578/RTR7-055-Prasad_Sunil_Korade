#include <stdio.h>
#include <stdlib.h>

#define PK_NUM_ROWS 5
#define PK_NUM_COLUMNS 5

int main(void)
{
    int *PK_iArray[PK_NUM_ROWS];
    int PK_i, PK_j;

    printf("\n\n");
    printf("********** MEMORY ALLOCATION TO 2D INTEGER ARRAY ********** \n\n");
    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        PK_iArray[PK_i] = (int *)malloc((PK_NUM_COLUMNS - PK_i) * sizeof(int));
        if (PK_iArray[PK_i] == NULL)
        {
          printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY !!! EXITING NOW ... \n\n", PK_i);
          exit(0);
        }
        else
          printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!! \n\n", PK_i);
    }

    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        for (PK_j = 0; PK_j < (PK_NUM_COLUMNS - PK_i); PK_j++)
        {
          PK_iArray[PK_i][PK_j] = (PK_i * 1) + (PK_j * 1);
        }
    }

    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        for (PK_j = 0; PK_j < (PK_NUM_COLUMNS - PK_i); PK_j++)
        {
          printf("PK_iArray[%d][%d] = %d \t At Address : %p\n",PK_i, PK_j, PK_iArray[PK_i][PK_j], &PK_iArray[PK_i][PK_j]);
        }
        printf("\n");
    }

    for (PK_i = (PK_NUM_ROWS - 1); PK_i >= 0; PK_i--)
    {
        if (PK_iArray[PK_i])
        {
          free(PK_iArray[PK_i]);
          PK_iArray[PK_i] = NULL;
          printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!! \n\n", PK_i);
        }
    }

    return(0);
}
