#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_num;

    //code
    printf("\n\n");

    printf("Enter Value For 'PK_num' : ");
    scanf("%d", &PK_num);

    if (PK_num < 0)
    {
        printf("Num = %d Is Less Than 0 (NEGATIVE).\n\n", PK_num);
    }

    if ((PK_num > 0) && (PK_num <= 100))
    {
        printf("Num = %d Is Between 0 And 100.\n\n", PK_num);
    }

    if ((PK_num > 100) && (PK_num <= 200))
    {
        printf("Num = %d Is Between 100 And 200.\n\n", PK_num);
    }

    if ((PK_num > 200) && (PK_num <= 300))
    {
        printf("Num = %d Is Between 200 And 300.\n\n", PK_num);
    }

    if ((PK_num > 300) && (PK_num <= 400))
    {
        printf("Num = %d Is Between 300 And 400.\n\n", PK_num);
    }

    if ((PK_num > 400) && (PK_num <= 500))
    {
        printf("Num = %d Is Between 400 And 500.\n\n", PK_num);
    }

    if (PK_num > 500)
    {
        printf("Num = %d Is Greater Than 500.\n\n", PK_num);
    }

    return(0);
}
