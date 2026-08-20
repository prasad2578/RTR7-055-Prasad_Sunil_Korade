#include <stdio.h>
#include <conio.h>

int main(void)
{
    //variable declaratio
    int PK_a, PK_b;
    int PK_result;

    char PK_option, PK_option_division;

    //code 
    printf("\n\n");

    printf("Enter value For 'A' : ");
    scanf("%d", &PK_a);

    printf("Enter value For 'B' : ");
    scanf("%d", &PK_b);

    printf("Enter OPtion In CHaracter : \n\n");
    printf("'A' or 'a' For Addition : \n\n");
    printf("'S' or 's' For substraction : \n\n");
    printf("'M' or 'm' For Multiplication : \n\n");
    printf("'D' or 'd' For Division : \n\n");

    printf("Enter Option : ");
    PK_option = getch();

    printf("\n\n");

    if (PK_option == 'A' || PK_option == 'PK_a' )
    {
        PK_result = PK_a + PK_b;
        printf("Addition Of A = %d And B = %d Gives Result %d !!! \n\n", PK_a, PK_b, PK_result);
    }
    else if (PK_option == 'S' || PK_option == 's')
    {
        if (PK_a >= PK_b)
        {
            PK_result = PK_a - PK_b;
            printf("Substraction Of B = %d From A = %d Gives Result %d !!!\n\n", PK_b, PK_a, PK_result);

        }
        else 
        {
            PK_result = PK_b - PK_a;
            printf("Substraction Of A = %d From B = %d Gives Result %d !!!\n\n", PK_a, PK_b, PK_result);

        }
    }
    else if(PK_option == 'M' || PK_option == 'm')
        {
            PK_result = PK_a*PK_b ;
            printf("MUltiplication Of A = %d And B = %d GIves Result %d !!!\n\n", PK_a, PK_b, PK_result);  
        }
    else if (PK_option == 'D' || PK_option == 'd')
    {
            printf("Enter Option In Character : \n\n");
            printf(" 'Q' or 'q' or '/' For QUotient upon Division : \n");
            printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

            printf("Enter Option : ");
            PK_option_division = getch();

            printf("\n\n");

            if (PK_option_division == 'Q' || PK_option_division == 'q' || PK_option_division == '/')
            {
                if (PK_a >= PK_b)
                {
                    PK_result = PK_a / PK_b;
                    printf("Division of A = %d By B = %d Gives Quotient = %d !!!\n\n", PK_a, PK_b, PK_result);
                }
                else
                {
                    PK_result = PK_b / PK_a;
                    printf("Division of B = %d By A = %d Gives Quotient = %d !!! \n\n", PK_a, PK_b, PK_result);

                }
            }


    
        else if (PK_option_division == 'R' || PK_option_division == 'r' || PK_option_division == '%')
        {
            if (PK_a >= PK_b)
            {
                PK_result = PK_a % PK_b;
                printf("Division Of B = %d By A = %d Gives Reminder = %d !!!\n\n", PK_b, PK_a, PK_result);
            }
            else
            {
                PK_result = PK_b % PK_a;
                printf("Division Of B = %d By A = %d Gives Reminder = %d !!!!\n\n", PK_b, PK_a, PK_result);
            }
        }
        
         else
         printf("Invalid Chracter %c Entered For Division !!! Please Try Again.....\n\n", PK_option_division);

    }
        else
        printf("Invalid Character %c Entered !!! Please try again.......\n\n", PK_option);
        printf("IF - Else If - Else Ladder Complete !!!!\n");
 return(0);

}
