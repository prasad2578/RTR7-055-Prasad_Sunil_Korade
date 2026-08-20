#include <stdio.h>

int main(void)
{
    int PK_num;
    int *PK_ptr = NULL;
    int PK_ans;

    PK_num = 5;
    PK_ptr = &PK_num;

    printf("\n\n");
    printf(" PK_num = %d\n", PK_num);
    printf(" &PK_num = %p\n", &PK_num);
    printf(" *(&PK_num) = %d\n", *(&PK_num));
    printf(" PK_ptr = %p\n", PK_ptr);
    printf(" *PK_ptr = %d\n", *PK_ptr);

    printf("\n\n");

    printf("Answer Of (PK_ptr + 10) = %p\n", (PK_ptr + 10));
    printf("Answer Of *(PK_ptr + 10) = %d\n", *(PK_ptr + 10));
    printf("Answer Of (*PK_ptr + 10) = %d\n\n", (*PK_ptr + 10));

    ++*PK_ptr;
    printf("Answer Of ++*PK_ptr : %d\n", *PK_ptr);

    *PK_ptr++;
    printf("Answer Of *PK_ptr++ : %d\n", *PK_ptr);

    PK_ptr = &PK_num;
    (*PK_ptr)++;
    printf("Answer Of (*PK_ptr)++ : %d\n\n", *PK_ptr);

    return(0);
}
