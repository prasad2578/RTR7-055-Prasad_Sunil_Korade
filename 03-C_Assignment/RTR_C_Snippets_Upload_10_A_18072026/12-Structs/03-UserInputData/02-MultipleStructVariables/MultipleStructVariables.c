#include <stdio.h>

struct MyPoint
{
    int x;
    int y;
};

int main(void)
{
    struct MyPoint PK_point_A, PK_point_B, PK_point_C, PK_point_D, PK_point_E;

    printf("\n\n");
    printf("Enter X-Coordinate For Point 'A' : ");
    scanf("%d", &PK_point_A.x);
    printf("Enter Y-Coordinate For Point 'A' : ");
    scanf("%d", &PK_point_A.y);

    printf("\n\n");
    printf("Enter X-Coordinate For Point 'B' : ");
    scanf("%d", &PK_point_B.x);
    printf("Enter Y-Coordinate For Point 'B' : ");
    scanf("%d", &PK_point_B.y);

    printf("\n\n");
    printf("Enter X-Coordinate For Point 'C' : ");
    scanf("%d", &PK_point_C.x);
    printf("Enter Y-Coordinate For Point 'C' : ");
    scanf("%d", &PK_point_C.y);

    printf("\n\n");
    printf("Enter X-Coordinate For Point 'D' : ");
    scanf("%d", &PK_point_D.x);
    printf("Enter Y-Coordinate For Point 'D' : ");
    scanf("%d", &PK_point_D.y);

    printf("\n\n");
    printf("Enter X-Coordinate For Point 'E' : ");
    scanf("%d", &PK_point_E.x);
    printf("Enter Y-Coordinate For Point 'E' : ");
    scanf("%d", &PK_point_E.y);

    printf("\n\n");
    printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d) \n\n", PK_point_A.x, PK_point_A.y);
    printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d) \n\n", PK_point_B.x, PK_point_B.y);
    printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d) \n\n", PK_point_C.x, PK_point_C.y);
    printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d) \n\n", PK_point_D.x, PK_point_D.y);
    printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d) \n\n", PK_point_E.x, PK_point_E.y);

    return(0);
}
