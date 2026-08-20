#include <stdio.h>

int main(void)
{
    //variable declaraions
    int PK_iArray[5][3] = { {1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}, {5, 10, 15} }; //IN-LINE INITIALIZATION

    int PK_int_size;
    int PK_iArray_size;
    int PK_iArray_num_elements, PK_iArray_num_rows, PK_iArray_num_columns;

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


    printf(" ****** ROW 1 ****** \n");
    printf("PK_iArray[0][0] = %d\n", PK_iArray[0][0]); 
    printf("PK_iArray[0][1] = %d\n", PK_iArray[0][1]); 
    printf("PK_iArray[0][2] = %d\n", PK_iArray[0][2]); 

    printf("\n\n");
    printf(" ****** ROW 2 ****** \n");
    printf("PK_iArray[1][0] = %d\n", PK_iArray[1][0]); 
    printf("PK_iArray[1][1] = %d\n", PK_iArray[1][1]); 
    printf("PK_iArray[1][2] = %d\n", PK_iArray[1][2]); 

    printf("\n\n");
    printf(" ****** ROW 3 ****** \n");
    printf("PK_iArray[2][0] = %d\n", PK_iArray[2][0]); 
    printf("PK_iArray[2][1] = %d\n", PK_iArray[2][1]); 
    printf("PK_iArray[2][2] = %d\n", PK_iArray[2][2]); 

    printf("\n\n");
    printf(" ****** ROW 4 ****** \n");
    printf("PK_iArray[3][0] = %d\n", PK_iArray[3][0]); 
    printf("PK_iArray[3][1] = %d\n", PK_iArray[3][1]);
    printf("PK_iArray[3][2] = %d\n", PK_iArray[3][2]);

    printf("\n\n");
    printf(" ****** ROW 5 ****** \n");
    printf("PK_iArray[4][0] = %d\n", PK_iArray[4][0]); 
    printf("PK_iArray[4][1] = %d\n", PK_iArray[4][1]); 
    printf("PK_iArray[4][2] = %d\n", PK_iArray[4][2]); 

    printf("\n\n");
    return(0);
}
