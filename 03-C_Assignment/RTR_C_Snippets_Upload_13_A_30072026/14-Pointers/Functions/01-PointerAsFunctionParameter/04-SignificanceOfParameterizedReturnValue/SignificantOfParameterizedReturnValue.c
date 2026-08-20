#include <stdio.h>

enum
{
    PK_NEGATIVE = -1,
    PK_ZERO,
    PK_POSITIVE
};

int main(void)
{
    int PK_Difference(int, int, int *);

    int PK_a;
    int PK_b;
    int PK_answer, PK_ret;

    printf("\n\n");
    printf("Enter Value Of 'A' : ");
    scanf("%d", &PK_a);
    printf("\n\n");
    printf("Enter Value Of 'B' : ");
    scanf("%d", &PK_b);

    PK_ret = PK_Difference(PK_a, PK_b, &PK_answer);

    printf("\n\n");
    printf("Difference Of %d And %d = %d\n\n", PK_a, PK_b, PK_answer);

    if (PK_ret == PK_POSITIVE)
        printf("The Difference Of %d And %d Is Positive !!! \n\n", PK_a, PK_b);
    else if (PK_ret == PK_NEGATIVE)
        printf("The Difference Of %d And %d Is Negative !!! \n\n", PK_a, PK_b);
    else
        printf("The Difference Of %d And %d Is Zero !!! \n\n", PK_a, PK_b);

    return(0);
}

int PK_Difference(int PK_x, int PK_y, int *PK_diff)
{
    *PK_diff = PK_x - PK_y;

    if (*PK_diff > 0)
        return(PK_POSITIVE);
    else if (*PK_diff < 0)
        return(PK_NEGATIVE);
    else
        return(PK_ZERO);
}
