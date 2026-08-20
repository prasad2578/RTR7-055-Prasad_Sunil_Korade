#include <stdio.h>
#include <string.h>

int main(void)
{
    char PK_ch, PK_ch_i;
    unsigned int PK_ascii_ch = 0;

    printf("\n\n");
    printf("Enter The First Character Of First Name : ");
    PK_ch = getch();
    PK_ch = toupper(PK_ch);

    for (PK_ch_i = 'A'; PK_ch_i <= 'Z'; PK_ch_i++)
    {
        if (PK_ch == PK_ch_i)
        {
            PK_ascii_ch = (unsigned int)PK_ch;
            goto result_output;
        }
    }

    printf("\n\n");
    printf("Goto statement not executed, so printing \"Hello, world !!!\".\n");

result_output:
    printf("\n\n");

    if (PK_ascii_ch == 0)
    {
        printf("You must have a strange name! Could not find the character '%c' in the entire English Alphabet!\n", PK_ch);
    }
    else
    {
        printf("Character '%c' found. It has ASCII value %u.\n", PK_ch, PK_ascii_ch);
    }

    printf("\n\n");
    return(0);
}
