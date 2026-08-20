#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //function prototype
    int MyStrlen(char[]);

    //variable declarations
    char PK_chArray[MAX_STRING_LENGTH]; 
    int PK_iStringLength;
    int count_A = 0, count_E = 0, count_I = 0, count_0 = 0, count_U = 0;
    int PK_i;

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", PK_chArray);
    PK_iStringLength = MyStrlen(PK_chArray);

    for (PK_i = 0; PK_i < PK_iStringLength; PK_i++)
    {
        switch (PK_chArray[PK_i])
        {
            case 'A' :
            case 'a' :
                count_A++;
                break;
            case 'E' :
            case 'e' :
                count_E++;
                break;
            case 'I' :
            case 'PK_i' :
                count_I++;
                break;
            case 'O' :
            case 'o' :
                count_0++;
                break;
            case 'U' :
            case 'u' :
                count_U++;
                break;
            default:
                break;
        }
    }

    printf("\n\n");
    printf("In The String Entered By You, The Vowels And The Number Of Their Occurences Are As Follows : \n\n");
    printf("'A' Has Occured = %d Times !!! \n\n", count_A);
    printf("'E' Has Occured = %d Times !!! \n\n", count_E);
    printf("'I' Has Occured = %d Times !!! \n\n", count_I);
    printf("'O' Has Occured = %d Times !!! \n\n", count_0);
    printf("'U' Has Occured = %d Times !!! \n\n", count_U);
    return(0);
}

int MyStrlen(char str[])
{
    //variable declarations
    int PK_j;
    int PK_string_length = 0;

    //code
    for (PK_j = 0; PK_j < MAX_STRING_LENGTH; PK_j++)
    {
        if (str[PK_j] == '\0')
            break;
        else
            PK_string_length++;
    }
    return(PK_string_length);
}
