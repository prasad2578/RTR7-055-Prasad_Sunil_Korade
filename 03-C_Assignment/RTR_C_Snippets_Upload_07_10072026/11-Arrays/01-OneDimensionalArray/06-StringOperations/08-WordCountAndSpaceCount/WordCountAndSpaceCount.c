#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //function prototype
    int MyStrlen(char[]);
    void MyStrcpy(char[], char[]);

    char PK_chArray[MAX_STRING_LENGTH]; // A Character Array Is A String
    int PK_iStringLength;
    int PK_i;
    int PK_word_count = 0, PK_space_count = 0;

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray, MAX_STRING_LENGTH);
    PK_iStringLength = MyStrlen(PK_chArray);

    for (PK_i = 0; PK_i < PK_iStringLength; PK_i++)
    {
        switch (PK_chArray[PK_i])
        {
            case 32: 
                PK_space_count++;
                break;
            default:
                break;
        }
        PK_word_count = PK_space_count + 1;
    }

    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", PK_chArray);

    printf("\n\n");
    printf("Number Of Spaces In The Input String = %d\n\n", PK_space_count);
    printf("Number Of Words In The Input String = %d\n\n", PK_word_count);

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
