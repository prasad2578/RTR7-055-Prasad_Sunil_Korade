#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j;

    //code
    printf("\n\n");

    printf("Printing Digits 1 to 10 to 100 : \n\n");

    PK_i = 1;
    PK_j = 10;
    do
    {
        printf("\t%d\t%d\n", PK_i, PK_j);
        PK_i++;
        PK_j = PK_j + 10;

    }while (PK_i <= 10, PK_j <= 100);
    printf("\n\n");
    return(0);

}
