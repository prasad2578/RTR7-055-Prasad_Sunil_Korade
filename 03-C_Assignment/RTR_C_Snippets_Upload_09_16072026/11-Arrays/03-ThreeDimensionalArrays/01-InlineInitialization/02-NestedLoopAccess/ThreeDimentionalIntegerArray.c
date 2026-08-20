#include <stdio.h>

int main(void)
{
    //variable declaraions

    int PK_iArray [5][3][2] = { { { 9, 18 }, { 27, 36 }, { 45, 54 } },
                             { { 8, 16 }, { 24, 32 }, { 40, 48 } },
                             { { 7, 14 }, { 21, 28 }, { 35, 42 } },
                             { { 6, 12 }, { 18, 24 }, { 30, 36 } },
                             { { 5, 10 }, { 15, 20 }, { 25, 30 } } };

    int PK_int_size;
    int PK_iArray_size;
    int PK_iArray_num_elements, PK_iArray_width, PK_iArray_height, PK_iArray_depth;
    int PK_i, PK_j, PK_k;

    //code
    printf("\n\n");

    PK_int_size = sizeof(int);
    PK_iArray_size = sizeof(PK_iArray);
    printf("Size Of Three Dimensional ( 3D ) Integer Array Is = %d\n\n", PK_iArray_size);

    PK_iArray_width = PK_iArray_size / sizeof(PK_iArray[0]);
    printf("Number of Rows (Width) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", PK_iArray_width);

    PK_iArray_height = sizeof(PK_iArray[0]) / sizeof(PK_iArray[0][0]);
    printf("Number of Columns (Height) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", PK_iArray_height);

    PK_iArray_depth = sizeof(PK_iArray[0][0]) / PK_int_size;
    printf("Depth In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", PK_iArray_depth);

    PK_iArray_num_elements = PK_iArray_width * PK_iArray_height * PK_iArray_depth;
    printf("Number of Elements In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", PK_iArray_num_elements);

    printf("\n\n");
    printf("Elements In Integer 3D Array : \n\n");

    for (PK_i = 0; PK_i < PK_iArray_width; PK_i++)
    {
        printf(" ** ROW %d ** \n", (PK_i + 1));
        for (PK_j = 0; PK_j < PK_iArray_height; PK_j++)
        {
            printf(" *** COLUMN %d *** \n", (PK_j + 1));
            for (PK_k = 0; PK_k < PK_iArray_depth; PK_k++)
            {
                printf("PK_iArray[%d][%d][%d] = %d\n", PK_i, PK_j, PK_k, PK_iArray[PK_i][PK_j][PK_k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return(0);
}
