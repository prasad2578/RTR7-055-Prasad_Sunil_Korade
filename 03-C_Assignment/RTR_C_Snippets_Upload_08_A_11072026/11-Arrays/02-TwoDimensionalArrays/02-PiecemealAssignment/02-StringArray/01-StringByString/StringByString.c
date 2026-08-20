#include <stdio.h>
#define MAX_STRING_LENGTH 512

int main(void)
{
    //function prototype
    void MyStrcpy(char[], char[]);

    char PK_strArray[5][10]; 

    int PK_char_size;
    int PK_strArray_size;
    int PK_strArray_num_elements, PK_strArray_num_rows, PK_strArray_num_columns;
    int PK_i;

    // code
    printf("\n\n");

    PK_char_size = sizeof(char);

    PK_strArray_size = sizeof(PK_strArray);
    printf("Size Of Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", PK_strArray_size);

    PK_strArray_num_rows = PK_strArray_size / sizeof(PK_strArray[0]);
    printf("Number of Rows (Strings) In Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", PK_strArray_num_rows);

    PK_strArray_num_columns = sizeof(PK_strArray[0]) / PK_char_size;
    printf("Number of Columns In Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", PK_strArray_num_columns);

    PK_strArray_num_elements = PK_strArray_num_rows * PK_strArray_num_columns;
    printf("Maximum Number of Elements (Characters) In Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", PK_strArray_num_elements);

    // *** PIECE-MEAL ASSIGNMENT ***
    MyStrcpy(PK_strArray[0], "My");
    MyStrcpy(PK_strArray[1], "Name");
    MyStrcpy(PK_strArray[2], "Is");
    MyStrcpy(PK_strArray[3], "Prasad");
    MyStrcpy(PK_strArray[4], "Korade");

    printf("\n\n");
    printf("The Strings In the 2D Character Array Are : \n\n");

    for (PK_i = 0; PK_i < PK_strArray_num_rows; PK_i++)
        printf("%s ", PK_strArray[PK_i]);

    printf("\n\n");
    return(0);
}

void MyStrcpy(char str_destination[], char str_source[])
{
    //function prototype
    int PK_MyStrlen(char[]);

    //variable declarations
    int PK_j;
    int PK_iStringLength = 0;

    //code
    PK_iStringLength = PK_MyStrlen(str_source);
    for (PK_j = 0; PK_j < PK_iStringLength; PK_j++)
        str_destination[PK_j] = str_source[PK_j];
    str_destination[PK_j] = '\0';
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
