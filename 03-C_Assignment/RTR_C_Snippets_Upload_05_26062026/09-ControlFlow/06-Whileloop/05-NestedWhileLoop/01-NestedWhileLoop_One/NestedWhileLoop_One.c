#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j;

    //code
    printf("\n\n");

    PK_i = 1;
    while(PK_i <= 10)
    {
        printf("PK_i = %d\n", PK_i);
        printf("---------\n\n");

        PK_j = 1;
        while (PK_j <= 5)
        {
            printf("\tj = %d\n", PK_j);
            PK_j++;
        }
        PK_i++;
        printf("\n\n");
    }
    return(0);
}