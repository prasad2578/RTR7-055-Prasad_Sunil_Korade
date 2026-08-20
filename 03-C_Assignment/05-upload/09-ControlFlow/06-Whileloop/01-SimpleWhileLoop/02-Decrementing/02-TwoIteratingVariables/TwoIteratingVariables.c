#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j;

    //code
    printf("\n\n");

    printf("Printing Digits 10 to 1 and 100 to 10: \n\n");

    PK_i = 10;
    PK_j = 100;
    while (PK_i >= 1, PK_j >= 10)
    {
        printf("\t %d \t %d\n", PK_i, PK_j);
        PK_i--;
        PK_j = PK_j - 10;
    }

    printf("\n\n");

    return(0);
}
