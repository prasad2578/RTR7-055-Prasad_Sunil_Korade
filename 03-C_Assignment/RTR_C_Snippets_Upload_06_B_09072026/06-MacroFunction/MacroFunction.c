#include <stdio.h>

#define MAX_NUMBER(a, b) ((a > b) ? a : b)

int main(int argc, char *argv[], char *envp[])
{
    // variable declarations
    int PK_iNum_01;
    int PK_iNum_02;
    int PK_iResult;

    float PK_fNum_01;
    float PK_fNum_02;
    float PK_fResult;

    // code
    printf("\n\n");
    printf("Enter An Integer Number : \n\n");
    scanf("%d", &PK_iNum_01);

    printf("\n\n");
    printf("Enter Another Integer Number : \n\n");
    scanf("%d", &PK_iNum_02);

    PK_iResult = MAX_NUMBER(PK_iNum_01, PK_iNum_02);
    printf("\n\n");
    printf("Result Of Macro Function MAX_NUMBER() = %d\n", PK_iResult);

    printf("\n\n");

    printf("\n\n");
    printf("Enter A Floating Point Number : \n\n");
    scanf("%f", &PK_fNum_01);

    printf("\n\n");
    printf("Enter Another Floating Point Number : \n\n");
    scanf("%f", &PK_fNum_02);

    PK_fResult = MAX_NUMBER(PK_fNum_01, PK_fNum_02);
    printf("\n\n");
    printf("Result Of Macro Function MAX_NUMBER() = %f\n", PK_fResult);

    printf("\n\n");

    return(0);
}
