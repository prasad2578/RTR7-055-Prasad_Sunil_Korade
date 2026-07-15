#include <stdio.h>

int PK_global_count = 0;

int main(void)
{
          //function prototype 
          void change_count_one(void);
          void change_count_two(void);
          void change_count_three(void);

          //code 
          printf("\n");

          printf("main() : Value of PK_global_count = %d\n", PK_global_count);

          change_count_one();
          change_count_two();
          change_count_three();

          printf("\n");

          return(0);
}

// global scope 

void change_count_one(void)
{
          PK_global_count = 100;
          printf("change_count_one() : value of PK_global_count = %d\n", PK_global_count);

}

void change_count_two(void)
{
          //CODE
          PK_global_count = PK_global_count + 1;
          printf("change_count_two() : value of PK_global_count = %d\n", PK_global_count);

}

void change_count_three(void)
{
          PK_global_count = PK_global_count + 10;
          printf("change_count_three() : value of PK_global_count = %d\n", PK_global_count);
}

