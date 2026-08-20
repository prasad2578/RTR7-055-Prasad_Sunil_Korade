#include <stdio.h>
#include <stdarg.h>

#define PK_NUM_TO_BE_FOUND 3
#define PK_NUM_ELEMENTS 10

int main(void)
{
    void FindNumber(int, int, ... );

    printf("\n\n");

    FindNumber(PK_NUM_TO_BE_FOUND, PK_NUM_ELEMENTS, 3, 5, 3, 2, 3, 6, 3, 3, 1, 3);
    return(0);
}

void FindNumber(int PK_num_to_be_found, int PK_num, ... )
{
    int PK_count = 0;
    int PK_n;
    va_list PK_numbers_list;

    va_start(PK_numbers_list, PK_num);
    while(PK_num)
    {
        PK_n = va_arg(PK_numbers_list, int);
        if(PK_n == PK_num_to_be_found)
          PK_count++;
        PK_num--;
    }

    if(PK_count == 0)
        printf("Number %d Could Not Be Found !!! \n\n", PK_num_to_be_found);
    else
        printf("Number %d Found %d Times !!! \n\n", PK_num_to_be_found, PK_count);

    va_end(PK_numbers_list);
}
