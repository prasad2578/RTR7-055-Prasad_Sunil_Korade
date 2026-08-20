#include<stdio.h>
#include<stdlib.h>
#define MAX_STRING_LENGTH 512

int main(void)
{
    int PK_MyStrlen(char*);

    char* PK_chArray = NULL;
    int PK_iStringLength = 0;
    printf("\n\n");
    PK_chArray = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
    if (PK_chArray == NULL)
    {
        printf("MEMORY ALLOCATION TO CHARACTER ARRAY FAILED !! EXITING NOW..\n\n");
        exit(0);
    }
    printf("\n\n");
    printf("Enter A string : \n\n");
    gets_s(PK_chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("A string entered by you is : \n\n");
    printf("%s\n", PK_chArray);

    printf("\n\n");
    PK_iStringLength = PK_MyStrlen(PK_chArray);
    printf("Length of string is = %d character !!\n\n", PK_iStringLength);

    if (PK_chArray)
    {
        free(PK_chArray);
        PK_chArray = NULL;
    }
    return (0);
}

int PK_MyStrlen(char* PK_str)
{
    int PK_i;
    int PK_string_length = 0;
    for (PK_i = 0; PK_i < MAX_STRING_LENGTH; PK_i++)
    {
        if (*(PK_str + PK_i) == '\0')
            break;
        else
            PK_string_length++;
    }
    return PK_string_length;
}
