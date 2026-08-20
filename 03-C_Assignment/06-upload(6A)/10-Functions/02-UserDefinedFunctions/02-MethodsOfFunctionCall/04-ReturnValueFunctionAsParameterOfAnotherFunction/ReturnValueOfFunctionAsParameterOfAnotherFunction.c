#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    //function prototypes OR declarations
    int MyAddition(int, int);

    //variable declarations
    int PK_r;
    int PK_num_01, PK_num_02;
    int PK_num_03, PK_num_04;

    //code
    PK_num_01 = 10;
    PK_num_02 = 20;
    PK_num_03 = 30;
    PK_num_04 = 40;

    PK_r = MyAddition(MyAddition(PK_num_01, PK_num_02), MyAddition(PK_num_03, PK_num_04)); 

    printf("\n\n");
    printf("%d + %d + %d + %d = %d\n", PK_num_01, PK_num_02, PK_num_03, PK_num_04, PK_r);
    printf("\n\n");

    return(0);
}

int MyAddition(int a, int b) //function definition
{
    // variable declaration
    int PK_sum;

    // code
    PK_sum = a + b;
    return(PK_sum);
}
