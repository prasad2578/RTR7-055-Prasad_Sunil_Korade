#include <stdio.h>

int main(void)
{
    //variable declaraions
    int PK_iArray[3][5]; 
    int PK_int_size;
    int PK_iArray_size;
    int PK_iArray_num_elements, PK_iArray_num_rows, PK_iArray_num_columns;
    int PK_i, PK_j;

    //code
    printf("\n\n");

    PK_int_size = sizeof(int);
    PK_iArray_size = sizeof(PK_iArray);
    printf("Size Of Two Dimensional ( 2D ) Integer Array Is = %d\n\n", PK_iArray_size);

    PK_iArray_num_rows = PK_iArray_size / sizeof(PK_iArray[0]);
    printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", PK_iArray_num_rows);

    PK_iArray_num_columns = sizeof(PK_iArray[0]) / PK_int_size;
    printf("Number of Columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", PK_iArray_num_columns);

    PK_iArray_num_elements = PK_iArray_num_rows * PK_iArray_num_columns;
    printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", PK_iArray_num_elements);

    printf("\n\n");
    printf("Elements In The 2D Array : \n\n");


    PK_iArray[0][0] = 21;
    PK_iArray[0][1] = 42;
    PK_iArray[0][2] = 63;
    PK_iArray[0][3] = 84;
    PK_iArray[0][4] = 105;

    PK_iArray[1][0] = 22;
    PK_iArray[1][1] = 44;
    PK_iArray[1][2] = 66;
    PK_iArray[1][3] = 88;
    PK_iArray[1][4] = 110;

    PK_iArray[2][0] = 23;
    PK_iArray[2][1] = 46;
    PK_iArray[2][2] = 69;
    PK_iArray[2][3] = 92;
    PK_iArray[2][4] = 115;

    for (PK_i = 0; PK_i < PK_iArray_num_rows; PK_i++)
    {
        printf(" ****** ROW %d ****** \n", (PK_i + 1));
        for (PK_j = 0; PK_j < PK_iArray_num_columns; PK_j++)
        {
          printf("PK_iArray[%d][%d] = %d\n", PK_i, PK_j, PK_iArray[PK_i][PK_j]);
        }
        printf("\n\n");
    }

    return(0);
}
