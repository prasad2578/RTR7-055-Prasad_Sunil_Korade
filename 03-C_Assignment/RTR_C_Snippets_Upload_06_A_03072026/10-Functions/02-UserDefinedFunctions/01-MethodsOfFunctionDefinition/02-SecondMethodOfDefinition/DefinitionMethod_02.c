#include <stdio.h> //'stdio.h' contains declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(void);

    // variable declarations : local variables to main()
    int PK_result;

    // code
    PK_result = MyAddition(); // function call

    printf("\n\n");
    printf("Sum = %d\n\n", PK_result);
    return(0);
}

// USER DEFINED FUNCTION : METHOD OF DEFINITION 2
//  VALID (int) RETURN VALUE, NO PARAMETERS 
int MyAddition(void) // function definition
{
    // variable declarations : local variables to MyAddition()
    int PK_a, PK_b, PK_sum;

    // code
    printf("\n\n");
    printf("Enter Integer Value For 'A' : ");
    scanf("%d", &PK_a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' : ");
    scanf("%d", &PK_b);

    PK_sum = PK_a + PK_b;

    return(PK_sum);
}
