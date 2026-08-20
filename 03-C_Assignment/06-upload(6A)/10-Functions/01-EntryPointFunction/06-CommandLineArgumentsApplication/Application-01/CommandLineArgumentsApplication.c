#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
          //variable declarations
          int PK_i;
          int PK_num;
          int PK_sum = 0;

          //code
          if(argc == 1)
          {
                    printf("\n\n");
                    printf("No Number Give For Addition !!! Exitting now ...\n\n");
                    printf("Usage : CommandLineArgumentApplication <first number> <second number> ...\n\n");
                    exit(0);
          }
          //*** THIS PROGRAM ADDS ALL COMMAND LINE ARGUMENT GIVE IN INTEGER FROM ONLY ADD OUTPUT THE SUM ***
          //*** DUE TO USE OF atoi(), ALL COMMAND LINE ARGUMENT OF TYPE OTHER THAN 'int' ARE IGNORED ***
          
          printf("\n\n");
          printf("Sum Of All Integer Command Line Argument Is : \n\n");
          for(PK_i = 1; PK_i<argc; PK_i++)//Loop starts from PK_i = 1 because, PK_i = 0 will result in 'argv'[PK_i] =argv[0] which is the name of program itself PK_i.e : commndlineargumentsapplication.exe
          {
                    PK_num = atoi(argv[PK_i]);
                    PK_sum = PK_sum + PK_num;

          }
          printf("Sum = %d\n\n", PK_sum);
          return(0);
}
