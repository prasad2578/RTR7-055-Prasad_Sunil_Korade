#include <stdio.h>

#define PK_NUM_ROWS 5
#define PK_NUM_COLUMNS 3
int main(void)
{
    int PK_iArray[PK_NUM_ROWS][PK_NUM_COLUMNS];
    int PK_i, PK_j;
    int *PK_ptr_iArray_Row = NULL;

    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        PK_ptr_iArray_Row = PK_iArray[PK_i];
        for (PK_j = 0; PK_j < PK_NUM_COLUMNS; PK_j++)
          *(PK_ptr_iArray_Row + PK_j) = (PK_i + 1) * (PK_j + 1);
    }

    printf("\n\n");
    printf("2D Integer Array Elements Along With Addresses : \n\n");
    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        PK_ptr_iArray_Row = PK_iArray[PK_i];
        for (PK_j = 0; PK_j < PK_NUM_COLUMNS; PK_j++)
        {
          printf("*(PK_ptr_iArray_Row + %d)= %d \t \t At Address (PK_ptr_iArray_Row + PK_j) : %p\n",PK_j, *(PK_ptr_iArray_Row + PK_j), (PK_ptr_iArray_Row + PK_j));
        }
        printf("\n\n");
    }

    return(0);
}
