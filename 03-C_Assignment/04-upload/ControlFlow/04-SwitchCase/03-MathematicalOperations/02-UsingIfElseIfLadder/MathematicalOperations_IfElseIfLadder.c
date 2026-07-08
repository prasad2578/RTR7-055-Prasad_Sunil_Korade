#include <stdio.h>
#include <conio.h>

int main(void)
{
    //variable declaratio
    int a, b;
    int result;

    char option, option_division;

    //code 
    printf("\n\n");

    printf("Enter value For 'A' : ");
    scanf("%d", &a);

    printf("Enter value For 'B' : ");
    scanf("%d", &b);

    printf("Enter OPtion In CHaracter : \n\n");
    printf("'A' or 'a' For Addition : \n\n");
    printf("'S' or 's' For substraction : \n\n");
    printf("'M' or 'm' For Multiplication : \n\n");
    printf("'D' or 'd' For Division : \n\n");

    printf("Enter Option : ");
    option = getch();

    printf("\n\n");

    if (option == 'A' || option == 'a' )
    {
        result = a + b;
        printf("Addition Of A = %d And B = %d Gives Result %d !!! \n\n", a, b, result);
    }
    else if (option == 'S' || option == 's')
    {
        if (a >= b)
        {
            result = a - b;
            printf("Substraction Of B = %d From A = %d Gives Result %d !!!\n\n", b, a, result);

        }
        else 
        {
            result = b - a;
            printf("Substraction Of A = %d From B = %d Gives Result %d !!!\n\n", a, b, result);

        }
    }
    else if(option == 'M' || option == 'm')
        {
            result = a*b ;
            printf("MUltiplication Of A = %d And B = %d GIves Result %d !!!\n\n", a, b, result);  
        }
    else if (option == 'D' || option == 'd')
    {
            printf("Enter Option In Character : \n\n");
            printf(" 'Q' or 'q' or '/' For QUotient upon Division : \n");
            printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

            printf("Enter Option : ");
            option_division = getch();

            printf("\n\n");

            if (option_division == 'Q' || option_division == 'q' || option_division == '/')
            {
                if (a >= b)
                {
                    result = a / b;
                    printf("Division of A = %d By B = %d Gives Quotient = %d !!!\n\n", a, b, result);
                }
                else
                {
                    result = b / a;
                    printf("Division of B = %d By A = %d Gives Quotient = %d !!! \n\n", a, b, result);

                }
            }


    
        else if (option_division == 'R' || option_division == 'r' || option_division == '%')
        {
            if (a >= b)
            {
                result = a % b;
                printf("Division Of B = %d By A = %d Gives Reminder = %d !!!\n\n", b, a, result);
            }
            else
            {
                result = b % a;
                printf("Division Of B = %d By A = %d Gives Reminder = %d !!!!\n\n", b, a, result);
            }
        }
        
         else
         printf("Invalid Chracter %c Entered For Division !!! Please Try Again.....\n\n", option_division);

    }
        else
        printf("Invalid Character %c Entered !!! Please try again.......\n\n", option);
        printf("IF - Else If - Else Ladder Complete !!!!\n");
 return(0);

}
