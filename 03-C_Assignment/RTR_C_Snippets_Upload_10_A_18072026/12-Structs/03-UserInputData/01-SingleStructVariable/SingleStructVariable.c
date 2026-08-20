#include <stdio.h>
#include <conio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char ch;
};

int main(void)
{
    struct MyData PK_data;

    printf("\n\n");

    printf("Enter Integer Value For Data Member 'i' Of 'struct MyData' : \n");
    scanf("%d", &PK_data.i);

    printf("Enter Floating-Point Value For Data Member 'f' Of 'struct MyData' : \n");
    scanf("%f", &PK_data.f);

    printf("Enter 'Double' Value For Data Member 'd' Of 'struct MyData' : \n");
    scanf("%lf", &PK_data.d);

    printf("Enter Character Value For Data Member 'c' Of 'struct MyData' : \n");
    PK_data.ch = getch();

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", PK_data.i);
    printf("f = %f\n", PK_data.f);
    printf("d = %lf\n", PK_data.d);
    printf("c = %c\n\n", PK_data.ch);

    return(0);
}
