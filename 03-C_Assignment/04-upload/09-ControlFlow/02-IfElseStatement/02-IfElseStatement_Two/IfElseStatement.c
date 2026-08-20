#include <stdio.h>
int main(void)
{
          //variable declaration 
          int PK_age;

          // code 
          printf("\n\n");
          printf("Enter Age : ");
          scanf("%d", &PK_age);
          printf("\n\n");
          if (PK_age >= 18 )
          {
                    printf("Enter if- block.....\n\n");
                    printf("You are  Eligible For Voting !!!!\n\n");
          }
          else
          {
                    printf("ENtering else-block.....\n\n");
                    printf("You are NOT Eligible For Voting !!!!\n\n");
          }
          printf("Bye !!!!\n\n");
          return(0);
}
