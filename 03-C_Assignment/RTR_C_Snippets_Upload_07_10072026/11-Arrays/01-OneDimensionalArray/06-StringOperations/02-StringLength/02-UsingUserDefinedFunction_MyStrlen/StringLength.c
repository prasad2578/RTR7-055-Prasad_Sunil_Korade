#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //function prototype
    int PK_MyStrlen(char[]);

    char PK_chArray[MAX_STRING_LENGTH]; 
    int PK_iStringLength = 0;

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", PK_chArray);

    printf("\n\n");
    PK_iStringLength = PK_MyStrlen(PK_chArray);
    printf("Length Of String Is = %d Characters !!!\n\n", PK_iStringLength);

    return(0);
}

int PK_MyStrlen(char str[])
{
    int PK_j;
    int PK_string_length = 0;

    for (PK_j = 0; PK_j < MAX_STRING_LENGTH; PK_j++)
    {
        if (str[PK_j] == '\0')
          break;
        else
          PK_string_length++;
    }
    return(PK_string_length);
}
