#include <stdio.h> //'stdio.h' contains declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters (int ? argc, char *argv[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
    //variable declarations
    int PK_i;

    //code
    printf("\n\n");
    printf("Hello World !!!\n\n"); //Library function

    printf("Number Of Command Line Arguments = %d\n\n", argc);

    printf("Command Line Arguments Passed To This Program Are : \n\n");
    for (PK_i = 0; PK_i < argc; PK_i++)
    {
        printf("Command Line Argument Number %d = %s\n", (PK_i + 1), argv[PK_i]);
    }
    printf("\n\n");

    printf("First 20 Environmental Variables Passed To This Program Are : \n\n");
    for (PK_i = 0; PK_i < 20; PK_i++)
    {
        printf("Environmental Variable Number %d = %s\n", (PK_i + 1), envp[PK_i]);
    }
    printf("\n\n");
    return(0);
}
