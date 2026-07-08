#include <stdio.h>
imnt main(void)
{
          //variable declaration 
          int num_month;
          //code 
          printf("\n\n");

          printf("Enter Number of Months(1 to 12) :  ")
          scanf("%d", &num_month);

          printf("\n\n");

          switch (num_month)
          {
          case 1: //like 'if'
              printf("Month Number %d Is january !!!\n\n", num_months);
              break;
          
          case 2: //like 'else if'
              printf("Month Number %d Is FEBRUARY !!!\n\n", num_month);
              break;
          
          case 3: //like 'else if'
              printf("Month Number %d Is MARCH !!!\n\n", num_month);
              break;
          
          case 4: //like 'else if'
              printf("Month Number %d Is APRIL !!!\n\n", num_month);
              break;
          
          case 5: //like 'else if'
              printf("Month Number %d Is MAY !!!\n\n", num_month);
              break;
          
          case 6: //like 'else if'
              printf("Month Number %d Is JUNE !!!\n\n", num_month);
              break;
          
          case 7: //like 'else if'
              printf("Month Number %d Is JULY !!!\n\n", num_month);
              break;
          
          case 8: //like 'else if'
              printf("Month Number %d Is AUGUST !!!\n\n", num_month);
              break;
          
          case 9: //like 'else if'
              printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month);
              break;
          
          case 10: //like 'else if'
             printf("Month Number %d Is OCTOBER !!!\n\n", num_month);
              break;
          
          case 11: //like 'else if'
              printf("Month Number %d Is NOVEMBER !!!\n\n", num_month);
              break;
          
          case 12: //like 'else if'
              printf("Month Number %d Is DECEMBER !!!\n\n", num_month);
              break;
          
          default: //like ending optional else just like terminating else is optional in if else if else ladder so is the default 
              printf("Invalid Month Number !!! please try again........\n\n",num_month);
              break;
          }
                    
          printf("Switch Case Block Complete !!!\n\n");
                    
          return(0);

}
