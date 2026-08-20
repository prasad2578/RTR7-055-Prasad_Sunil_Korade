#include<stdio.h>

void change_count_two(void)
{
          //code
          extern int PK_global_count;
          PK_global_count = PK_global_count +1;
          printf("change_count_two() : value of PK_global_count in File_02 = %d\n", PK_global_count);
}
