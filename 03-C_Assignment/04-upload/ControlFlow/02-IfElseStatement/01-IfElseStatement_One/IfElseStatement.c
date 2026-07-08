#include <stdio.h>
int main(void)
{
          //variable declaration
          int a, b, p;

          //code
          a = 9;
          b = 30;
          p = 20;

          // first if else pair 
          printf("\n\n");
          if ( a < b )
          {
                    printf("Entering First if-block...\n\n");
                    printf("A IS Less Than B !!!\n\n");
          }
          else
          {
                    printf("Entering FIrst else-block...\n\n");
                    printf("A Is NOT Less Than B !!!\n\n");

          }
          printf("First is- else Pair Done !!!\n\n");

          //second if- else pair 
          printf("\n\n");
          if (b != p)
          {
                    printf("Entering Second if- block...\n\n");
                    printf("B Is NOT Equal TO P !!!\n\n");

          }
          else
          {
                    printf("Entering Second if-block....\n\n");
                    printf("B Is NOT Equal To P !!!\n\n");          
          }
          printf("Second if- else pair Done !!!\n\n");

          return(0);        
}