#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j, PK_k;

    //code
    printf("\n\n");
    for (PK_i = 1; PK_i <= 10; PK_i++)
    {
        printf("PK_i = %d\n", PK_i);
        printf("---------\n\n");
        for (PK_j = 1; PK_j <= 5; PK_j++)
        {
            printf("\tj = %d\n", PK_j);
            printf("\t---------\n\n");
            for (PK_k = 1; PK_k <= 3; PK_k++)
            {
                printf("\t\tk = %d\n", PK_k);
            }
            printf("\n\n");
        }
        printf("\n\n");
    }
    return(0);
}
