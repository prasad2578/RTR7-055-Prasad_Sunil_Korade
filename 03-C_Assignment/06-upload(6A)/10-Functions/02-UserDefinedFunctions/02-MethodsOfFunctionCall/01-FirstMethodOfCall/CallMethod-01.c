#include <stdio.h> //'stdio.h' contains declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters
// (int argc, char *argv[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
    //function prototypes OR declarations
    void MyAddition(void);
    int MySubtraction(void);
    void MyMultiplication(int, int);
    int MyDivision(int, int);

    //variable declarations
    int PK_result_subtraction;
    int PK_a_multiplication, PK_b_multiplication;
    int PK_a_division, PK_b_division, PK_result_division;

    //code

    // *** ADDITION ***
    MyAddition(); //function call

    // *** SUBTRACTION ***
    PK_result_subtraction = MySubtraction(); //function call
    printf("\n\n");
    printf("Subtraction Yields Result = %d\n", PK_result_subtraction);

    // *** MULTIPLICATION ***
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Multiplication : ");
    scanf("%d", &PK_a_multiplication);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Multiplication : ");
    scanf("%d", &PK_b_multiplication);

    MyMultiplication(PK_a_multiplication, PK_b_multiplication); //function call

    // *** DIVISION ***
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Division : ");
    scanf("%d", &PK_a_division);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Division : ");
    scanf("%d", &PK_b_division);

    PK_result_division = MyDivision(PK_a_division, PK_b_division); //function call
    printf("\n\n");


    printf("Division Of %d and %d Gives = %d (Quotient)\n", PK_a_division, PK_b_division, PK_result_division);
    printf("\n\n");
    return(0);
}

void MyAddition(void) //function definition
{
    int PK_a, PK_b, PK_sum;

    //code
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Addition : ");
    scanf("%d", &PK_a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Addition : ");
    scanf("%d", &PK_b);

    PK_sum = PK_a + PK_b;

    printf("\n\n");
    printf("Sum Of %d And %d = %d\n\n\n", PK_a, PK_b, PK_sum);
}

int MySubtraction(void) //function definition
{
    //variable declarations : local variables to MySubtraction()
    int PK_a, PK_b, PK_subtraction;

    //code
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Subtraction : ");
    scanf("%d", &PK_a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Subtraction : ");
    scanf("%d", &PK_b);

    PK_subtraction = PK_a - PK_b;
    return(PK_subtraction);
}

void MyMultiplication(int PK_a, int PK_b) //function definition
{
    //variable declarations : local variables to MyMultiplication()
    int PK_multiplication;
    
    //code
    PK_multiplication = PK_a * PK_b;
    
    printf("\n\n");
    printf("Multiplication Of %d And %d = %d\n\n", PK_a, PK_b, PK_multiplication);
}

int MyDivision(int PK_a, int PK_b) //function definition
{
    //variable declarations : local variables to MyDivision()
    int PK_division_quotient;

    //code
    if (PK_a > PK_b)
        PK_division_quotient = PK_a / PK_b;
    else
        PK_division_quotient = PK_b / PK_a;

    return(PK_division_quotient);
}
