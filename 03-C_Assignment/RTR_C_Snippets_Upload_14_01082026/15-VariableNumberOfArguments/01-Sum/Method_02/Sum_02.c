#include <stdio.h>
#include <stdarg.h>

int main(void)
{
    int CalculateSum(int, ... );

    int PK_answer;

    printf("\n\n");
    PK_answer = CalculateSum(5, 10, 20, 30, 40, 50);
    printf("Answer = %d\n\n", PK_answer);

    PK_answer = CalculateSum(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    printf("Answer = %d\n\n", PK_answer);

    PK_answer = CalculateSum(0);
    printf("Answer = %d\n\n", PK_answer);

    return(0);
}

int CalculateSum(int PK_num, ... )
{
    int PK_sum_total = 0;
    int PK_n;
    va_list PK_numbers_list;

    va_start(PK_numbers_list, PK_num);
    while(PK_num)
    {
        PK_n = va_arg(PK_numbers_list, int);
        PK_sum_total = PK_sum_total + PK_n;
        PK_num--;
    }
    va_end(PK_numbers_list);
    return(PK_sum_total);
}
