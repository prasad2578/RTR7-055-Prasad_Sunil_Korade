#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // variable declarations
    unsigned int PK_num;

    // function prototype
    void recursive(unsigned int);

    // code
    printf("\n\n");
    printf("Enter Any Number : \n\n");
    scanf("%u", &PK_num);

    printf("\n\n");
    printf("Output Of Recursive Function : \n\n");

    recursive(PK_num);

    printf("\n\n");
    return(0);
}

void recursive(unsigned int n)
{
    // code
    printf("n = %d\n", n);

    if(n > 0)
    {
        recursive(n - 1);
    }
}
