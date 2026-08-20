#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //function prototype
    int MyStrlen(char[]);
    void MyStrcpy(char[], char[]);

    //variable declarations
    char PK_chArray[MAX_STRING_LENGTH], PK_chArray_SpacesRemoved[MAX_STRING_LENGTH]; 
    int PK_iStringLength;
    int PK_i, PK_j;

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray, MAX_STRING_LENGTH);

    PK_iStringLength = MyStrlen(PK_chArray);
    PK_j = 0;

    for (PK_i = 0; PK_i < PK_iStringLength; PK_i++)
    {
        if (PK_chArray[PK_i] == ' ')
            continue;
        else
        {
            PK_chArray_SpacesRemoved[PK_j] = PK_chArray[PK_i];
            PK_j++;
        }
    }
    PK_chArray_SpacesRemoved[PK_j] = '\0';

    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", PK_chArray);

    printf("\n\n");
    printf("String After Removal Of Spaces Is : \n\n");
    printf("%s\n", PK_chArray_SpacesRemoved);

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
