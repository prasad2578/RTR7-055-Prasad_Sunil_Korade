#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void PK_MyStrcat(char[], char[]);

    char PK_chArray_One[MAX_STRING_LENGTH], PK_chArray_Two[MAX_STRING_LENGTH]; // A Character Array Is A String

    //code

    printf("\n\n");
    printf("Enter First String : \n\n");
    gets(PK_chArray_One, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter Second String : \n\n");
    gets(PK_chArray_Two, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("****** BEFORE CONCATENATION ******");
    printf("\n\n");
    printf("The Original First String Entered By You (i.e : 'PK_chArray_One[]') Is : \n\n");
    printf("%s\n", PK_chArray_One);

    printf("\n\n");
    printf("The Original Second String Entered By You (i.e : 'PK_chArray_Two[]') Is : \n\n");
    printf("%s\n", PK_chArray_Two);

    PK_MyStrcat(PK_chArray_One, PK_chArray_Two);

    printf("\n\n");
    printf("****** AFTER CONCATENATION ******");
    printf("\n\n");
    printf("PK_chArray_One[] Is : \n\n");
    printf("%s\n", PK_chArray_One);

    printf("\n\n");
    printf("PK_chArray_Two[] Is : \n\n");
    printf("%s\n", PK_chArray_Two);

    return(0);
}

void PK_MyStrcat(char PK_str_destination[], char PK_str_source[])
{
    //function prototype
    int PK_MyStrlen(char[]);

    //variable declarations
    int PK_iStringLength_Source = 0, PK_iStringLength_Destination = 0;
    int PK_i, PK_j;

    //code
    PK_iStringLength_Source = PK_MyStrlen(PK_str_source);
    PK_iStringLength_Destination = PK_MyStrlen(PK_str_destination);

    for (PK_i = PK_iStringLength_Destination, PK_j = 0; PK_j < PK_iStringLength_Source; PK_i++, PK_j++)
    {
        PK_str_destination[PK_i] = PK_str_source[PK_j];
    }

    PK_str_destination[PK_i] = '\0';
}

int PK_MyStrlen(char PK_str[])
{
    //variable declarations
    int PK_j;
    int PK_string_length = 0;

    //code
    for (PK_j = 0; PK_j < MAX_STRING_LENGTH; PK_j++)
    {
        if (PK_str[PK_j] == '\0')
            break;
        else
            PK_string_length++;
    }
    return(PK_string_length);
}
