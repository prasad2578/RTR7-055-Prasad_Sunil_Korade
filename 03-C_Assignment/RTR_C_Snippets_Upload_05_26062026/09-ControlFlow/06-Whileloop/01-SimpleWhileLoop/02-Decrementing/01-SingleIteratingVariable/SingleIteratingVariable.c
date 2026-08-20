#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i;

    //code
    printf("\n\n");

    printf("Printing Digits 10 to 1 : \n\n");

    PK_i = 10;
    while (PK_i >= 1)
    {
        printf("\t%d\n", PK_i);
        PK_i--;
    }

    printf("\n\n");

    return(0);
}
