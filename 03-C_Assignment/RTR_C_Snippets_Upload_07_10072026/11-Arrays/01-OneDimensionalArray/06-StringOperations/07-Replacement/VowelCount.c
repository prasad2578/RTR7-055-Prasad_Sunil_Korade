#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrlen(char[]);
    void MyStrcpy(char[], char[]);

    char PK_chArray_Original[MAX_STRING_LENGTH], PK_chArray_VowelsReplaced[MAX_STRING_LENGTH]; 
    int PK_iStringLength;
    int PK_i;

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray_Original, MAX_STRING_LENGTH);

    MyStrcpy(PK_chArray_VowelsReplaced, PK_chArray_Original);

    PK_iStringLength = MyStrlen(PK_chArray_VowelsReplaced);

    for (PK_i = 0; PK_i < PK_iStringLength; PK_i++)
    {
        switch (PK_chArray_VowelsReplaced[PK_i])
        {
          case 'A' :
          case 'a' :
          case 'E' :
          case 'e' :
          case 'I' :
          case 'i' :
          case 'O' :
          case 'o' :
          case 'U' :
          case 'u' :
              PK_chArray_VowelsReplaced[PK_i] = '*';
              break;
          default:
              break;
        }
    }

    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", PK_chArray_Original);

    printf("\n\n");
    printf("String After Replacement Of Vowels By * Is : \n\n");
    printf("%s\n", PK_chArray_VowelsReplaced);

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

void MyStrcpy(char str_destination[], char str_source[])
{
    //function prototype
    int MyStrlen(char[]);

    //variable declarations
    int PK_iStringLength = 0;
    int PK_j;

    //code
    PK_iStringLength = MyStrlen(str_source);
    for (PK_j = 0; PK_j < PK_iStringLength; PK_j++)
        str_destination[PK_j] = str_source[PK_j];

    str_destination[PK_j] = '\0';
}
