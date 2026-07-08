#include<stdio.h>

int main(void)

{
    //variable declaration 
    int a;
    int b;
    int result;

    //code 
    printf("\n\n");
    printf("Enter A Number : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Another Number : ");
    scanf("%d", &b);

    printf("\n\n");

    //following are the 5 arithmetic operator +, -, *, / and % 
    // also the resultant of arithmetic operations in all the below five cases have been assigne to the variable 'result' using the assignment operator
    
    result = a + b;
    printf("Addition of A =%d And b=%d gives %d.\n", a, b, result);

    result= a - b;
    printf("Substraction of A = %d and B = %d gives %d.\n", a, b, result);

    result = a*b;
    printf("Multiplication of A= %d and B=%d gives %d.\n", a, b, result);

    result = a / b;
    printf("Division of A=%d and B=%d gives Quotient %d.\n", a, b, result);

    result = a % b;
    printf("Division of A=%d and B=%d gives Reminder %d.\n", a, b, result);


    printf("\n\n");

    return(0);
}
