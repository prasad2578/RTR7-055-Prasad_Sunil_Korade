#include<stdio.h>

int main(void)

{
    //variable declarations
    int PK_a;
    int PK_b;
    int PK_result;

    //code
    printf("\n\n");
    printf("Enter one Integer : ");
    scanf("%d", &PK_a);

    printf("\n\n");
    printf("Enter Another Integer : ");
    scanf("%d", &PK_b);

    printf("\n\n");
    printf("IF answer = 0, it is 'FALSE'.\n");
    printf(" If answer = 1, it is 'TRUE'.\n\n");

    PK_result=(PK_a < PK_b);
    printf("(PK_a < PK_b) A =%d is less than B=%d  \t answer = %d\n", PK_a, PK_b, PK_result);

    PK_result = (PK_a > PK_b);
    printf("(PK_a > PK_b) A=%d is greater than B=%d \t answer = %d\n", PK_a, PK_b, PK_result);

    PK_result=(PK_a <= PK_b);
    printf("(PK_a <= PK_b) A =%d is less than or equal to B=%d  \t answer = %d\n", PK_a, PK_b, PK_result);

    PK_result=(PK_a >= PK_b);
    printf("(PK_a >= PK_b) A =%d is greater than or equal to  B=%d  \t answer = %d\n", PK_a, PK_b, PK_result);

    PK_result=(PK_a == PK_b);
    printf("(PK_a == PK_b) A =%d is equal to  B=%d  \t answer = %d\n", PK_a, PK_b, PK_result);

    PK_result=(PK_a != PK_b);
    printf("(PK_a != PK_b) A =%d is not equal to B=%d  \t answer = %d\n", PK_a, PK_b, PK_result);

    return(0);
}
