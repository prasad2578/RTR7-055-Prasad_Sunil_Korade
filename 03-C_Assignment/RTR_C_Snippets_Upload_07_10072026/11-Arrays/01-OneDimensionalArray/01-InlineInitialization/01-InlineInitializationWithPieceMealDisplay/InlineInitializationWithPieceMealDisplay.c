#include <stdio.h>

int main(void)
{
    //variable declarations
    int PK_iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
    int PK_int_size;
    int PK_iArray_size;
    int PK_iArray_num_elements;

    float PK_fArray[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
    int PK_float_size;
    int PK_fArray_size;
    int PK_fArray_num_elements;

    char PK_cArray[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
    int PK_char_size;
    int PK_cArray_size;
    int PK_cArray_num_elements;

    printf("\n\n");
    printf("In-line Initialization And Piece-meal Display Of Elements of Array 'PK_iArray[]': \n\n");
    printf("PK_iArray[0] (1st Element) = %d\n", PK_iArray[0]);
    printf("PK_iArray[1] (2nd Element) = %d\n", PK_iArray[1]);
    printf("PK_iArray[2] (3rd Element) = %d\n", PK_iArray[2]);
    printf("PK_iArray[3] (4th Element) = %d\n", PK_iArray[3]);
    printf("PK_iArray[4] (5th Element) = %d\n", PK_iArray[4]);
    printf("PK_iArray[5] (6th Element) = %d\n", PK_iArray[5]);
    printf("PK_iArray[6] (7th Element) = %d\n", PK_iArray[6]);
    printf("PK_iArray[7] (8th Element) = %d\n", PK_iArray[7]);
    printf("PK_iArray[8] (9th Element) = %d\n", PK_iArray[8]);
    printf("PK_iArray[9] (10th Element) = %d\n\n", PK_iArray[9]);

    PK_int_size = sizeof(int);
    PK_iArray_size = sizeof(PK_iArray);
    PK_iArray_num_elements = PK_iArray_size / PK_int_size;
    printf("Size Of Data type 'int' = %d bytes\n", PK_int_size);
    printf("Number Of Elements In 'int' Array 'PK_iArray[]' = %d Elements\n", PK_iArray_num_elements);
    printf("Size Of Array 'PK_iArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", PK_iArray_num_elements, PK_int_size, PK_iArray_size);

    printf("\n\n");
    printf("In-line Initialization And Piece-meal Display Of Elements of Array 'PK_fArray[]': \n\n");
    printf("PK_fArray[0] (1st Element) = %f\n", PK_fArray[0]);

    printf("PK_fArray[1] (2nd Element) = %f\n", PK_fArray[1]);
    printf("PK_fArray[2] (3rd Element) = %f\n", PK_fArray[2]);
    printf("PK_fArray[3] (4th Element) = %f\n", PK_fArray[3]);
    printf("PK_fArray[4] (5th Element) = %f\n", PK_fArray[4]);
    printf("PK_fArray[5] (6th Element) = %f\n", PK_fArray[5]);
    printf("PK_fArray[6] (7th Element) = %f\n", PK_fArray[6]);
    printf("PK_fArray[7] (8th Element) = %f\n", PK_fArray[7]);
    printf("PK_fArray[8] (9th Element) = %f\n", PK_fArray[8]);
    printf("PK_fArray[9] (10th Element) = %f\n\n", PK_fArray[9]);
    
    PK_float_size = sizeof(float);
    PK_fArray_size = sizeof(PK_fArray);
    PK_fArray_num_elements = PK_fArray_size / PK_float_size;
    printf("Size Of Data type 'float' = %d bytes\n", PK_float_size);
    printf("Number Of Elements In 'float' Array 'PK_fArray[]' = %d Elements\n", PK_fArray_num_elements);
    printf("Size Of Array 'PK_fArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", PK_fArray_num_elements, PK_float_size, PK_fArray_size);
    
    printf("\n\n");
    printf("In-line Initialization And Piece-meal Display Of Elements of Array 'PK_cArray[]': \n\n");
    printf("PK_cArray[0] (1st Element) = %c\n", PK_cArray[0]);
    printf("PK_cArray[1] (2nd Element) = %c\n", PK_cArray[1]);
    printf("PK_cArray[2] (3rd Element) = %c\n", PK_cArray[2]);
    printf("PK_cArray[3] (4th Element) = %c\n", PK_cArray[3]);
    printf("PK_cArray[4] (5th Element) = %c\n", PK_cArray[4]);
    printf("PK_cArray[5] (6th Element) = %c\n", PK_cArray[5]);
    printf("PK_cArray[6] (7th Element) = %c\n", PK_cArray[6]);
    printf("PK_cArray[7] (8th Element) = %c\n", PK_cArray[7]);
    printf("PK_cArray[8] (9th Element) = %c\n", PK_cArray[8]);
    printf("PK_cArray[9] (10th Element) = %c\n", PK_cArray[9]);
    printf("PK_cArray[10] (11th Element) = %c\n", PK_cArray[10]);
    printf("PK_cArray[11] (12th Element) = %c\n", PK_cArray[11]);
    printf("PK_cArray[12] (13th Element) = %c\n\n", PK_cArray[12]);
    
    PK_char_size = sizeof(char);
    PK_cArray_size = sizeof(PK_cArray);
    PK_cArray_num_elements = PK_cArray_size / PK_char_size;
    printf("Size Of Data type 'char' = %d bytes\n", PK_char_size);
    printf("Number Of Elements In 'char' Array 'PK_cArray[]' = %d Elements\n", PK_cArray_num_elements);
    printf("Size Of Array 'PK_cArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", PK_cArray_num_elements, PK_char_size, PK_cArray_size);
    
    return(0);
    
}
    