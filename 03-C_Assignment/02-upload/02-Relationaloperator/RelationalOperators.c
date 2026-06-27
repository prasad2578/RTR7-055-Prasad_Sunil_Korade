#include<stdio.h>

int main(void)

{
    //variable declarations
    int a;
    int b;
    int result;

    //code
    printf("\n\n");
    printf("Enter one Integer : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Another Integer : ");
    scanf("%d", &b);

    printf("\n\n");
    printf("IF answer = 0, it is 'FALSE'.\n");
    printf(" If answer = 1, it is 'TRUE'.\n\n");

    result=(a < b);
    printf("(a < b) A =%d is less than B=%d  \t answer = %d\n", a, b, result);

    result = (a > b);
    printf("(a > b) A=%d is greater than B=%d \t answer = %d\n", a, b, result);

    result=(a <= b);
    printf("(a <= b) A =%d is less than or equal to B=%d  \t answer = %d\n", a, b, result);

    result=(a >= b);
    printf("(a >= b) A =%d is greater than or equal to  B=%d  \t answer = %d\n", a, b, result);

    result=(a == b);
    printf("(a == b) A =%d is equal to  B=%d  \t answer = %d\n", a, b, result);

    result=(a != b);
    printf("(a != b) A =%d is not equal to B=%d  \t answer = %d\n", a, b, result);

    return(0);
}
