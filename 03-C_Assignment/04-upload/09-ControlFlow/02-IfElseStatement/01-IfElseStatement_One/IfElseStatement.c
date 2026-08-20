#include <stdio.h>
int main(void)
{
          //variable declaration
          int PK_a, PK_b, PK_p;

          //code
          PK_a = 9;
          PK_b = 30;
          PK_p = 20;

          // first if else pair 
          printf("\n\n");
          if ( PK_a < PK_b )
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
          if (PK_b != PK_p)
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
