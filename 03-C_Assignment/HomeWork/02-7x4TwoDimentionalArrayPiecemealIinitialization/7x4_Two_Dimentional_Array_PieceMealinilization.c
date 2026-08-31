#include <stdio.h>

int main(void)
{
    int PK_HW_2D_Array[7][4];
    int PK_HW_iArraySize = 0;
    int PK_HW_iArrayRows = 0;
    int PK_HW_iArrayColumns = 0;
    int PK_HW_iArrayNumElements = 0;

    PK_HW_iArrayRows = sizeof(PK_HW_2D_Array) / sizeof(PK_HW_2D_Array[0]);
    PK_HW_iArrayColumns = sizeof(PK_HW_2D_Array[0]) / sizeof(PK_HW_2D_Array[0][0]);
    PK_HW_iArrayNumElements = PK_HW_iArrayRows * PK_HW_iArrayColumns;

    printf("NUMBER OF ROWS  = %d\n", PK_HW_iArrayRows);
    printf("NUMBER OF COLUMNS = %d\n", PK_HW_iArrayColumns);
    printf("NUMBER OF ELEMENTS = %d\n\n", PK_HW_iArrayNumElements);

    PK_HW_2D_Array[0][0] = 25;
    PK_HW_2D_Array[0][1] = 245;
    PK_HW_2D_Array[0][2] = 812;
    PK_HW_2D_Array[0][3] = 321;

    PK_HW_2D_Array[1][0] = 35;
    PK_HW_2D_Array[1][1] = 38;
    PK_HW_2D_Array[1][2] = 852;
    PK_HW_2D_Array[1][3] = 214;

    PK_HW_2D_Array[2][0] = 687;
    PK_HW_2D_Array[2][1] = 252;
    PK_HW_2D_Array[2][2] = 893;
    PK_HW_2D_Array[2][3] = 414;

    PK_HW_2D_Array[3][0] = 2538;
    PK_HW_2D_Array[3][1] = 2507;
    PK_HW_2D_Array[3][2] = 308;
    PK_HW_2D_Array[3][3] = 385;

    PK_HW_2D_Array[4][0] = 25;
    PK_HW_2D_Array[4][1] = 458;
    PK_HW_2D_Array[4][2] = 963;
    PK_HW_2D_Array[4][3] = 357;

    PK_HW_2D_Array[5][0] = 9;
    PK_HW_2D_Array[5][1] = 4;
    PK_HW_2D_Array[5][2] = 5;
    PK_HW_2D_Array[5][3] = 3;

    PK_HW_2D_Array[6][0] = 2000;
    PK_HW_2D_Array[6][1] = 3000;
    PK_HW_2D_Array[6][2] = 4000;
    PK_HW_2D_Array[6][3] = 5000;

    printf("Elements entered by user are \n");

    for (int i = 0; i < PK_HW_iArrayRows; i++)
    {
        for (int j = 0; j < PK_HW_iArrayColumns; j++)
        {
          printf("PK_HW_2D_Array[%d][%d] = %d\n", i, j, PK_HW_2D_Array[i][j]);
        }
        printf("\n\n");
    }

    printf("*****************END***************\n");
    printf("\n\n");
    printf("Finally c assignment Finished\n");
    return (0);
}