#include<stdio.h>
int main(void)
{
          //variable declaration 
          int PK_num;

          //code 
          printf("\n\n");

          printf("Enter Value For 'numl' : ");
          scanf("%d", &PK_num);

          if (PK_num < 0)// if-01 
          {
                    printf("Num = %d IS less Than 0 (NEGATIVE) !!!!\n\n", PK_num);       
          }
          else // else - 01 
          {
                    if ((PK_num > 0)&& (PK_num <= 100))//if - 02 
                    {
                              printf("Num = %d Is Between 0 And 100 !!!\n\n",PK_num);
                    }
                    else // else-02
                    {
                              if((PK_num >100) && (PK_num<=200))//if-03
                              printf("Num = %d Is Between 100 And 200 !!!!\n\n", PK_num );
                              else//else - 03 
                              {
                                        if ((PK_num > 200 )&&(PK_num<=300)) // if -04 
                                        {
                                                  printf("Num = %d Is Between 200 And 300 !!!\n\n",PK_num);
                                        }
                                        else // else-04
                                        {
                                                  if ((PK_num > 300) && (PK_num <= 400))//if -05
                                                  {
                                                            printf("Num = %d Is Between 300 And 400 !!!\n\n", PK_num);
                                                  }
                                                  else//else - 05
                                                  {
                                                            if ((PK_num > 400)&&(PK_num <= 500))//if - 06
                                                            {
                                                                      printf("Num = %d Is BEtween 400 And 500 !!!\n\n", PK_num);                           
                                                            }
                                                            else//else-06
                                                            {
                                                                      printf("Num = %d Is Greater Than 500 !!!\n\n",PK_num);

                                                            }//closing brace of else-06 
                                                  }//closing brace of else-05
                                        }//closing brace of else -04 
                              }//closing brace of else - 03 
                    }//closing brace of else - 02

          }//closing brace of else - 01

          return (0);
}
