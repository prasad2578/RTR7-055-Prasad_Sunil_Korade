#include <stdio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char c;
};

struct MyData PK_data_one = { 35, 3.9f, 1.23765, 'A' };
struct MyData PK_data_two = { 'P', 6.2f, 12.199523, 68 };
struct MyData PK_data_three = { 36, 'G' };
struct MyData PK_data_four = { 79 };

int main(void)
{
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData PK_data_one' ARE : \n\n");
    printf("i = %d\n", PK_data_one.i);
    printf("f = %f\n", PK_data_one.f);
    printf("d = %lf\n", PK_data_one.d);
    printf("c = %c\n", PK_data_one.c);

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData PK_data_two' ARE : \n\n");
    printf("i = %d\n", PK_data_two.i);
    printf("f = %f\n", PK_data_two.f);
    printf("d = %lf\n", PK_data_two.d);
    printf("c = %c\n", PK_data_two.c);

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData PK_data_three' ARE : \n\n");
    printf("i = %d\n", PK_data_three.i);
    printf("f = %f\n", PK_data_three.f);
    printf("d = %lf\n", PK_data_three.d);
    printf("c = %c\n", PK_data_three.c);

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData PK_data_four' ARE : \n\n");
    printf("i = %d\n", PK_data_four.i);
    printf("f = %f\n", PK_data_four.f);
    printf("d = %lf\n", PK_data_four.d);
    printf("c = %c\n", PK_data_four.c);

    return(0);
}
