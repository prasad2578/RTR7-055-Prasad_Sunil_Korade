#include<stdio.h>

int main(void)
{
    //variable declaration 
    int PK_a;
    int PK_b;
    int PK_x;
    
    //code
    printf("\n\n");
    printf("Enter A Number: ");
    scanf("%d", &PK_a);

    printf("\n\n");
    printf("Enter Another Number: ");
    scanf("%d", &PK_b);

    printf("\n\n");

    PK_x=PK_a;
    PK_a+=PK_b;//PK_a=PK_a+PK_b
    printf("addition of A=%d and B=%d gives %d.\n", PK_x, PK_b, PK_a);

    
    
    
    PK_x = PK_a;
    PK_a -= PK_b; // PK_a = PK_a - PK_b
    printf("Subtraction Of A = %d And B = %d Gives %d.\n", PK_x, PK_b, PK_a);
    
    PK_x = PK_a;
    PK_a*=PK_b; // PK_a = PK_a * PK_b
    printf("Multiplication Of A = %d And B = %d Gives %d.\n", PK_x, PK_b, PK_a);
    
    PK_x = PK_a;
    PK_a /= PK_b; // PK_a = PK_a / PK_b
    printf("Division Of A = %d And B = %d Gives Quotient %d.\n", PK_x, PK_b, PK_a);
    
    PK_x = PK_a;
    PK_a %= PK_b; // PK_a = PK_a % PK_b
    printf("Division Of A = %d And B = %d Gives Remainder %d.\n", PK_x, PK_b, PK_a); 

    printf("\n\n");
    return(0); 
}
