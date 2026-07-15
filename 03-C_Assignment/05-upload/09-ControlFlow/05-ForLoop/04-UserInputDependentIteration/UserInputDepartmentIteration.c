#include <stdio.h>
int main(void)
{
    //variable declarations
    int PK_i_num, PK_num, PK_i;

    //code
    printf("\n\n");

    printf("Enter An Integer Value From Which Iteration Must Begin : ");
    scanf("%d", &PK_i_num);

    printf("How Many Digits Do You Want To Print From %d Onwards ? : ", PK_i_num);
    scanf("%d", &PK_num);

    printf("Printing Digits %d to %d : \n\n", PK_i_num, (PK_i_num + PK_num));

    for (PK_i = PK_i_num; PK_i <= (PK_i_num + PK_num); PK_i++)
    {
        printf("\t%d\n", PK_i);
    }

    printf("\n\n");

    return(0);
}