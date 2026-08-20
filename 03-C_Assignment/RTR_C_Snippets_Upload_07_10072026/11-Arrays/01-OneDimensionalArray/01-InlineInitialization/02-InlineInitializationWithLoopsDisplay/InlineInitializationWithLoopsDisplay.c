#include <stdio.h>
int main(void)
{
//variable declarations
int PK_iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
int PK_int_size;
int PK_iArray_size;
int PK_iArray_num_elements;

float PK_fArray[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
float PK_float_size;
int PK_fArray_size;
int PK_fArray_num_elements;

char PK_cArray[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
int PK_char_size;
int PK_cArray_size;
int PK_cArray_num_elements;

int PK_i;

//code

printf("\n");
printf("In-line Initialization And Loop (for) Display Of Elements of Array 'PK_iArray[]': \n\n");

PK_int_size = sizeof(int);
PK_iArray_size = sizeof(PK_iArray);
PK_iArray_num_elements = PK_iArray_size / PK_int_size;

for (PK_i = 0; PK_i < PK_iArray_num_elements; PK_i++)
{
    printf("PK_iArray[%d] (Element %d) = %d\n", PK_i, (PK_i + 1), PK_iArray[PK_i]);
}

printf("\n\n");
printf("Size Of Data type 'int' = %d bytes\n", PK_int_size);
printf("Number Of Elements In 'int' Array 'PK_iArray[]' = %d Elements\n", PK_iArray_num_elements);
printf("Size Of Array 'PK_iArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", PK_iArray_num_elements, PK_int_size, PK_iArray_size);

printf("\n");
printf("In-line Initialization And Loop (while) Display Of Elements of Array 'PK_fArray[]': \n\n");

PK_float_size = sizeof(float);
PK_fArray_size = sizeof(PK_fArray);
PK_fArray_num_elements = PK_fArray_size / PK_float_size;
for (PK_i = 0; PK_i < PK_fArray_num_elements; PK_i++)
{
    printf("PK_fArray[%d] (Element %d) = %f\n", PK_i, (PK_i + 1), PK_fArray[PK_i]);
}

printf("\n\n");
printf("Size Of Data type 'float' = %f bytes\n", PK_float_size);
printf("Number Of Elements In 'float' Array 'PK_fArray[]' = %d Elements\n", PK_fArray_num_elements);
printf("Size Of Array 'PK_fArray[]' (%d Elements * %f Bytes) = %d Bytes\n\n", PK_fArray_num_elements, PK_float_size, PK_fArray_size);

printf("\n");
printf("In-line Initialization And Loop (while) Display Of Elements of Array 'PK_cArray[]': \n\n");

PK_char_size = sizeof(char);
PK_cArray_size = sizeof(PK_cArray);
PK_cArray_num_elements = PK_cArray_size / PK_char_size;
for (PK_i = 0; PK_i < PK_cArray_num_elements; PK_i++)
{
    printf("PK_cArray[%d] (Element %d) = %c\n", PK_i, (PK_i + 1), PK_cArray[PK_i]);
}

printf("\n\n");
printf("Size Of Data type 'char' = %d bytes\n", PK_char_size);
printf("Number Of Elements In 'char' Array 'PK_cArray[]' = %d Elements\n", PK_cArray_num_elements);
printf("Size Of Array 'PK_cArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", PK_cArray_num_elements, PK_char_size, PK_cArray_size);

return(0);

}

