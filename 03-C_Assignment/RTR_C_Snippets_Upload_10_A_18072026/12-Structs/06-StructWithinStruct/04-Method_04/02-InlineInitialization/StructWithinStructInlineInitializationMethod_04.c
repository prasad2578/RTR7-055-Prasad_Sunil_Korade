#include <stdio.h>

int main(void)
{
    int PK_length, PK_breadth, PK_area;

    struct MyPoint
    {
        int x;
        int y;
    };

    struct Rectangle
    {
        struct MyPoint PK_point_01;
        struct MyPoint PK_point_02;
    };

    struct Rectangle PK_rect = { {2, 3}, {5, 6} };

    PK_length = PK_rect.PK_point_02.y - PK_rect.PK_point_01.y;
    if (PK_length < 0)
        PK_length = PK_length * -1;

    PK_breadth = PK_rect.PK_point_02.x - PK_rect.PK_point_01.x;
    if (PK_breadth < 0)
        PK_breadth = PK_breadth * -1;

    PK_area = PK_length * PK_breadth;

    printf("\n\n");
    printf("Length Of Rectangle = %d\n\n", PK_length);
    printf("Breadth Of Rectangle = %d\n\n", PK_breadth);
    printf("Area Of Rectangle = %d\n\n", PK_area);

    return(0);
}
