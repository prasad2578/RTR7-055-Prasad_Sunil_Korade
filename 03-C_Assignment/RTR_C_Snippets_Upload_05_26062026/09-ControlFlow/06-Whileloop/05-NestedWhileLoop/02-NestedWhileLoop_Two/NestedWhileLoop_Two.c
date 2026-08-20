#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j, PK_k;

    //code
    printf("\n\n");

    PK_i = 1;
    while (PK_i <= 10)
    {
        printf("PK_i = %d\n", PK_i);
        printf("---------\n\n");

        PK_j = 1;
        while (PK_j <= 5)
        {
            printf("\tj = %d\n", PK_j);
            printf("\t---------\n\n");

            PK_k = 1;
            while (PK_k <= 3)
            {
                printf("\t\tk = %d\n", PK_k);
                PK_k++;
            }
            printf("\n\n");
            PK_j++;
        }
        printf("\n\n");
        PK_i++;
    }
    return(0);
}