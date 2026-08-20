#include <stdio.h>

int main(void)
{
    void SwapNumbers(int *, int *);

    int PK_a;
    int PK_b;

    printf("\n\n");
    printf("Enter Value For 'A' : ");
    scanf("%d", &PK_a);
    printf("\n\n");
    printf("Enter Value For 'B' : ");
    scanf("%d", &PK_b);
    printf("\n\n");
    printf(" ****** BEFORE SWAPPING ****** \n\n");
    printf("Value Of 'A' = %d\n\n", PK_a);
    printf("Value Of 'B' = %d\n\n", PK_b);

    SwapNumbers(&PK_a, &PK_b);

    printf("\n\n");
    printf(" ****** AFTER SWAPPING ****** \n\n");
    printf("Value Of 'A' = %d\n\n", PK_a);
    printf("Value Of 'B' = %d\n\n", PK_b);
    return(0);
}

void SwapNumbers(int *PK_x, int *PK_y)
{
    int PK_temp;

    printf("\n\n");
    printf(" ****** BEFORE SWAPPING ****** \n\n");
    printf("Value Of 'X' = %d\n\n", *PK_x);
    printf("Value Of 'Y' = %d\n\n", *PK_y);

    PK_temp = *PK_x;
    *PK_x = *PK_y;
    *PK_y = PK_temp;

    printf("\n\n");
    printf(" ****** AFTER SWAPPING ****** \n\n");
    printf("Value Of 'X' = %d\n\n", *PK_x);
    printf("Value Of 'Y' = %d\n\n", *PK_y);
}
