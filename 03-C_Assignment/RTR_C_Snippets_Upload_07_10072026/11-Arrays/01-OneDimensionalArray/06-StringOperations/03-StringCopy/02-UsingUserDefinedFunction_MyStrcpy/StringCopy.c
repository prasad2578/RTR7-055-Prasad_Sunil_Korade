#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //function prototype
    void MyStrcpy(char[], char[]);

    char PK_chArray_Original[MAX_STRING_LENGTH], PK_chArray_Copy[MAX_STRING_LENGTH]; 

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray_Original, MAX_STRING_LENGTH);

    MyStrcpy(PK_chArray_Copy, PK_chArray_Original);

    printf("\n\n");
    printf("The Original String Entered By You (i.e : 'PK_chArray_Original[]') Is : \n\n");
    printf("%s\n", PK_chArray_Original);

    printf("\n\n");
    printf("The Copied String (i.e : 'PK_chArray_Copy[]') Is : \n\n");
    printf("%s\n", PK_chArray_Copy);

    return(0);
}

void MyStrcpy(char str_destination[], char str_source[])
{
    int PK_MyStrlen(char[]);

    int PK_iStringLength = 0;
    int PK_j;

    //code
    PK_iStringLength = PK_MyStrlen(str_source);
    for (PK_j = 0; PK_j < PK_iStringLength; PK_j++)
        str_destination[PK_j] = str_source[PK_j];

    str_destination[PK_j] = '\0';
}

int PK_MyStrlen(char str[])
{
    //variable declarations
    int PK_j;
    int string_length = 0;

    //code
    for (PK_j = 0; PK_j < MAX_STRING_LENGTH; PK_j++)
    {
        if (str[PK_j] == '\0')
          break;
        else
          string_length++;
    }
    return(string_length);
}

