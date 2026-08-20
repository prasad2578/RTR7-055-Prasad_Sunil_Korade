#include <stdio.h>

struct MyPoint
{
    int x;
    int y;
};

int main(void)
{
    struct MyPoint PK_point_A, PK_point_B, PK_point_C, PK_point_D, PK_point_E;

    PK_point_A.x = 3;
    PK_point_A.y = 0;

    PK_point_B.x = 1;
    PK_point_B.y = 2;

    PK_point_C.x = 9;
    PK_point_C.y = 6;

    PK_point_D.x = 8;
    PK_point_D.y = 2;

    PK_point_E.x = 11;
    PK_point_E.y = 8;

    printf("\n\n");
    printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d) \n\n", PK_point_A.x, PK_point_A.y);
    printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d) \n\n", PK_point_B.x, PK_point_B.y);
    printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d) \n\n", PK_point_C.x, PK_point_C.y);
    printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d) \n\n", PK_point_D.x, PK_point_D.y);
    printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d) \n\n", PK_point_E.x, PK_point_E.y);

    return(0);
}
