#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(int, int);

    //variable declarations
    int PK_r;
    int PK_num_01, PK_num_02;

    //code
    PK_num_01 = 20;
    PK_num_02 = 30;

    printf("\n\n");
    printf("%d + %d = %d\n", PK_num_01, PK_num_02, MyAddition(PK_num_01, PK_num_02));
    printf("\n\n");

    return(0);
}

int MyAddition(int a, int b) //function definition
{
    // function prototype
    int Add(int, int);

    // code
    return(Add(a, b)); 
}

int Add(int x, int y)
{
    // code
    return(x + y);
}
