#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    //variable declarations
    char PK_chArray[MAX_STRING_LENGTH];

    //code
    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(PK_chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", PK_chArray);
    return(0);
}
