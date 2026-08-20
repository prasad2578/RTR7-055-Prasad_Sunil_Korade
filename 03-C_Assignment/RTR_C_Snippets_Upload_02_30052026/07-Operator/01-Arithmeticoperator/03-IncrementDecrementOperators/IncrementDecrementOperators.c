#include<stdio.h>

int main(void)
{
    //varriable decleration 
    int PK_a = 5;
    int PK_b = 10;

    //code
    printf("\n\n");
    printf("A =%d\n", PK_a);
    printf("A =%d\n", PK_a++);
    printf("A =%d\n", PK_a);
    printf("A =%d\n\n", ++PK_a);

    printf("B =%d\n", PK_b);
    printf("B =%d\n", PK_b--);
    printf("B =%d\n", PK_b);
    printf("B =%d\n", --PK_b);

    return(0);
}
