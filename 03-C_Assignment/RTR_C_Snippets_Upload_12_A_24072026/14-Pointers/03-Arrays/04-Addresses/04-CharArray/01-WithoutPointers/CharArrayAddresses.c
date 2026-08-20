#include <stdio.h>

int main(void)
{
    char PK_cArray[10];
    int PK_i;

    for (PK_i = 0; PK_i < 10; PK_i++)
        PK_cArray[PK_i] = (char)(PK_i + 65);

    printf("\n\n");
    printf("Elements Of The Character Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_cArray[%d] = %c\n", PK_i, PK_cArray[PK_i]);

    printf("\n\n");
    printf("Elements Of The Character Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_cArray[%d] = %c \t \t Address = %p\n", PK_i, PK_cArray[PK_i], &PK_cArray[PK_i]);

    printf("\n\n");
    return(0);
}
