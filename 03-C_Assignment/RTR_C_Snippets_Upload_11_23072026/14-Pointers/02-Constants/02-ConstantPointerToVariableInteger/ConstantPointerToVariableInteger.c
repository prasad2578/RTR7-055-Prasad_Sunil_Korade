#include <stdio.h>

int main(void)
{
    int PK_num = 5;
    int* const PK_ptr = &PK_num;

    printf("\n");
    printf("Current Value Of 'PK_num' = %d\n", PK_num);
    printf("Current 'PK_ptr' (Address of 'PK_num') = %p\n", PK_ptr);

    PK_num++;
    printf("\n\n");
    printf("After PK_num++, value of 'PK_num' = %d\n", PK_num);

    (*PK_ptr)++;
    printf("\n\n");
    printf("After (*PK_ptr)++, value of 'PK_ptr' = %p\n", PK_ptr);
    printf("Value at this 'PK_ptr' = %d\n", *PK_ptr);
    printf("\n");

    return(0);
}
