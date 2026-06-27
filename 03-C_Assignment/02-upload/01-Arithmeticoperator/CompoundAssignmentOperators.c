#include<stdio.h>

int main(void)
{
    //variable declaration 
    int a;
    int b;
    int x;
    
    //code
    printf("\n\n");
    printf("Enter A Number: ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Another Number: ");
    scanf("%d", &b);

    printf("\n\n");

    x=a;
    a+=b;//a=a+b
    printf("addition of A=%d and B=%d gives %d.\n", x, b, a);

    // value of a altered in all above expresion is used here 

    
}