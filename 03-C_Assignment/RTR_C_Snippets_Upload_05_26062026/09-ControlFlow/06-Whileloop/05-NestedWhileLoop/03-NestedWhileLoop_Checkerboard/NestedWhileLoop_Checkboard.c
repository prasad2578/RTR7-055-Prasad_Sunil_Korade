#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j, PK_c;

    //code
    printf("\n\n");

    PK_i = 0;
    while (PK_i < 64)
    {
        PK_j = 0;
        while (PK_j < 64)
        {
            PK_c = ((PK_i & 0x8) == 0) ^ ((PK_j & 0x8) == 0);

            if (PK_c == 0)
                printf("  ");

            if (PK_c == 1)
                printf("* ");

            PK_j++;
        }
        printf("\n\n");
        PK_i++;
    }
    return(0);
}
