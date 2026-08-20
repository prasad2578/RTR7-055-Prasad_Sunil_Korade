#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3
#define DEPTH 2

int main(void)
{
          //variable declaration 

          int PK_iArray[NUM_ROWS][NUM_COLUMNS][DEPTH]={  { { 9, 18 }, { 27, 36 }, { 45, 54}},
                                                      { { 8, 16 }, { 24, 32 }, { 40, 48}},
                                                      { { 7, 14 }, { 21, 28 }, { 35, 42}},
                                                      { { 6, 12 }, { 18, 24 }, { 30, 36}},
                                                      { { 5, 10 }, { 15, 20 }, { 25, 30}} };

          int PK_i, PK_j, PK_k;

          int PK_iArray_1D[NUM_ROWS*NUM_COLUMNS*DEPTH];

          printf("\n\n");
          printf("Element In The 3D Array : \n\n");
          for ( PK_i= 0; PK_i <NUM_ROWS; PK_i++)
          {
                    printf("**** ROW %d ****\n", (PK_i+1));
                    for (PK_j = 0; PK_j < NUM_COLUMNS; PK_j++)
                    {
                              printf("**** COLUMN %d ****\n", (PK_j+1));
                              for ( PK_k= 0; PK_k < DEPTH; PK_k++)
                              {
                                        printf("PK_iArray[%d][%d][%d] = %d\n", PK_i, PK_j, PK_k, PK_iArray[PK_i][PK_j][PK_k]);
                              }
                              printf("\n");
                    }printf("\n");
          }

          for ( PK_i = 0; PK_i < NUM_ROWS; PK_i++)
          {
                    for ( PK_j = 0; PK_j < NUM_COLUMNS; PK_j++)
                    {
                              for( PK_k = 0; PK_k < DEPTH; PK_k++)
                              {
                                        PK_iArray_1D[(PK_i*NUM_COLUMNS*DEPTH)+ (PK_j*DEPTH) + PK_k] = PK_iArray[PK_i][PK_j][PK_k];
                              }
                    }
          }

          printf("\n\n\n\n");
          printf("Element In The 1D Array : \n\n");
          for ( PK_i = 0; PK_i < (NUM_ROWS*NUM_COLUMNS*DEPTH); PK_i++)
          {
                    printf("PK_iArray_1D[%d]= %d\n", PK_i, PK_iArray_1D[PK_i]);
          }

          return(0);

                                                                                 
}

