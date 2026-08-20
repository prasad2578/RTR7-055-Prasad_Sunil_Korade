#include<stdio.h>

int main(void)
{

          int PK_a = 5;

          void change_count(void);

          printf("\n");
          printf("A = %d\n\n", PK_a);

          change_count();

          change_count();

          change_count();

          return(0);


}

void change_count(void)
{
          int PK_local_count = 0;

          PK_local_count = PK_local_count  +1;
          printf("Local Count = %d\n", PK_local_count);

}