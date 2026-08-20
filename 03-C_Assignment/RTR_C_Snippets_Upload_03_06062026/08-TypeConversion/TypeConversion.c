#include <stdio.h>

int main(void)
{
    //variable declarations
    int PK_i, PK_j;
    char PK_ch_01, PK_ch_02;

    int PK_a, PK_result_int;
    float PK_f, PK_result_float;

    int PK_i_explicit;
    float PK_f_explicit;

    //code
    printf("\n\n");

    //INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES....
    PK_i = 70;
    PK_ch_01 = PK_i;
    printf("I = %d\n", PK_i);
    printf("Character 1 (after PK_ch_01 = PK_i) = %c\n\n", PK_ch_01);

    PK_ch_02 = 'Q';
    PK_j = PK_ch_02;
    printf("Character 2 = %c\n", PK_ch_02);
    printf("J (after PK_j = PK_ch_02) = %d\n\n", PK_j);

    //IMPLICIT CONVERSION OF 'int' TO 'float'...
    PK_a = 5;
    PK_f = 7.8f;
    PK_result_float = PK_a + PK_f;
    printf("Integer PK_a = %d And Floating-Point Number %f Added Gives Floating-Point Sum = %f\n", PK_a, PK_f, PK_result_float);

    PK_result_int = PK_a + PK_f;
    printf("Integer PK_a = %d And Floating-Point Number %f Added Gives Integer Sum = %d\n\n", PK_a, PK_f, PK_result_int);

    //EXPLICIT TYPE-CASTING USING CAST OPERATOR...
    PK_f_explicit = 30.121995f;
    PK_i_explicit = (int)PK_f_explicit;
    printf("Floating Point Number Which Will be Type Casted Explicitly = %f\n", PK_f_explicit);
    printf("Resultant Integer After Explicit Type Casting Of %f = %d\n\n", PK_f_explicit, PK_i_explicit);

    return(0);
}
