#include <stdio.h>

int main(void)
{
    int PK_AddIntegers(int, int);
    int PK_SubtractIntegers(int, int);
    float PK_AddFloats(float, float);

    typedef int (*PK_AddIntsFnPtr) (int, int);
    PK_AddIntsFnPtr PK_ptrAddTwoIntegers = NULL;
    PK_AddIntsFnPtr PK_ptrFunc = NULL;

    typedef float (*PK_AddFloatsFnPtr) (float, float);
    PK_AddFloatsFnPtr PK_ptrAddTwoFloats = NULL;

    int PK_iAnswer = 0;
    float PK_fAnswer = 0.0f;

    PK_ptrAddTwoIntegers = PK_AddIntegers;
    PK_iAnswer = PK_ptrAddTwoIntegers(9, 30);
    printf("\n\n");
    printf("Sum Of Integers = %d\n\n", PK_iAnswer);

    PK_ptrFunc = PK_SubtractIntegers;
    PK_iAnswer = PK_ptrFunc(9, 30);
    printf("\n\n");
    printf("Subtraction Of Integers = %d\n\n", PK_iAnswer);

    PK_ptrAddTwoFloats = PK_AddFloats;
    PK_fAnswer = PK_ptrAddTwoFloats(11.45f, 8.2f);
    printf("\n\n");
    printf("Sum Of Floating-Point Numbers = %f\n\n", PK_fAnswer);

    return(0);
}

int PK_AddIntegers(int PK_a, int PK_b)
{
    int PK_c;
    PK_c = PK_a + PK_b;
    return(PK_c);
}

int PK_SubtractIntegers(int PK_a, int PK_b)
{
    int PK_c;
    if (PK_a > PK_b)
        PK_c = PK_a - PK_b;
    else
        PK_c = PK_b - PK_a;
    return(PK_c);
}

float PK_AddFloats(float PK_f_num1, float PK_f_num2)
{
    float PK_ans;
    PK_ans = PK_f_num1 + PK_f_num2;
    return(PK_ans);
}
