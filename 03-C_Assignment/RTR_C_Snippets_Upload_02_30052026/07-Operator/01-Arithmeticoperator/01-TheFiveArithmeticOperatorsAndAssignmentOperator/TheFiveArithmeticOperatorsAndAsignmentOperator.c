#include<stdio.h>

int main(void)

{
    //variable declaration 
    int PK_a;
    int PK_b;
    int PK_result;

    //code 
    printf("\n\n");
    printf("Enter A Number : ");
    scanf("%d", &PK_a);

    printf("\n\n");
    printf("Enter Another Number : ");
    scanf("%d", &PK_b);

    printf("\n\n");

    //following are the 5 arithmetic operator +, -, *, / and % 
    // also the resultant of arithmetic operations in all the below five cases have been assigne to the variable 'PK_result' using the assignment operator
    
    PK_result = PK_a + PK_b;
    printf("Addition of A =%d And B=%d gives %d.\n", PK_a, PK_b, PK_result);

    PK_result= PK_a - PK_b;
    printf("Substraction of A = %d and B = %d gives %d.\n", PK_a, PK_b, PK_result);

    PK_result = PK_a*PK_b;
    printf("Multiplication of A= %d and B=%d gives %d.\n", PK_a, PK_b, PK_result);

    PK_result = PK_a / PK_b;
    printf("Division of A=%d and B=%d gives Quotient %d.\n", PK_a, PK_b, PK_result);

    PK_result = PK_a % PK_b;
    printf("Division of A=%d and B=%d gives Reminder %d.\n", PK_a, PK_b, PK_result);


    printf("\n\n");

    return(0);
}
