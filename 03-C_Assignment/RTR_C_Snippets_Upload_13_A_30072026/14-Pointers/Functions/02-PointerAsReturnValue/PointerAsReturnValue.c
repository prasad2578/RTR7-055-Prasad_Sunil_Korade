#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char* PK_ReplaceVowelsWithHashSymbol(char *);

    char PK_string[MAX_STRING_LENGTH];
    char *PK_replaced_string = NULL;

    printf("\n\n");
    printf("Enter String : ");
    gets_s(PK_string, MAX_STRING_LENGTH);

    PK_replaced_string = PK_ReplaceVowelsWithHashSymbol(PK_string);
    if (PK_replaced_string == NULL)
    {
        printf("ReplaceVowelsWithHashSymbol() Function Has Failed !!! Exiting Now ... \n\n");
        exit(0);
    }
    printf("\n\n");
    printf("Replaced String Is : \n\n");
    printf("%s\n\n", PK_replaced_string);

    if (PK_replaced_string)
    {
        free(PK_replaced_string);
        PK_replaced_string = NULL;
    }
    return(0);
}

char* PK_ReplaceVowelsWithHashSymbol(char *PK_s)
{
    void PK_MyStrcpy(char *, char *);
    int PK_MyStrlen(char *);

    char *PK_new_string = NULL;
    int PK_i;

    PK_new_string = (char *)malloc(PK_MyStrlen(PK_s) * sizeof(char));
    if (PK_new_string == NULL)
    {
        printf("COULD NOT ALLOCATE MEMORY FOR NEW STRING !!! \n\n");
        return(NULL);
    }

    PK_MyStrcpy(PK_new_string, PK_s);
    for (PK_i = 0; PK_i < PK_MyStrlen(PK_new_string); PK_i++)
    {
        switch (PK_new_string[PK_i])
        {
            case 'A': 
            case 'a':
            case 'E': 
            case 'e':
            case 'I': 
            case 'i':
            case 'O':
             case 'o':
            case 'U': 
            case 'u':
                PK_new_string[PK_i] = '#';
                break;
            default:
                break;
        }
    }
    return(PK_new_string);
}

void PK_MyStrcpy(char *PK_str_destination, char *PK_str_source)
{
    int PK_MyStrlen(char *);

    int PK_iStringLength = 0;
    int PK_j;

    PK_iStringLength = PK_MyStrlen(PK_str_source);
    for (PK_j = 0; PK_j < PK_iStringLength; PK_j++)
        *(PK_str_destination + PK_j) = *(PK_str_source + PK_j);
    *(PK_str_destination + PK_j) = '\0';
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
