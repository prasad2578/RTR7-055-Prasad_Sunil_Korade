#include <stdio.h>

int main(void)
{
    // function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    // variable declarations
    unsigned int PK_a;
    unsigned int PK_b;
    unsigned int PK_result;

    // code
    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &PK_a);

    printf("\n\n");
    printf("Enter Another Integer = ");
    scanf("%u", &PK_b);

    printf("\n\n\n\n");
    PK_result = PK_a & PK_b;
    printf("Bitwise AND-ing of \nA = %d (Decimal) and B = %d (Decimal) gives PK_result %d (Decimal).\n\n", PK_a, PK_b, PK_result);

    PrintBinaryFormOfNumber(PK_a);
    PrintBinaryFormOfNumber(PK_b);
    PrintBinaryFormOfNumber(PK_result);

    return(0);
}
    void PrintBinaryFormOfNumber(unsigned int decimal_number)
//this will covered in array 
{

    // variable declarations
    unsigned int PK_quotient, PK_remainder;
    unsigned int PK_num;
    unsigned int PK_binary_array[8];
    int i;

    // code
    for (i = 0; i < 8; i++)
        PK_binary_array[i] = 0;

    printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number);
    PK_num = decimal_number;
    i = 7;
    while (PK_num != 0)
    {
        PK_quotient = PK_num / 2;
        PK_remainder = PK_num % 2;
        PK_binary_array[i] = PK_remainder;
        PK_num = PK_quotient;
        i--;
    }

    for (i = 0; i < 8; i++)
        printf("%u", PK_binary_array[i]);

    printf("\n\n");
}

