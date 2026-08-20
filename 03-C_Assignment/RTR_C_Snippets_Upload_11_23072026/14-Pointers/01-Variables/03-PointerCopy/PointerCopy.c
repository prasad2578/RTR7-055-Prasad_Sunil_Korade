#include <stdio.h>

int main(void)
{
    int PK_num;
    int *PK_ptr = NULL;
    int *PK_copy_ptr = NULL;

    PK_num = 5;
    PK_ptr = &PK_num;

    printf("\n\n");
    printf(" ** BEFORE PK_copy_ptr = PK_ptr ** \n\n");
    printf(" PK_num = %d\n", PK_num);
    printf(" &PK_num = %p\n", &PK_num);
    printf(" *(&PK_num) = %d\n", *(&PK_num));
    printf(" PK_ptr = %p\n", PK_ptr);
    printf(" *PK_ptr = %d\n", *PK_ptr);

    PK_copy_ptr = PK_ptr;

    printf("\n\n");
    printf(" ****** AFTER PK_copy_ptr = PK_ptr ****** \n\n");
    printf(" PK_num = %d\n", PK_num);
    printf(" &PK_num = %p\n", &PK_num);
    printf(" *(&PK_num) = %d\n", *(&PK_num));
    printf(" PK_ptr = %p\n", PK_ptr);
    printf(" *PK_ptr = %d\n", *PK_ptr);
    printf(" PK_copy_ptr = %p\n", PK_copy_ptr);
    printf(" *PK_copy_ptr = %d\n", *PK_copy_ptr);

    return(0);
}
