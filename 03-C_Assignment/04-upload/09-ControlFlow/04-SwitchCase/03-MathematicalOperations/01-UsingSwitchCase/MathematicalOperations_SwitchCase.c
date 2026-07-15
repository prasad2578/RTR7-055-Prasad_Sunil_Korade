#include <stdio.h>
#include <conio.h> // for getch()

int main(void)
{
    // variable declarations
    int PK_a, PK_b;
    int PK_result;
    char PK_option, PK_option_division;

    // code
    printf("\n\n");

    printf("Enter Value For 'A' : ");
    scanf("%d", &PK_a);

    printf("Enter Value For 'B' : ");
    scanf("%d", &PK_b);

    printf("Enter Option In Character : \n\n");
    printf("'A' or 'a' For Addition : \n");
    printf("'S' or 's' For Subtraction : \n");
    printf("'M' or 'm' For Multiplication : \n");
    printf("'D' or 'd' For Division : \n\n");

    printf("Enter Option : ");
    PK_option = getch();

    printf("\n\n");

    switch (PK_option)
    {
        // FALL THROUGH CONDITION FOR 'A' and 'PK_a'
        case 'A':
        case 'PK_a':
            PK_result = PK_a + PK_b;
            printf("Addition Of A = %d And B = %d Gives Result %d !!!\n\n", PK_a, PK_b, PK_result);
            break;

        // FALL THROUGH CONDITION FOR 'S' and 's'
        case 'S':
        case 's':
            if (PK_a >= PK_b)
            {
                PK_result = PK_a - PK_b;
                printf("Subtraction Of B = %d From A = %d Gives Result %d !!!\n\n", PK_b, PK_a, PK_result);
            }
            else
            {
                PK_result = PK_b - PK_a;
                printf("Subtraction Of A = %d From B = %d Gives Result %d !!!\n\n", PK_a, PK_b, PK_result);
            }
            break;

        // FALL THROUGH CONDITION FOR 'M' and 'm'
        case 'M':
        case 'm':
            PK_result = PK_a * PK_b;
            printf("Multiplication Of A = %d And B = %d Gives Result %d !!!\n\n", PK_a, PK_b, PK_result);
            break;

        // FALL THROUGH CONDITION FOR 'D' and 'd'
        case 'D':
        case 'd':
            printf("Enter Option In Character : \n\n");
            printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
            printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

            printf("Enter Option : ");
            PK_option_division = getch();

            printf("\n\n");

            switch (PK_option_division)
            {
                // FALL THROUGH CONDITION FOR 'Q' and 'q' and '/'
                case 'Q':
                case 'q':
                case '/':
                    if (PK_a >= PK_b)
                    {
                        PK_result = PK_a / PK_b;
                        printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", PK_a, PK_b, PK_result);
                    }
                    else
                    {
                        PK_result = PK_b / PK_a;
                        printf("Division Of B = %d By A = %d Gives Quotient = %d !!!\n\n", PK_b, PK_a, PK_result);
                    }
                    break;

                // FALL THROUGH CONDITION FOR 'R' and 'r' and '%'
                case 'R':
                case 'r':
                case '%':
                    if (PK_a >= PK_b)
                    {
                        PK_result = PK_a % PK_b;
                        printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", PK_a, PK_b, PK_result);
                    }
                    else
                    {
                        PK_result = PK_b % PK_a;
                        printf("Division Of B = %d By A = %d Gives Remainder = %d !!!\n\n", PK_b, PK_a, PK_result);
                    }
                    break;

                default: // 'default' case for switch(PK_option_division)
                    printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", PK_option_division);
                    break;
            } // ending curly brace of switch(PK_option_division)

            break; // 'break' of case 'D' or case 'd'

        default: // 'default' case for switch(PK_option)
            printf("Invalid Character %c Entered !!! Please Try Again...\n\n", PK_option);
            break;
    } // ending curly brace of switch(PK_option)

    printf("Switch Case Block Complete !!!\n");

    return(0);
}
