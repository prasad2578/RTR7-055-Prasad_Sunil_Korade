#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_a;

    //code
    printf("\n\n");

    PK_a = 5;
    if (PK_a) // Non-zero Positive Value
    {
        printf("if-block 1 : 'A' Exists And Has Value = %d !!!\n\n", PK_a);
    }

    PK_a = -5;
    if (PK_a) // Non-zero Negative Value
    {
        printf("if-block 2 : 'A' Exists And Has Value = %d !!!\n\n", PK_a);
    }

    PK_a = 0;
    if (PK_a) // Zero Value
    {
        printf("if-block 3 : 'A' Exists And Has Value = %d !!!\n\n", PK_a);
    }

    printf("All Three if-statements Are Done !!!\n\n");

    return(0);
}
