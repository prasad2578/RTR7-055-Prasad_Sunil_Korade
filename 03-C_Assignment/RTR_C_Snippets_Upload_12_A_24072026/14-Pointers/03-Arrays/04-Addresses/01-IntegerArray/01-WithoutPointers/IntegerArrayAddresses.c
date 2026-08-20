#include <stdio.h>

int main(void)
{
    int PK_iArray[10];
    int PK_i;

    for (PK_i = 0; PK_i < 10; PK_i++)
        PK_iArray[PK_i] = (PK_i + 1) * 3;

    printf("\n\n");
    printf("Elements Of The Integer Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_iArray[%d] = %d\n", PK_i, PK_iArray[PK_i]);

    printf("\n\n");
    printf("Elements Of The Integer Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_iArray[%d] = %d \t \t Address = %p\n", PK_i, PK_iArray[PK_i], &PK_iArray[PK_i]);

    printf("\n\n");
    return(0);
}
