#include <stdio.h>

int main(void)
{
    void MathematicalOperations(int, int, int *, int *, int *, int *, int *);

    int PK_a;
    int PK_b;
    int PK_answer_sum;
    int PK_answer_difference;
    int PK_answer_product;
    int PK_answer_quotient;
    int PK_answer_remainder;

    printf("\n\n");
    printf("Enter Value Of 'A' : ");
    scanf("%d", &PK_a);
    printf("\n\n");
    printf("Enter Value Of 'B' : ");
    scanf("%d", &PK_b);

    MathematicalOperations(PK_a, PK_b, &PK_answer_sum, &PK_answer_difference, &PK_answer_product, &PK_answer_quotient, &PK_answer_remainder);

    printf("\n\n");
    printf(" ****** RESULTS ****** : \n\n");
    printf("Sum = %d\n\n", PK_answer_sum);
    printf("Difference = %d\n\n", PK_answer_difference);
    printf("Product = %d\n\n", PK_answer_product);
    printf("Quotient = %d\n\n", PK_answer_quotient);
    printf("Remainder = %d\n\n", PK_answer_remainder);
    return(0);
}

void MathematicalOperations(int PK_x, int PK_y, int *PK_sum, int *PK_difference, int *PK_product, int *PK_quotient, int *PK_remainder)
{
    *PK_sum = PK_x + PK_y;
    *PK_difference = PK_x - PK_y;
    *PK_product = PK_x * PK_y;
    *PK_quotient = PK_x / PK_y;
    *PK_remainder = PK_x % PK_y;
}
