#include <stdio.h>
#include <conio.h>
int main(void)
{
//variable declarations
int PK_i, PK_j;

//code
printf("\n\n");

for (PK_i = 1; PK_i <= 20; PK_i++)
{
    for (PK_j = 1; PK_j <= 20; PK_j++)
    {
        if (PK_j > PK_i)
        {
            break;
        }
        else
        {
            printf("* ");
        }
    }
    printf("\n");
}
printf("\n\n");
return(0);
}
