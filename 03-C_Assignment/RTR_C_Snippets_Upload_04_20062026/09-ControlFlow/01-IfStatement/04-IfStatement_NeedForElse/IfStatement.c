#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_age;

    //code
    printf("\n\n");
    printf("Enter Age : ");
    scanf("%d", &PK_age);
    if (PK_age >= 18)
    {
        printf("You Are Eligible For Voting !!!\n\n");
    }
    printf("You Are NOT Eligible For Voting !!!\n\n");
    return(0);
}
