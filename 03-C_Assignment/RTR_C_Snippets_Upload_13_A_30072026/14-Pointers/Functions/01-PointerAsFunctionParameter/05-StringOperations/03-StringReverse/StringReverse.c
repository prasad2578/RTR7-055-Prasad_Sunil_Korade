#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void PK_MyStrrev(char *, char *);
    int PK_MyStrlen(char *);

    char *PK_chArray_Original = NULL, *PK_chArray_Reversed = NULL;
    int PK_original_string_length;

    printf("\n\n");
    PK_chArray_Original = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
    if (PK_chArray_Original == NULL)
    {
        printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED !!! EXITTING NOW ... \n\n");
        exit(0);
    }
    printf("Enter A String : \n\n");
    gets_s(PK_chArray_Original, MAX_STRING_LENGTH);

    PK_original_string_length = PK_MyStrlen(PK_chArray_Original);
    PK_chArray_Reversed = (char *)malloc(PK_original_string_length * sizeof(char));
    if (PK_chArray_Reversed == NULL)
    {
        printf("MEMORY ALLOCATION FOR REVERSED STRING FAILED !!! EXITTING NOW ... \n\n");
        exit(0);
    }

    PK_MyStrrev(PK_chArray_Reversed, PK_chArray_Original);

    printf("\n\n");
    printf("The Original String Entered By You (i.e : 'PK_chArray_Original[ ]') Is : \n\n");
    printf("%s\n", PK_chArray_Original);

    printf("\n\n");
    printf("The Reversed String (i.e : 'PK_chArray_Reversed[ ]') Is : \n\n");
    printf("%s\n", PK_chArray_Reversed);

    if (PK_chArray_Reversed)
    {
        free(PK_chArray_Reversed);
        PK_chArray_Reversed = NULL;
        printf("\n\n");
        printf("MEMORY ALLOCATED TO REVERSED STRING HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }
    if (PK_chArray_Original)
    {
        free(PK_chArray_Original);
        PK_chArray_Original = NULL;
        printf("\n\n");
        printf("MEMORY ALLOCATED TO ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}

void PK_MyStrrev(char *PK_str_destination, char *PK_str_source)
{
    int PK_MyStrlen(char *);

    int PK_iStringLength = 0;
    int PK_i, PK_j, PK_len;

    PK_iStringLength = PK_MyStrlen(PK_str_source);
    PK_len = PK_iStringLength - 1;

    for (PK_i = 0, PK_j = PK_len; PK_i < PK_iStringLength && PK_j >= 0; PK_i++, PK_j--)
    {
        *(PK_str_destination + PK_i) = *(PK_str_source + PK_j);
    }
    *(PK_str_destination + PK_i) = '\0';
}

int PK_MyStrlen(char *PK_str)
{
    int PK_j;
    int PK_string_length = 0;

    for (PK_j = 0; PK_j < MAX_STRING_LENGTH; PK_j++)
    {
        if (PK_str[PK_j] == '\0')
            break;
        else
            PK_string_length++;
    }
    return PK_string_length;
}
