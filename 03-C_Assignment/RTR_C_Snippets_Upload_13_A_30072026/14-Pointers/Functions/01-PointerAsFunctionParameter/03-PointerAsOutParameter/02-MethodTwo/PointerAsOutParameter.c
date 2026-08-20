#include <stdio.h>
#include <stdlib.h>

void TSA_MathematicalOperations(int x, int y, int *sum, int *difference,
                                int *product, int *quotient, int *remainder)
{
    *sum = x + y;
    *difference = x - y;
    *product = x * y;
    *quotient = x / y;
    *remainder = x % y;
}

int main(void)
{
    void TSA_MathematicalOperations(int, int, int *, int *, int *, int *, int *);

    int PK_a;
    int PK_b;
    int *PK_answer_sum = NULL;
    int *PK_answer_difference = NULL;
    int *PK_answer_product = NULL;
    int *PK_answer_quotient = NULL;
    int *PK_answer_remainder = NULL;

    printf("\n\n");
    printf("Enter Value of 'A' :");
    scanf("%d", &PK_a);
    printf("\n\n");
    printf("Enter Value of 'B' :");
    scanf("%d", &PK_b);

    PK_answer_sum = (int*)malloc(1 * sizeof(int));
    if (PK_answer_sum == NULL)
    {
        printf("Could Not Allocate Memory for 'answer_sum' . exiting now.....\n\n");
        exit(0);
    }
    PK_answer_difference = (int*)malloc(1 * sizeof(int));
    if (PK_answer_difference == NULL)
    {
        printf("Could Not Allocate Memory for 'answer_difference' . exiting now.....\n\n");
        exit(0);
    }
    PK_answer_product = (int*)malloc(1 * sizeof(int));
    if (PK_answer_product == NULL)
    {
        printf("Could Not Allocate Memory for 'answer_product' . exiting now.....\n\n");
        exit(0);
    }
    PK_answer_quotient = (int*)malloc(1 * sizeof(int));
    if (PK_answer_quotient == NULL)
    {
        printf("Could Not Allocate Memory for 'answer_quotient' . exiting now.....\n\n");
        exit(0);
    }
    PK_answer_remainder = (int*)malloc(1 * sizeof(int));
    if (PK_answer_remainder == NULL)
    {
        printf("Could Not Allocate Memory for 'answer_remainder' . exiting now.....\n\n");
        exit(0);
    }

    TSA_MathematicalOperations(PK_a, PK_b, PK_answer_sum, PK_answer_difference,PK_answer_product, PK_answer_quotient, PK_answer_remainder);
    printf("\n\n");
    printf("********** RESULT *******\n\n");
    printf("Sum = %d\n\n", *PK_answer_sum);
    printf("Difference = %d\n\n", *PK_answer_difference);
    printf("Product = %d\n\n", *PK_answer_product);
    printf("Quotient = %d\n\n", *PK_answer_quotient);
    printf("Remainder = %d\n\n", *PK_answer_remainder);

    if (PK_answer_remainder)
    {
        free(PK_answer_remainder);
        PK_answer_remainder = NULL;
        printf("Memory allocated for 'answer_remainder' successfully freed !!!\n\n");
    }
    if (PK_answer_quotient)
    {
        free(PK_answer_quotient);
        PK_answer_quotient = NULL;
        printf("Memory allocated for 'answer_quotient' successfully freed !!!\n\n");
    }
    if (PK_answer_product)
    {
        free(PK_answer_product);
        PK_answer_product = NULL;
        printf("Memory allocated for 'answer_product' successfully freed !!!\n\n");
    }
    if (PK_answer_difference)
    {
        free(PK_answer_difference);
        PK_answer_difference = NULL;
        printf("Memory allocated for 'answer_difference' successfully freed !!!\n\n");
    }
    if (PK_answer_sum)
    {
        free(PK_answer_sum);
        PK_answer_sum = NULL;
        printf("Memory allocated for 'answer_sum' successfully freed !!!\n\n");
    }

    return (0);
}
