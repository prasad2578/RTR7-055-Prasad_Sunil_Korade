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
          
          printf("\n\n");
          printf("Sum Of All Integer Command Line Argument Is : \n\n");
          for(PK_i = 1; PK_i<argc; PK_i++)
                    PK_num = atoi(argv[PK_i]);
                    PK_sum = PK_sum + PK_num;

          }
          printf("Sum = %d\n\n", PK_sum);
          return(0);
}
