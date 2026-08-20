#include <stdio.h>

extern int PK_global_count;

void change_count_one(void)
{
          //code
          PK_global_count = PK_global_count + 1;
          printf("change_count_one() : value of PK_global_count in File_01 = %d\n", PK_global_count);

}

