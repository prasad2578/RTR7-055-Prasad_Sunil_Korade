#include <stdio.h>

int main(void)
{
    char PK_ch;
    char *PK_ptr = NULL;

    PK_ch = 'A';

    printf("\n\n");

    printf(" ****** BEFORE PK_ptr = &PK_ch ****** \n\n");
    printf("Value Of 'PK_ch' = %c\n\n", PK_ch);
    printf("Address Of 'PK_ch' = %p\n\n", &PK_ch);
    printf("Value At Address Of 'PK_ch' = %c\n\n", *(&PK_ch));

    PK_ptr = &PK_ch;

    printf("\n\n");

    printf(" ****** AFTER PK_ptr = &PK_ch ****** \n\n");
    printf("Value Of 'PK_ch' = %c\n\n", PK_ch);
    printf("Address Of 'PK_ch' = %p\n\n", PK_ptr);
    printf("Value At Address Of 'PK_ch' = %c\n\n", *PK_ptr);

    return(0);
}
