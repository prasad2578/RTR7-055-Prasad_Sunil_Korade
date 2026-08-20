#include <stdio.h>

int main(void)
{
    double PK_dArray[10];
    int PK_i;

    for (PK_i = 0; PK_i < 10; PK_i++)
        PK_dArray[PK_i] = (float)(PK_i + 1) * 1.333333f;

    printf("\n\n");
    printf("Elements Of The 'double' Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_dArray[%d] = %lf\n", PK_i, PK_dArray[PK_i]);

    printf("\n\n");
    printf("Elements Of The 'double' Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_dArray[%d] = %lf \t \t Address = %p\n", PK_i, PK_dArray[PK_i], &PK_dArray[PK_i]);

    printf("\n\n");
    return(0);
}
