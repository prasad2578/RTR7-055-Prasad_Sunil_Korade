#include <stdio.h>

struct PK_MyData
{
    int *PK_ptr_i;
    int PK_i;

    float *PK_ptr_f;
    float PK_f;

    double *PK_ptr_d;
    double PK_d;
};

int main(void)
{
    struct PK_MyData PK_data;

    PK_data.PK_i = 9;
    PK_data.PK_ptr_i = &PK_data.PK_i;

    PK_data.PK_f = 25.03f;
    PK_data.PK_ptr_f = &PK_data.PK_f;

    PK_data.PK_d = 30.382512;
    PK_data.PK_ptr_d = &PK_data.PK_d;

    printf("\n\n");
    printf("i = %d\n", *(PK_data.PK_ptr_i));
    printf("Address Of 'i' = %p\n", PK_data.PK_ptr_i);

    printf("\n\n");
    printf("f = %f\n", *(PK_data.PK_ptr_f));
    printf("Address Of 'f' = %p\n", PK_data.PK_ptr_f);

    printf("\n\n");
    printf("d = %lf\n", *(PK_data.PK_ptr_d));
    printf("Address Of 'd' = %p\n", PK_data.PK_ptr_d);

    return(0);
}
