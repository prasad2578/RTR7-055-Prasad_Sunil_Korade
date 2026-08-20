#include <stdio.h>

int main(void)
{
    float PK_fArray[10];
    float *PK_ptr_fArray = NULL;
    int PK_i;

    for (PK_i = 0; PK_i < 10; PK_i++)
        PK_fArray[PK_i] = (float)(PK_i + 1) * 1.5f;

    PK_ptr_fArray = PK_fArray;

    printf("\n\n");
    printf("Elements Of The 'float' Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_fArray[%d] = %f\n", PK_i, *(PK_ptr_fArray + PK_i));

    printf("\n\n");
    printf("Elements Of The 'float' Array : \n\n");
    for (PK_i = 0; PK_i < 10; PK_i++)
        printf("PK_fArray[%d] = %f \t \t Address = %p\n", PK_i, *(PK_ptr_fArray + PK_i), (PK_ptr_fArray + PK_i));

    printf("\n\n");
    return(0);
}
