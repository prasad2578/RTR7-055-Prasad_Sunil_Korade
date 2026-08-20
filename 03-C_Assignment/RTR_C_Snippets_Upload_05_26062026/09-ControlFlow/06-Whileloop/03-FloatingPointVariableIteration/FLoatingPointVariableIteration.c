#include <stdio.h>
int main(void)
{
    //variable declarations
    float PK_f;
    float PK_f_num = 1.7f; 

    //code
    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n", PK_f_num, (PK_f_num * 10.0f));

    PK_f = PK_f_num;
    while(PK_f <= (PK_f_num * 10.0f))
    {
        printf("\t%f\n", PK_f);
        PK_f = PK_f + PK_f_num;
    }

    printf("\n\n");

    return(0);
}
