#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
    //variable declarations
    int PK_iArray[NUM_ELEMENTS];
    int PK_i, PK_num, sum = 0;

    //code
    printf("\n\n");

    printf("Enter Integer Elements For Array : \n\n");
    for (PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
    {
        scanf("%d", &PK_num);
        PK_iArray[PK_i] = PK_num;
    }

    printf("\n\n");
    printf("Even Numbers Amongst The Array Elements Are : \n\n");
    for (PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
    {
        if ((PK_iArray[PK_i] % 2) == 0)
          printf("%d\n", PK_iArray[PK_i]);
    }

    printf("\n\n");
    printf("Odd Numbers Amongst The Array Elements Are : \n\n");
    for (PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
    {
        if ((PK_iArray[PK_i] % 2) != 0)
            printf("%d\n", PK_iArray[PK_i]);
    }

    return(0);
}
