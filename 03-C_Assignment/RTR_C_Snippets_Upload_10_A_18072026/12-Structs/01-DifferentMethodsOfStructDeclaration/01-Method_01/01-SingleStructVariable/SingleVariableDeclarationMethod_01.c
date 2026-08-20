#include <stdio.h>

struct MyData
{
    int PK_i;
    float PK_f;
    double PK_d;
    char c;
} data; 

int main(void)
{
    //variable declarations
    int PK_i_size;
    int PK_f_size;
    int PK_d_size;
    int PK_struct_MyData_size;

    data.PK_i = 30;
    data.PK_f = 11.45f;
    data.PK_d = 1.2995;

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("PK_i = %d\n", data.PK_i);
    printf("PK_f = %f\n", data.PK_f);
    printf("PK_d = %lf\n", data.PK_d);

    PK_i_size = sizeof(data.PK_i);
    PK_f_size = sizeof(data.PK_f);
    PK_d_size = sizeof(data.PK_d);

    printf("\n\n");
    printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("Size of 'PK_i' = %d bytes\n", PK_i_size);
    printf("Size of 'PK_f' = %d bytes\n", PK_f_size);
    printf("Size of 'PK_d' = %d bytes\n", PK_d_size);

    PK_struct_MyData_size = sizeof(struct MyData);

    printf("\n\n");
    printf("Size of 'struct MyData' : %d bytes\n\n", PK_struct_MyData_size);

    return(0);
}
