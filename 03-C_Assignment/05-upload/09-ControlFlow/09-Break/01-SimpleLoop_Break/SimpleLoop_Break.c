#include <stdio.h>
#include <conio.h>

int main(void)
{
    //variable declarations
    int PK_i;
    char PK_ch;

    //code
    printf("\n\n");

    printf("Printing Even Numbers From 1 to 100 For Every User Input. Exitting the Loop When User Enters Character 'Q' or 'q' : \n\n");
    printf("Enter Character 'Q' or 'q' To Exit Loop : \n\n");

    for (PK_i = 1; PK_i <= 100; PK_i++)
    {
        printf("\t%d\n", PK_i);
        PK_ch = getch();
        if (PK_ch == 'Q' || PK_ch == 'q')
        {
            break;
        }
    }

    printf("\n\n");
    printf("EXITING LOOP...");
    printf("\n\n");

    return(0);
}
