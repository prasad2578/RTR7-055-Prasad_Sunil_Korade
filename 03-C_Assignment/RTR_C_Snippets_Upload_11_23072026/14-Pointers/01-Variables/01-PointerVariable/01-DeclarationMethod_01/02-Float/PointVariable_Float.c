#include <stdio.h>

int main(void)
{
    float PK_num;
    float *PK_ptr = NULL;

    //code
    PK_num = 6.9f;

    printf("\n\n");

    printf(" ****** BEFORE PK_ptr = &PK_num ****** \n\n");
    printf("Value Of 'PK_num' = %f\n\n", PK_num);
    printf("Address Of 'PK_num' = %p\n\n", &PK_num);
    printf("Value At Address Of 'PK_num' = %f\n\n", *(&PK_num) );

    PK_ptr = &PK_num;

    printf("\n\n");

    printf(" ****** AFTER PK_ptr = &PK_num ****** \n\n");
    printf("Value Of 'PK_num' = %f\n\n", PK_num);
    printf("Address Of 'PK_num' = %p\n\n", PK_ptr);
    printf("Value At Address Of 'PK_num' = %f\n\n", *PK_ptr);

    return(0);
}
