#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j, PK_c;

    //code
    printf("\n\n");
    for (PK_i = 0; PK_i < 64; PK_i++)
    {
        for (PK_j = 0; PK_j < 64; PK_j++)
        {
            PK_c = ((PK_i & 0x8) == 0) ^ ((PK_j & 0x8) == 0);

            if (PK_c == 0)
                printf("  ");

            if (PK_c == 1)
                printf("* ");

        }
        printf("\n\n");
    }
    return(0);
}