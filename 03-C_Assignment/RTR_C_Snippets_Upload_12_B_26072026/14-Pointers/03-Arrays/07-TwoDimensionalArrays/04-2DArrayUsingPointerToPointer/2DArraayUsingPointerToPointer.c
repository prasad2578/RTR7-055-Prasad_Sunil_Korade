#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **PK_ptr_iArray = NULL;
    int PK_i, PK_j;
    int PK_num_rows, PK_num_columns;

    printf("\n\n");
    printf("Enter Number Of Rows : ");
    scanf("%d", &PK_num_rows);

    printf("\n\n");
    printf("Enter Number Of Columns : ");
    scanf("%d", &PK_num_columns);

    printf("\n\n");
    printf("********** MEMORY ALLOCATION TO 2D INTEGER ARRAY ********** \n\n");
    PK_ptr_iArray = (int **)malloc(PK_num_rows * sizeof(int *));
    if (PK_ptr_iArray == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY TO %d ROWS OF 2D INTEGER ARRAY !!! EXITING NOW ... \n\n", PK_num_rows);
        exit(0);
    }
    else
        printf("MEMORY ALLOCATION TO %d ROWS OF 2D INTEGER ARRAY SUCCEEDED !!! \n\n", PK_num_rows);

    for (PK_i = 0; PK_i < PK_num_rows; PK_i++)
    {
        PK_ptr_iArray[PK_i] = (int *)malloc(PK_num_columns * sizeof(int));
        if (PK_ptr_iArray[PK_i] == NULL)
        {
          printf("FAILED TO ALLOCATE MEMORY TO COLUMNS OF ROW %d OF 2D INTEGER ARRAY !!! EXITING NOW ... \n\n", PK_i);
          exit(0);
        }
        else
          printf("MEMORY ALLOCATION TO COLUMNS OF ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!! \n\n", PK_i);
    }

    for (PK_i = 0; PK_i < PK_num_rows; PK_i++)
    {
        for (PK_j = 0; PK_j < PK_num_columns; PK_j++)
        {
          PK_ptr_iArray[PK_i][PK_j] = (PK_i * 1) + (PK_j * 1);
        }
    }

    for (PK_i = 0; PK_i < PK_num_rows; PK_i++)
    {
        printf("Base Address Of Row %d : PK_ptr_iArray[%d] = %p \t At Address : %p\n",
          PK_i, PK_i, PK_ptr_iArray[PK_i], &PK_ptr_iArray[PK_i]);
    }

    printf("\n\n");
    for (PK_i = 0; PK_i < PK_num_rows; PK_i++)
    {
        for (PK_j = 0; PK_j < PK_num_columns; PK_j++)
        {
          printf("PK_ptr_iArray[%d][%d] = %d \t At Address : %p\n",PK_i, PK_j, PK_ptr_iArray[PK_i][PK_j], &PK_ptr_iArray[PK_i][PK_j]);
        }
        printf("\n");
    }

    for (PK_i = (PK_num_rows - 1); PK_i >= 0; PK_i--)
    {
        if (PK_ptr_iArray[PK_i])
        {
          free(PK_ptr_iArray[PK_i]);
          PK_ptr_iArray[PK_i] = NULL;
          printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!! \n\n", PK_i);
        }
    }

    if (PK_ptr_iArray)
    {
        free(PK_ptr_iArray);
        PK_ptr_iArray = NULL;
        printf("MEMORY ALLOCATED TO PK_ptr_iArray HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}
