#include <stdio.h> // 'stdio.h' contains declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
    //function prototype / declaration / signature
    void MyAddition(int, int);

    //variable declarations : local variables to main()
    int PK_a, PK_b;

    //code
    printf("\n\n");
    printf("Enter Integer Value For 'A' : ");
    scanf("%d", &PK_a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' : ");
    scanf("%d", &PK_b);

    MyAddition(PK_a, PK_b); //function call

    return(0);
}

void MyAddition(int PK_a, int PK_b) //function definition
{
    //variable declarations : local variables to MyAddition()
    int PK_sum;

    //code
    PK_sum = PK_a + PK_b;
    printf("\n\n");
    printf("Sum Of %d And %d = %d\n\n", PK_a, PK_b, PK_sum);
}

