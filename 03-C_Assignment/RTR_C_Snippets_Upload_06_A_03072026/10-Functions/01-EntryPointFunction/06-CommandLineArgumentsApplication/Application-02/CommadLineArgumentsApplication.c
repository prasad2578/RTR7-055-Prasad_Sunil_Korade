#include <stdio.h> // 'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> // 'stdlib.h' contains declaration of 'exit()'

int main(int argc, char *argv[], char *envp[])
{
    int PK_i;

    //code
    if(argc != 4) // Program name + first name + middle name + surname = 4 command line arguments are required
    {
        printf("\n\n");
        printf("Invalid Usage !!! Exitting Now ... \n\n");
        printf("Usage : CommandLineArgumentsApplication <first name> <middle name> <surname>\n\n");
        exit(0);
    }

    printf("\n\n");
    printf("Your Full Name Is : ");
    for (PK_i = 1; PK_i < argc; PK_i++)
    {
        printf("%s ", argv[PK_i]);
    }

    printf("\n\n");

    return(0);
}
