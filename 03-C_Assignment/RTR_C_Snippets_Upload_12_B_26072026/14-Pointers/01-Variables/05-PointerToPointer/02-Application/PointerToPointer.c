#include <stdio.h>

int main(void)
{
    int PK_num;
    int *PK_ptr = NULL;
    int **PK_pptr = NULL;

    PK_num = 10;

    printf("\n\n");

    printf(" ****** BEFORE PK_ptr = &PK_num ****** \n\n");
    printf("Value Of 'PK_num' = %d\n\n", PK_num);
    printf("Address Of 'PK_num' = %p\n\n", &PK_num);
    printf("Value At Address Of 'PK_num' = %d\n\n", *(&PK_num));

    PK_ptr = &PK_num;

    printf("\n\n");

    printf(" ****** AFTER PK_ptr = &PK_num ****** \n\n");
    printf("Value Of 'PK_num' = %d\n\n", PK_num);
    printf("Address Of 'PK_num' = %p\n\n", PK_ptr);
    printf("Value At Address Of 'PK_num' = %d\n\n", *PK_ptr);

    PK_pptr = &PK_ptr;

    printf("\n\n");

    printf(" ****** AFTER PK_pptr = &PK_ptr ****** \n\n");
    printf("Value Of 'PK_num' = %d\n\n", PK_num);
    printf("Address Of 'PK_num' (PK_ptr) = %p\n\n", PK_ptr);
    printf("Address Of 'PK_ptr' (PK_pptr) = %p\n\n", PK_pptr);
    printf("Value At Address Of 'PK_ptr' (*PK_pptr) = %p\n\n", *PK_pptr);
    printf("Value At Address Of 'PK_num' (*PK_ptr) (*PK_pptr) = %d\n\n", **PK_pptr);

    return(0);
}
