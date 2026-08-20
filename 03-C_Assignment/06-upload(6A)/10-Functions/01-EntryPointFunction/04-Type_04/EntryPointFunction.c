#include <stdio.h>

//Entry Point funnction => main () => valid return type (int) and 2 parameter (int argc, char *argv[])

int main(int argc,  char *argv[])
{
          //variable declaration 
          int PK_i;

          //code
          printf("\n\n");
          printf("Hello World !!!\n\n");
          printf("Number Of command line Argument = %d\n\n", argc);

          printf("Command Line Argument Passed To This Program Are : \n\n");
          for( PK_i= 0; PK_i < argc; PK_i++)
          {
                    printf("Command Line Argument Number %d = %s\n", (PK_i +1), argv[PK_i]);
          }
          printf("\n\n");
          return(0);

}          

