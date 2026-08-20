#include <stdio.h>
#include <ctype.h> 

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrlen(char[]);

    char PK_chArray[MAX_STRING_LENGTH], PK_chArray_CapitalizedFirstLetterOfEveryWord[MAX_STRING_LENGTH]; 
    int PK_iStringLength;
    int PK_i, PK_j;

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray, MAX_STRING_LENGTH);

    PK_iStringLength = MyStrlen(PK_chArray);
    PK_j = 0;

    for (PK_i = 0; PK_i < PK_iStringLength; PK_i++)
    {
        if (PK_i == 0)
            PK_chArray_CapitalizedFirstLetterOfEveryWord[PK_j] = toupper(PK_chArray[PK_i]);
        else if (PK_chArray[PK_i] == ' ')
        {
            PK_chArray_CapitalizedFirstLetterOfEveryWord[PK_j] = PK_chArray[PK_i];
            PK_chArray_CapitalizedFirstLetterOfEveryWord[PK_j + 1] = toupper(PK_chArray[PK_i + 1]);

            PK_j++;
            PK_i++;
        }
        else
            PK_chArray_CapitalizedFirstLetterOfEveryWord[PK_j] = PK_chArray[PK_i];

        PK_j++;
    }

    PK_chArray_CapitalizedFirstLetterOfEveryWord[PK_j] = '\0';

    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", PK_chArray);

    printf("\n\n");
    printf("String After Capitalizing First Letter Of Every Word : \n\n");
    printf("%s\n", PK_chArray_CapitalizedFirstLetterOfEveryWord);

    return(0);
}

int MyStrlen(char str[])
{
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
