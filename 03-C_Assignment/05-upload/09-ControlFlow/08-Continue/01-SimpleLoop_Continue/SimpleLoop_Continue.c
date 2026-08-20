#include <stdio.h>
int main(void)
{
//variable declarations
int PK_i;

//code
printf("\n\n");

printf("Printing Even Numbers From 0 to 100: \n\n");

for (PK_i = 0; PK_i <= 100; PK_i++)
{
    // condition for a nuber to be even number => division of number by 2 leaves no remainder (remainder = 0)
    // if remainder is not 0, the number is odd number
    if (PK_i % 2 != 0)
    {
        continue;
    }
    else
    {
        printf("\t%d\n", PK_i);
    }
}

printf("\n\n");

return(0);
}
