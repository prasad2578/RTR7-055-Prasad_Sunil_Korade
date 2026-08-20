#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //variable declarations
    char PK_chArray_One[MAX_STRING_LENGTH], PK_chArray_Two[MAX_STRING_LENGTH]; 

    //code

    printf("\n\n");
    printf("Enter First String : \n\n");
    gets_s(PK_chArray_One, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter Second String : \n\n");
    gets_s(PK_chArray_Two, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("****** BEFORE CONCATENATION ******");
    printf("\n\n");
    printf("The Original First String Entered By You (i.e : 'PK_chArray_One[]') Is : \n\n");
    printf("%s\n", PK_chArray_One);

    printf("\n\n");
    printf("The Original Second String Entered By You (i.e : 'PK_chArray_Two[]') Is : \n\n");
    printf("%s\n", PK_chArray_Two);

    strcat(PK_chArray_One, PK_chArray_Two);

    printf("\n\n");
    printf("****** AFTER CONCATENATION ******");
    printf("\n\n");
    printf("'PK_chArray_One[]' Is : \n\n");
    printf("%s\n", PK_chArray_One);

    printf("\n\n");
    printf("'PK_chArray_Two[]' Is : \n\n");
    printf("%s\n", PK_chArray_Two);

    return(0);
}
