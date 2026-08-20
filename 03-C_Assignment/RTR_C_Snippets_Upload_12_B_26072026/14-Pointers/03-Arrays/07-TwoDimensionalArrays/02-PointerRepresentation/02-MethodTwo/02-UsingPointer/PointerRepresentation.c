#include <stdio.h>
#include <stdlib.h>

#define PK_NUM_ROWS 5
#define PK_NUM_COLUMNS 3

int main(void)
{
    int PK_i, PK_j;
    int **PK_ptr_iArray = NULL;

    printf("\n\n");

    PK_ptr_iArray = (int **)malloc(PK_NUM_ROWS * sizeof(int *));
    if (PK_ptr_iArray == NULL)
    {
        printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS FAILED !!! EXITING NOW ... \n\n", PK_NUM_ROWS);
        exit(0);
    }
    else
        printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS HAS SUCCEEDED !!! \n\n", PK_NUM_ROWS);

    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        PK_ptr_iArray[PK_i] = (int *)malloc(PK_NUM_COLUMNS * sizeof(int));
        if (PK_ptr_iArray == NULL)
        {
          printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d FAILED !!! EXITING NOW ... \n\n", PK_i);
          exit(0);
        }
        else
          printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d HAS SUCCEEDED !!! \n\n", PK_i);
    }

    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        for (PK_j = 0; PK_j < PK_NUM_COLUMNS; PK_j++)
        {
          *(*(PK_ptr_iArray + PK_i) + PK_j) = (PK_i + 1) * (PK_j + 1);
        }
    }

    printf("\n\n");
    printf("2D Integer Array Elements Along With Addresses : \n\n");
    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        for (PK_j = 0; PK_j < PK_NUM_COLUMNS; PK_j++)
        {
          printf("PK_ptr_iArray[%d][%d] = %d \t \t At Address &PK_ptr_iArray[%d][%d] : %p\n",PK_i, PK_j, PK_ptr_iArray[PK_i][PK_j], PK_i, PK_j, &PK_ptr_iArray[PK_i][PK_j]);
        }
        printf("\n\n");
    }

    for (PK_i = (PK_NUM_ROWS - 1); PK_i >= 0; PK_i--)
    {
        if (*(PK_ptr_iArray + PK_i))
        {
          free(*(PK_ptr_iArray + PK_i));
          *(PK_ptr_iArray + PK_i) = NULL;
          printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED ! \n\n", PK_i);
        }
    }

    if (PK_ptr_iArray)
    {
        free(PK_ptr_iArray);
        PK_ptr_iArray = NULL;
        printf("MEMORY ALLOCATED TO PK_ptr_iArray HAS BEEN SUCCESSFULLY FREED ! \n\n");
    }

    return(0);
}
