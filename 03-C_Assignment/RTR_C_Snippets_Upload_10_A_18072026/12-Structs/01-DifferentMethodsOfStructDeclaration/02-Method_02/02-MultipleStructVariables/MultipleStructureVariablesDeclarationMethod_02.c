#include <stdio.h>

struct MyPoint
{
    int PK_x;
    int PK_y;
};

struct MyPoint point_A, point_B, point_C, point_D, point_E;

int main(void)
{
    point_A.PK_x = 3;
    point_A.PK_y = 0;

    point_B.PK_x = 1;
    point_B.PK_y = 2;

    point_C.PK_x = 9;
    point_C.PK_y = 6;

    point_D.PK_x = 8;
    point_D.PK_y = 2;

    point_E.PK_x = 11;
    point_E.PK_y = 8;

    printf("\n\n");
    printf("Co-ordinates (PK_x, PK_y) Of Point 'A' Are : (%d, %d) \n\n", point_A.PK_x, point_A.PK_y);
    printf("Co-ordinates (PK_x, PK_y) Of Point 'B' Are : (%d, %d) \n\n", point_B.PK_x, point_B.PK_y);
    printf("Co-ordinates (PK_x, PK_y) Of Point 'C' Are : (%d, %d) \n\n", point_C.PK_x, point_C.PK_y);
    printf("Co-ordinates (PK_x, PK_y) Of Point 'D' Are : (%d, %d) \n\n", point_D.PK_x, point_D.PK_y);
    printf("Co-ordinates (PK_x, PK_y) Of Point 'E' Are : (%d, %d) \n\n", point_E.PK_x, point_E.PK_y);

    return(0);
}
