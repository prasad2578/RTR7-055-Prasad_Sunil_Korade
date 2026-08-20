#include <stdio.h>

int main(void)
{
    // variable declaration
    int PK_iArray_One[5];
    int PK_iArray_Two[5][3];
    int PK_iArray_Three[100][100][5];

    int PK_num_rows_2D;
    int PK_num_columns_2D;

    int PK_num_rows_3D;
    int PK_num_columns_3D;
    int PK_depth_3D;

    // code
    printf("\n\n");
    printf("Size of 1-D integer array PK_iArray_One = %zu\n", sizeof(PK_iArray_One));
    printf("Number of elements in 1-D integer array PK_iArray_One = %zu\n",(sizeof(PK_iArray_One) / sizeof(int)));

    printf("\n\n");
    printf("Size of 2-D integer array PK_iArray_Two = %zu\n", sizeof(PK_iArray_Two));

    printf("Number rows in 2-D integer array PK_iArray_Two = %zu\n",(sizeof(PK_iArray_Two) / sizeof(PK_iArray_Two[0])));
    PK_num_rows_2D = (sizeof(PK_iArray_Two) / sizeof(PK_iArray_Two[0]));

    printf("Number of elements (columns) in each row in 2-D integer array PK_iArray_Two = %zu\n",(sizeof(PK_iArray_Two[0]) / sizeof(PK_iArray_Two[0][0])));
    PK_num_columns_2D = (sizeof(PK_iArray_Two[0]) / sizeof(PK_iArray_Two[0][0]));

    printf("Number of elements in total in 2-D Array PK_iArray_Two = %d\n",(PK_num_rows_2D * PK_num_columns_2D));

    printf("\n\n");
    printf("Size of 3-D integer array PK_iArray_Three = %zu\n", sizeof(PK_iArray_Three));

    printf("Number rows in 3-D integer array PK_iArray_Three = %zu\n",(sizeof(PK_iArray_Three) / sizeof(PK_iArray_Three[0])));
    PK_num_rows_3D = (sizeof(PK_iArray_Three) / sizeof(PK_iArray_Three[0]));

    printf("Number of elements (columns) in one row in 3-D integer array PK_iArray_Three = %zu\n",(sizeof(PK_iArray_Three[0]) / sizeof(PK_iArray_Three[0][0])));
    PK_num_columns_3D = (sizeof(PK_iArray_Three[0]) / sizeof(PK_iArray_Three[0][0]));

    printf("Number of elements (depth) in one column in one row in 3-D integer array PK_iArray_Three = %zu\n",(sizeof(PK_iArray_Three[0][0]) / sizeof(PK_iArray_Three[0][0][0])));
    PK_depth_3D = (sizeof(PK_iArray_Three[0][0]) / sizeof(PK_iArray_Three[0][0][0]));

    printf("Number of elements in total in 3-D Array PK_iArray_Three = %d\n",(PK_num_rows_3D * PK_num_columns_3D * PK_depth_3D));

    printf("\n\n");
    return(0);
}
