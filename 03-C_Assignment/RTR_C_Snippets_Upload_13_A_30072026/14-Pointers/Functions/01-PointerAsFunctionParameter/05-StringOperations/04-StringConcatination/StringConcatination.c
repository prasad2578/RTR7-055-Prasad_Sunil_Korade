#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void PK_MyStrcat(char *, char *);
    int PK_MyStrlen(char *);

    char *PK_chArray_One = NULL, *PK_chArray_Two = NULL;

    printf("\n\n");
    PK_chArray_One = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
    if (PK_chArray_One == NULL)
    {
        printf("MEMORY ALLOCATION TO FIRST STRING FAILED !!! EXITTING NOW...\n\n");
        exit(0);
    }
    printf("Enter First String : \n\n");
    gets_s(PK_chArray_One, MAX_STRING_LENGTH);

    printf("\n\n");
    PK_chArray_Two = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
    if (PK_chArray_Two == NULL)
    {
        printf("MEMORY ALLOCATION TO SECOND STRING FAILED !!! EXITTING NOW...\n\n");
        exit(0);
    }
    printf("Enter Second String : \n\n");
    gets_s(PK_chArray_Two, MAX_STRING_LENGTH);

    printf("\n\n");
    printf(" ****** BEFORE CONCATENATION ****** \n\n");
    printf("The Original First String Entered By You (i.e : 'PK_chArray_One[]') Is : \n\n");
    printf("%s\n", PK_chArray_One);

    printf("\n\n");
    printf("The Original Second String Entered By You (i.e : 'PK_chArray_Two[]') Is : \n\n");
    printf("%s\n", PK_chArray_Two);

    PK_MyStrcat(PK_chArray_One, PK_chArray_Two);

    printf("\n\n");
    printf(" ****** AFTER CONCATENATION ****** \n\n");
    printf("'PK_chArray_One[]' Is : \n\n");
    printf("%s\n", PK_chArray_One);

    printf("\n\n");
    printf("'PK_chArray_Two[]' Is : \n\n");
    printf("%s\n", PK_chArray_Two);

    if (PK_chArray_Two)
    {
        free(PK_chArray_Two);
        PK_chArray_Two = NULL;
        printf("\n\n");
        printf("MEMORY ALLOCATED TO SECOND STRING HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }
    if (PK_chArray_One)
    {
        free(PK_chArray_One);
        PK_chArray_One = NULL;
        printf("\n\n");
        printf("MEMORY ALLOCATED TO FIRST STRING HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}

void PK_MyStrcat(char *PK_str_destination, char *PK_str_source)
{
    int PK_MyStrlen(char *);

    int PK_iStringLength_Source = 0, PK_iStringLength_Destination = 0;
    int PK_i, PK_j;

    PK_iStringLength_Source = PK_MyStrlen(PK_str_source);
    PK_iStringLength_Destination = PK_MyStrlen(PK_str_destination);

    for (PK_i = PK_iStringLength_Destination, PK_j = 0; PK_j < PK_iStringLength_Source; PK_i++, PK_j++)
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
