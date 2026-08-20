#include <stdio.h>
#include <stdlib.h>

#define PK_NUM_COLUMNS 3
#define PK_NUM_ROWS 5

int main(void)
{
    int PK_iArray[PK_NUM_ROWS][PK_NUM_COLUMNS];
    int PK_i, PK_j;

    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        for (PK_j = 0; PK_j < PK_NUM_COLUMNS; PK_j++)
          *(PK_iArray[PK_i] + PK_j) = (PK_i + 1) * (PK_j + 1);
    }

    printf("\n\n");
    printf("2D Integer Array Elements Along With Addresses : \n\n");

    for (PK_i = 0; PK_i < PK_NUM_ROWS; PK_i++)
    {
        for (PK_j = 0; PK_j < PK_NUM_COLUMNS; PK_j++)
        {
          printf("*(PK_iArray[%d] + %d) = %d \t \t At Address (PK_iArray[PK_i] + PK_j) : %p\n",PK_i, PK_j, *(PK_iArray[PK_i] + PK_j), (PK_iArray[PK_i] + PK_j));
        }
        printf("\n\n");
    }

    return(0);
}
