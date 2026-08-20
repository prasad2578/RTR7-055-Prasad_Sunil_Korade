#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i, PK_j;

    //code
    printf("\n\n");
    printf("Outer Loop Prints Odd Numbers Between 1 and 10. \n\n");
    printf("Inner Loop Prints Even Numbers Between 1 and 10 For Every Odd Number Printed By Outer Loop. \n\n");

    // condition for a number to be even number => division of number by 2 leaves no remainder (remainder = 0)
    // condition for a number to be odd number => division of number by 2 leaves remainder (remainder = 1 (usually))

    for (PK_i = 1; PK_i <= 10; PK_i++)
    {
        if (PK_i % 2 != 0) //If Number (PK_i) Is Odd..
        {
            printf("PK_i = %d\n", PK_i);
            printf("-----------\n");
            for (PK_j = 1; PK_j <= 10; PK_j++)
            {
                if (PK_j % 2 == 0) //If Number (PK_j) Is Even...
                {
                    printf("\tj = %d\n", PK_j);
                }
                else //If Number (PK_j) Is Odd..
                {
                    continue;
                }
            }
            printf("\n\n");
        }
        else //If Number (PK_i) Is Even...
        {
            continue;
        }
    }

    printf("\n\n");
    return(0);
}
