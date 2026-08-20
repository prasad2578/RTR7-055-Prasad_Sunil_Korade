#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //variable declarations
    char PK_chArray_Original[MAX_STRING_LENGTH], PK_chArray_Copy[MAX_STRING_LENGTH]; 

    //code

    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray_Original, MAX_STRING_LENGTH);

    strcpy(PK_chArray_Copy, PK_chArray_Original);


    printf("\n\n");
    printf("The Original String Entered By You (i.e : 'PK_chArray_Original[]') Is : \n\n");
    printf("%s\n", PK_chArray_Original);

    printf("\n\n");
    printf("The Copied String (i.e : 'PK_chArray_Copy[]') Is : \n\n");
    printf("%s\n", PK_chArray_Copy);

    return(0);
}
