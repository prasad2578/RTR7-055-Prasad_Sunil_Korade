#include <stdio.h>
#include <conio.h> // for getch()

int main(void)
{
    // variable declarations
    int a, b;
    int result;
    char option, option_division;

    // code
    printf("\n\n");

    printf("Enter Value For 'A' : ");
    scanf("%d", &a);

    printf("Enter Value For 'B' : ");
    scanf("%d", &b);

    printf("Enter Option In Character : \n\n");
    printf("'A' or 'a' For Addition : \n");
    printf("'S' or 's' For Subtraction : \n");
    printf("'M' or 'm' For Multiplication : \n");
    printf("'D' or 'd' For Division : \n\n");

    printf("Enter Option : ");
    option = getch();

    printf("\n\n");

    switch (option)
    {
        // FALL THROUGH CONDITION FOR 'A' and 'a'
        case 'A':
        case 'a':
            result = a + b;
            printf("Addition Of A = %d And B = %d Gives Result %d !!!\n\n", a, b, result);
            break;

        // FALL THROUGH CONDITION FOR 'S' and 's'
        case 'S':
        case 's':
            if (a >= b)
            {
                result = a - b;
                printf("Subtraction Of B = %d From A = %d Gives Result %d !!!\n\n", b, a, result);
            }
            else
            {
                result = b - a;
                printf("Subtraction Of A = %d From B = %d Gives Result %d !!!\n\n", a, b, result);
            }
            break;

        // FALL THROUGH CONDITION FOR 'M' and 'm'
        case 'M':
        case 'm':
            result = a * b;
            printf("Multiplication Of A = %d And B = %d Gives Result %d !!!\n\n", a, b, result);
            break;

        // FALL THROUGH CONDITION FOR 'D' and 'd'
        case 'D':
        case 'd':
            printf("Enter Option In Character : \n\n");
            printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
            printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

            printf("Enter Option : ");
            option_division = getch();

            printf("\n\n");

            switch (option_division)
            {
                // FALL THROUGH CONDITION FOR 'Q' and 'q' and '/'
                case 'Q':
                case 'q':
                case '/':
                    if (a >= b)
                    {
                        result = a / b;
                        printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", a, b, result);
                    }
                    else
                    {
                        result = b / a;
                        printf("Division Of B = %d By A = %d Gives Quotient = %d !!!\n\n", b, a, result);
                    }
                    break;

                // FALL THROUGH CONDITION FOR 'R' and 'r' and '%'
                case 'R':
                case 'r':
                case '%':
                    if (a >= b)
                    {
                        result = a % b;
                        printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", a, b, result);
                    }
                    else
                    {
                        result = b % a;
                        printf("Division Of B = %d By A = %d Gives Remainder = %d !!!\n\n", b, a, result);
                    }
                    break;

                default: // 'default' case for switch(option_division)
                    printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division);
                    break;
            } // ending curly brace of switch(option_division)

            break; // 'break' of case 'D' or case 'd'

        default: // 'default' case for switch(option)
            printf("Invalid Character %c Entered !!! Please Try Again...\n\n", option);
            break;
    } // ending curly brace of switch(option)

    printf("Switch Case Block Complete !!!\n");

    return(0);
}
