#include <stdio.h>
#include <string.h>

struct MyPoint
{
    int x;
    int y;
};

struct MyPointProperties
{
    int quadrant;
    char axis_location[10];
};

int main(void)
{
    struct MyPoint PK_point;
    struct MyPointProperties PK_point_properties;

    printf("\n\n");
    printf("Enter X-Coordinate For A Point : ");
    scanf("%d", &PK_point.x);
    printf("Enter Y-Coordinate For A Point : ");
    scanf("%d", &PK_point.y);

    printf("\n\n");
    printf("Point Co-ordinates (x, y) Are : (%d, %d) !!! \n\n", PK_point.x, PK_point.y);

    if (PK_point.x == 0 && PK_point.y == 0)
        printf("The Point Is The Origin (%d, %d) !!! \n", PK_point.x, PK_point.y);
    else
    {
        if (PK_point.x == 0)
        {
            if (PK_point.y < 0)
                strcpy(PK_point_properties.axis_location, "Negative Y");
            if (PK_point.y > 0)
                strcpy(PK_point_properties.axis_location, "Positive Y");

            PK_point_properties.quadrant = 0;
            printf("The Point Lies On The %s Axis !!! \n\n", PK_point_properties.axis_location);
        }
        else if (PK_point.y == 0)
        {
            if (PK_point.x < 0)
                strcpy(PK_point_properties.axis_location, "Negative X");
            if (PK_point.x > 0)
                strcpy(PK_point_properties.axis_location, "Positive X");

            PK_point_properties.quadrant = 0;
            printf("The Point Lies On The %s Axis !!! \n\n", PK_point_properties.axis_location);
        }
        else
        {
            PK_point_properties.axis_location[0] = '\0';

            if (PK_point.x > 0 && PK_point.y > 0)
                PK_point_properties.quadrant = 1;
            else if (PK_point.x < 0 && PK_point.y > 0)
                PK_point_properties.quadrant = 2;
            else if (PK_point.x < 0 && PK_point.y < 0)
                PK_point_properties.quadrant = 3;
            else
                PK_point_properties.quadrant = 4;

            printf("The Point Lies In Quadrant Number %d !!! \n\n", PK_point_properties.quadrant);
        }
    }

    return(0);
}
