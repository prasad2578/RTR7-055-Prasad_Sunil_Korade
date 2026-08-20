#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //function prototype
    void MyStrrev(char[], char[]);

    //variable declarations
    char PK_chArray_Original[MAX_STRING_LENGTH], PK_chArray_Reversed[MAX_STRING_LENGTH]; 

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets(PK_chArray_Original, MAX_STRING_LENGTH);

    MyStrrev(PK_chArray_Reversed, PK_chArray_Original);

    printf("\n\n");
    printf("The Original String Entered By You (PK_i.e : 'PK_chArray_Original[]') Is : \n\n");
    printf("%s\n", PK_chArray_Original);

    printf("\n\n");
    printf("The Reversed String (PK_i.e : 'PK_chArray_Reversed[]') Is : \n\n");
    printf("%s\n", PK_chArray_Reversed);

    return(0);
}

void MyStrrev(char str_destination[], char str_source[])
{
    //function prototype
    int PK_MyStrlen(char[]);

    //variable declarations
    int PK_iStringLength = 0;
    int PK_i, PK_j, PK_len;

    //code
    PK_iStringLength = PK_MyStrlen(str_source);

    PK_len = PK_iStringLength - 1;

    for (PK_i = 0, PK_j = PK_len; PK_i < PK_iStringLength, PK_j >= 0; PK_i++, PK_j--)
    {
        str_destination[PK_i] = str_source[PK_j];
    }
    
    str_destination[PK_i] = '\0';
}
int PK_MyStrlen(char str[])
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


