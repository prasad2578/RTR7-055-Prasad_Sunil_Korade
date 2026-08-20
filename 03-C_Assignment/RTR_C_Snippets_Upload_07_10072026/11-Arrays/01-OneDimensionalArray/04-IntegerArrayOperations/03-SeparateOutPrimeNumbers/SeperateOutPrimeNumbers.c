#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
    //variable declarations
    int PK_iArray[NUM_ELEMENTS];
    int PK_i, PK_num, PK_j, count = 0;

    //code
    printf("\n\n");

    printf("Enter Integer Elements For Array : \n\n");
    for (PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
    {
        scanf("%d", &PK_num);

        if (PK_num < 0)
          PK_num = -1 * PK_num;

        PK_iArray[PK_i] = PK_num;
    }

    printf("\n\n");
    printf("Array Elements Are : \n\n");
    for (PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
        printf("%d\n", PK_iArray[PK_i]);

    printf("\n\n");
    printf("Prime Numbers Amongst The Array Elements Are : \n\n");
    for (PK_i = 0; PK_i < NUM_ELEMENTS; PK_i++)
    {
        for (PK_j = 1; PK_j <= PK_iArray[PK_i]; PK_j++)
        {
          if ((PK_iArray[PK_i] % PK_j) == 0)
          count++;
        }
    

        if (count == 2)
        printf("%d\n", PK_iArray[PK_i]);
        count = 0; 
    }

    return(0);
}


