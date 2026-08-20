#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j;

    //code
    printf("\n\n");

    printf("Printing Digits 1 to 10 and 10 to 100 : \n\n");

    for (PK_i = 1, PK_j = 10; PK_i <= 10, PK_j <= 100; PK_i++, PK_j = PK_j + 10)
    {
        printf("\t %d \t %d\n", PK_i, PK_j);
    }

    printf("\n\n");

    return(0);
}
