#include <stdio.h>

int main(void)
{
    //function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    //variable declarations
    unsigned int PK_a;
    unsigned int PK_num_bits;
    unsigned int PK_result;

    //code
    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &PK_a);

    printf("\n\n");
    printf("By How Many Bits Do You Want To Shift A = %d To The Right ? ", PK_a);
    scanf("%u", &PK_num_bits);

    printf("\n\n\n\n");
    PK_result = PK_a >> PK_num_bits;
    printf("Bitwise RIGHT-SHIFTing A = %d By %d Bits \nGives The Result = %d (Decimal).\n\n", PK_a, PK_num_bits, PK_result);
    PrintBinaryFormOfNumber(PK_a);
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
    int PK_i;

    // code
    for (PK_i = 0; PK_i < 8; PK_i++)
        PK_binary_array[PK_i] = 0;

    printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number);
    PK_num = decimal_number;
    PK_i = 7;
    while (PK_num != 0)
    {
        PK_quotient = PK_num / 2;
        PK_remainder = PK_num % 2;
        PK_binary_array[PK_i] = PK_remainder;
        PK_num = PK_quotient;
        PK_i--;
    }

    for (PK_i = 0; PK_i < 8; PK_i++)
        printf("%u", PK_binary_array[PK_i]);

    printf("\n\n");
}
