#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
          //varriable declaration 

          int PK_iArray_2D[NUM_ROWS][NUM_COLUMNS];
          int PK_iArray_1D[NUM_ROWS * NUM_COLUMNS];

          int PK_i, PK_j;
          int PK_num;

          //code
          printf("Enter Element Of Your Choice To Fill Up The Integer 2D Array : \n\n");
          for (PK_i = 0; PK_i < NUM_ROWS; PK_i++)
          {
                    printf("For ROW NUMBER %d : \n", (PK_i + 1));
                    for (PK_j = 0 ; PK_j < NUM_COLUMNS; PK_j++)
                    {
                              printf("Enter Element Number %d : \n", (PK_j+1));
                              scanf("%d", &PK_num);
                              PK_iArray_2D[PK_i][PK_j] = PK_num;

                    }
                    printf("\n\n");
          }
          
          printf("\n\n");
          printf("Two-Dimention (2D) Array Of Integer : \n\n");
          for (PK_i = 0; PK_i < NUM_ROWS; PK_i++)
          {
                    printf("************** ROW %d *********\n", (PK_i+1));
                    for ( PK_j = 0; PK_j< NUM_COLUMNS; PK_j++)
                    {
                              printf("PK_iArray_2D[%d][%d] = %d\n", PK_i, PK_j, PK_iArray_2D[PK_i][PK_j]);

                    }
                    printf("\n\n");
          }

          for (PK_i = 0; PK_i < NUM_ROWS; PK_i++)
          {
                    for (PK_j = 0; PK_j < NUM_COLUMNS; PK_j++)
                    {
                              PK_iArray_1D[(PK_i * NUM_COLUMNS) + PK_j] = PK_iArray_2D[PK_i][PK_j];
                    }
          }

          printf("\n\n");
          printf("One-Dimesional (1D) Array Of Integer : \n\n");
          for (PK_i = 0; PK_i< (NUM_ROWS*NUM_COLUMNS); PK_i++)
          {
                    printf("PK_iArray_1D[%d] = %d\n", PK_i, PK_iArray_1D[PK_i]);
          }
          printf("\n\n");

          return(0);
}

