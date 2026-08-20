#include <stdio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char c;
};

struct MyData PK_data = { 9, 8.2f, 9.61998, 'P' };

int main(void)
{
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", PK_data.i);
    printf("f = %f\n", PK_data.f);
    printf("d = %lf\n", PK_data.d);
    printf("c = %c\n\n", PK_data.c);

    return(0);
}
