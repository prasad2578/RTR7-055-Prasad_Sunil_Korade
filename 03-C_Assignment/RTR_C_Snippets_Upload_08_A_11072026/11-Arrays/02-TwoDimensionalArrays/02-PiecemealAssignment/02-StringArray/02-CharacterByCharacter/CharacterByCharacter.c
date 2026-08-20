#include <stdio.h>
#define MAX_STRING_LENGTH 512

int main(void)
{
    char PK_strArray[5][10]; 

    int PK_char_size;
    int PK_strArray_size;
    int PK_strArray_num_elements, PK_strArray_num_rows, PK_strArray_num_columns;
    int PK_i;

    //code
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

    PK_strArray[0][0] = 'M';
    PK_strArray[0][1] = 'y';
    PK_strArray[0][2] = '\0'; 

    PK_strArray[1][0] = 'N';
    PK_strArray[1][1] = 'a';
    PK_strArray[1][2] = 'm';
    PK_strArray[1][3] = 'e';
    PK_strArray[1][4] = '\0'; 

    PK_strArray[2][0] = 'I';
    PK_strArray[2][1] = 's';
    PK_strArray[2][2] = '\0'; 

    PK_strArray[3][0] = 'P';
    PK_strArray[3][1] = 'r';
    PK_strArray[3][2] = 'a';
    PK_strArray[3][3] = 's';
    PK_strArray[3][4] = 'a';
    PK_strArray[3][5] = 'd';
    PK_strArray[3][6] = '\0'; 

    PK_strArray[4][0] = 'K';
    PK_strArray[4][1] = 'o';
    PK_strArray[4][2] = 'r';
    PK_strArray[4][3] = 'a';
    PK_strArray[4][4] = 'd';
    PK_strArray[4][5] = 'e';
    PK_strArray[4][6] = '\0';

    printf("\n\n");
    printf("The Strings In the 2D Character Array Are : \n\n");

    for (PK_i = 0; PK_i < PK_strArray_num_rows; PK_i++)
        printf("%s ", PK_strArray[PK_i]);

    printf("\n\n");
    return(0);
}

int MyStrlen(char str[])
{
    //variable declarations
    int PK_j;
    int PK_string_length = 0;

    for (PK_j = 0; PK_j < MAX_STRING_LENGTH; PK_j++)
    {
        if (str[PK_j] == '\0')
            break;
        else
            PK_string_length++;
    }
    return(PK_string_length);
}
