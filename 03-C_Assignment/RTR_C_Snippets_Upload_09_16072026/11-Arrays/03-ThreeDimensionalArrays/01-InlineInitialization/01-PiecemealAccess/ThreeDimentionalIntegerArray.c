#include <stdio.h>

int main(void)

{
//variable declaraions
int PK_iArray[5][3][2] = { { { 9, 18 }, { 27, 36 }, { 45, 54 } },
                        { { 8, 16 }, { 24, 32 }, { 40, 48 } },
                        { { 7, 14 }, { 21, 28 }, { 35, 42 } },
                        { { 6, 12 }, { 18, 24 }, { 30, 36 } },
                        { { 5, 10 }, { 15, 20 }, { 25, 30 } } };
int PK_int_size;
int PK_iArray_size;
int PK_iArray_num_elements, PK_iArray_width, PK_iArray_height, PK_iArray_depth;

//code
printf("\n\n");

PK_int_size = sizeof(int);

PK_iArray_size = sizeof(PK_iArray);
printf("Size Of Three Dimensional ( 3D ) Integer Array Is = %d\n\n", PK_iArray_size);

PK_iArray_width = PK_iArray_size / sizeof(PK_iArray[0]);
printf("Number of Rows (Width) In Three Dimensional ( 3D ) Integer Array Is = > %d\n\n", PK_iArray_width);

PK_iArray_height = sizeof(PK_iArray[0]) / sizeof(PK_iArray[0][0]);
printf("Number of Columns (Height) In Three Dimensional ( 3D ) Integer Array > Is = %d\n\n", PK_iArray_height);

PK_iArray_depth = sizeof(PK_iArray[0][0]) / PK_int_size;
printf("Depth In Three Dimensional ( 3D ) Integer Array Is = %d\n\n",PK_iArray_depth);

PK_iArray_num_elements = PK_iArray_width * PK_iArray_height * PK_iArray_depth;
printf("Number of Elements In Three Dimensional ( 3D ) Integer Array Is = %d > \n\n", PK_iArray_num_elements);

printf("\n\n");
printf("Elements In Integer 3D Array : \n\n");


printf(" ****** ROW 1 ****** \n");

printf(" ****** COLUMN 1 ****** \n");
printf("PK_iArray[0][0][0] = %d\n", PK_iArray[0][0][0]);
printf("PK_iArray[0][0][1] = %d\n", PK_iArray[0][0][1]);
printf("\n");

printf(" ****** COLUMN 2 ****** \n");
printf("PK_iArray[0][1][0] = %d\n", PK_iArray[0][1][0]);
printf("PK_iArray[0][1][1] = %d\n", PK_iArray[0][1][1]);
printf("\n");

printf(" ****** COLUMN 3 ****** \n");
printf("PK_iArray[0][2][0] = %d\n", PK_iArray[0][2][0]);
printf("PK_iArray [0][2][1] = %d\n", PK_iArray[0] [2][1]);
printf("\n\n");

printf(" ****** ROW 2 ****** \n");
printf(" ****** COLUMN 1 ****** \n");
printf("PK_iArray[1][0][0] = %d\n", PK_iArray[1][0][0]);
printf("PK_iArray [1][0][1] = %d\n", PK_iArray[1][0] [1]);
printf("\n");

printf(" ****** COLUMN 2 ****** \n");
printf("PK_iArray [1] [1] [0] = %d\n", PK_iArray[1][1][0]);
printf("PK_iArray [ 1][ 1] [1] = %d\n", PK_iArray[1][1][1]);
printf("\n");

printf(" ****** COLUMN 3 ****** \n");
printf("PK_iArray[1][2][0] = %d\n", PK_iArray[1][2][0]);
printf("PK_iArray [1] [2][1] = %d\n", PK_iArray[1] [2][1]);
printf("\n\n");

printf(" ****** ROW 3 ****** \n");
printf(" ****** COLUMN 1 ****** \n");
printf("PK_iArray[2][0][0] = %d\n", PK_iArray[2][0][0]);
printf("PK_iArray[2][0][1] = %d\n", PK_iArray[2][0][1]);
printf("\n");

printf(" ****** COLUMN 2 ****** \n");
printf("PK_iArray[2][1][0] = %d\n", PK_iArray[2][1][0]);
printf("PK_iArray [2] [ 1] [1] = %d\n", PK_iArray[2][1][1]);
printf("\n");

printf(" ****** COLUMN 3 ****** \n");
printf("PK_iArray[2][2][0] = %d\n", PK_iArray[2][2][0]);
printf("PK_iArray [2][2][1] = %d\n", PK_iArray[2] [2][1]);
printf("\n\n");

printf(" ****** ROW 4 ****** \n");
printf(" ****** COLUMN 1 ****** \n");
printf("PK_iArray[3][0][0] = %d\n", PK_iArray[3][0][0]);
printf("PK_iArray [3][0] [1] = %d\n", PK_iArray[3][0][1]);
printf("\n");

printf(" ****** COLUMN 2 ****** \n");
printf("PK_iArray[3][1][0] = %d\n", PK_iArray[3][1][0]);
printf("PK_iArray [3][1][1] = %d\n", PK_iArray[3][1][1]);
printf("\n");

printf(" ****** COLUMN 3 ****** \n");
printf("PK_iArray[3][2][0] = %d\n", PK_iArray[3][2][0]);
printf("PK_iArray [3] [2][1] = %d\n", PK_iArray[3] [2][1]);
printf("\n\n");

printf(" **** ROW 5 **** \n");
printf(" **** COLUMN 1 **** \n");
printf("PK_iArray[4][0][0] = %d\n", PK_iArray[4][0][0]);
printf("PK_iArray [4][0][1] = %d\n", PK_iArray[4][0][1]);
printf("\n");

printf(" **** COLUMN 2 **** \n");
printf("PK_iArray [4][1][0] = %d\n", PK_iArray[4][1][0]);
printf("PK_iArray [4] [ 1] [1] = %d\n", PK_iArray[4][1][1]);
printf("\n");

printf(" **** COLUMN 3 **** \n");
printf("PK_iArray[4][2][0] = %d\n", PK_iArray[4][2][0]);
printf("PK_iArray [4] [2][1] = %d\n", PK_iArray[4][2][1]);
printf("\n\n");

return(0);

}

