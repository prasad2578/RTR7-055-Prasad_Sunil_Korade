#include <stdio.h>

int main(void)
{
    struct MyData
    {
        int i;
        float f;
        double d;
        char c;
    } PK_data = { 5, 9.1f, 3.78623, 'S' };

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", PK_data.i);
    printf("f = %f\n", PK_data.f);
    printf("d = %lf\n", PK_data.d);
    printf("c = %c\n\n", PK_data.c);

    return(0);
}
