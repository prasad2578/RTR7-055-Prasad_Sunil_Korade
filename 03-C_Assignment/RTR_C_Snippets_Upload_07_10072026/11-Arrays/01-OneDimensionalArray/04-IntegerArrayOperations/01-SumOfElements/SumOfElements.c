#include<stdio.h>

#define NUM_ELEMENTS 10 

int main(void)
{
          //variable declaration 
          int PK_iArray[NUM_ELEMENTS];
          int PK_i, PK_num, PK_sum =0;

          //code
          printf("\n\n");
          printf("Enter Integer Elements For Array : \n\n");
          for(PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
          {
                    scanf("%d", &PK_num);
                    PK_iArray[PK_i] = PK_num;
          }
          for (PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
          {
                    PK_sum = PK_sum + PK_iArray[PK_i];

          }

          printf("\n\n");
          printf("Sum Of ALL Element Of Array = %d\n\n", PK_sum);

          return(0);
}
