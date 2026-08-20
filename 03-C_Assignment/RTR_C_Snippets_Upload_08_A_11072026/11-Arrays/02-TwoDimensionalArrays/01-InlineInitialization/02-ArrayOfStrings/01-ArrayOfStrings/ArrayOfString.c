#include<stdio.h>


#define MAX_STRING_LENGTH 512

int main(void)

{
    int PK_MyStrlen(char[]);
    char PK_strArray[10][15] = { "Hello!", "Welcome", "To", "Real", "Time","Rendering", "Batch", "(2026-2027)", "Of", "ASTROMEDICOMP." };
    
    int PK_char_size;
    int PK_strArray_size;
    int PK_strArray_num_elements, PK_strArray_num_rows, PK_strArray_num_columns;
    int PK_strActual_num_chars = 0;
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
    
    for (PK_i = 0; PK_i < PK_strArray_num_rows; PK_i++)
    {
        PK_strActual_num_chars = PK_strActual_num_chars + PK_MyStrlen(PK_strArray[PK_i]);
    }
    printf("Actual Number of Elements (Characters) In Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", PK_strActual_num_chars);
    
    printf("\n\n");
    printf("Strings In The 2D Array : \n\n");
    
    printf("%s ", PK_strArray[0]);
    printf("%s ", PK_strArray[1]);
    printf("%s ", PK_strArray[2]);
    printf("%s ", PK_strArray[3]);
    printf("%s ", PK_strArray[4]);
    printf("%s ", PK_strArray[5]);
    printf("%s ", PK_strArray[6]);
    printf("%s ", PK_strArray[7]);
    printf("%s ", PK_strArray[8]);
    printf("%s\n\n", PK_strArray[9]);
    
    return(0);

}
int PK_MyStrlen(char str[])
{
    int j;
    int string_length = 0;

    for (j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if (str[j] == '\0')
            break;
        else
            string_length++;
    }
    return(string_length);
}
