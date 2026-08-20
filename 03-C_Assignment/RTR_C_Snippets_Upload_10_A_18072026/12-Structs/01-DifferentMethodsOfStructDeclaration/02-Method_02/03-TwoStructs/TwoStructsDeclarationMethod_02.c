#include <stdio.h>

struct MyPoint
{
    int PK_x;
    int PK_y;
};


struct MyPointProperties
{
    int PK_quadrant;
    char axis_location[10];
};

struct MyPoint point; 
struct MyPointProperties point_properties; 

int main(void)
{
    printf("\n\n");
    printf("Enter X-Coordinate For A Point : ");
    scanf("%d", &point.PK_x);
    printf("Enter Y-Coordinate For A Point : ");
    scanf("%d", &point.PK_y);

    printf("\n\n");
    printf("Point Co-ordinates (PK_x, PK_y) Are : (%d, %d) !!! \n\n", point.PK_x, point.PK_y);

    if (point.PK_x == 0 && point.PK_y == 0)
        printf("The Point Is The Origin (%d, %d) !!! \n", point.PK_x, point.PK_y);
    else
    {
        if (point.PK_x == 0) 
        {
            if (point.PK_y < 0)
                strcpy(point_properties.axis_location, "Negative Y");
            if (point.PK_y > 0)
                strcpy(point_properties.axis_location, "Positive Y");

            point_properties.PK_quadrant = 0;
            printf("The Point Lies On The %s Axis !!! \n\n", point_properties.axis_location);
        }
        else if (point.PK_y == 0) 
        {
            if (point.PK_x < 0)
                strcpy(point_properties.axis_location, "Negative X");
            if (point.PK_x > 0)
                strcpy(point_properties.axis_location, "Positive X");

            point_properties.PK_quadrant = 0;
            printf("The Point Lies On The %s Axis !!! \n\n", point_properties.axis_location);
        }
        else 
        {
            point_properties.axis_location[0] = '\0';

            if (point.PK_x > 0 && point.PK_y > 0)
                point_properties.PK_quadrant = 1;
            else if (point.PK_x < 0 && point.PK_y > 0)
                point_properties.PK_quadrant = 2;
            else if (point.PK_x < 0 && point.PK_y < 0)
                point_properties.PK_quadrant = 3;
            else
                point_properties.PK_quadrant = 4;

            printf("The Point Lies In Quadrant Number %d !!! \n\n", point_properties.PK_quadrant);
        }
    }

    return(0);
}
