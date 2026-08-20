#include <stdio.h>
#include <string.h>

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20
#define ALPHABET_BEGINNING 65

struct MyDataOne
{
    int iArray[INT_ARRAY_SIZE];
    float fArray[FLOAT_ARRAY_SIZE];
};

struct MyDataTwo
{
    char cArray[CHAR_ARRAY_SIZE];
    char strArray[NUM_STRINGS][MAX_CHARACTERS_PER_STRING];
};

int main(void)
{
    struct MyDataOne PK_data_one;
    struct MyDataTwo PK_data_two;
    int i;

    PK_data_one.fArray[0] = 0.1f;
    PK_data_one.fArray[1] = 1.2f;
    PK_data_one.fArray[2] = 2.3f;
    PK_data_one.fArray[3] = 3.4f;
    PK_data_one.fArray[4] = 4.5f;

    printf("\n\n");
    printf("Enter %d Integers : \n\n", INT_ARRAY_SIZE);
    for (i = 0; i < INT_ARRAY_SIZE; i++)
        scanf("%d", &PK_data_one.iArray[i]);

    for (i = 0; i < CHAR_ARRAY_SIZE; i++)
        PK_data_two.cArray[i] = (char)(i + ALPHABET_BEGINNING);

    strcpy(PK_data_two.strArray[0], "Welcome !!! ");
    strcpy(PK_data_two.strArray[1], "This");
    strcpy(PK_data_two.strArray[2], "Is");
    strcpy(PK_data_two.strArray[3], "ASTROMEDICOMP'S");
    strcpy(PK_data_two.strArray[4], "Real");
    strcpy(PK_data_two.strArray[5], "Time");
    strcpy(PK_data_two.strArray[6], "Rendering");
    strcpy(PK_data_two.strArray[7], "Batch");
    strcpy(PK_data_two.strArray[8], "Of");
    strcpy(PK_data_two.strArray[9], "2026-2027 !!! ");

    printf("\n\n");
    printf("Members Of 'struct MyDataOne' Alongwith Their Assigned Values Are : \n\n");

    printf("\n\n");
    printf("Integer Array (PK_data_one.iArray[]) : \n\n");
    for (i = 0; i < INT_ARRAY_SIZE; i++)
        printf("PK_data_one.iArray[%d] = %d\n", i, PK_data_one.iArray[i]);

    printf("\n\n");
    printf("Floating-Point Array (PK_data_one.fArray[]) : \n\n");
    for (i = 0; i < FLOAT_ARRAY_SIZE; i++)
        printf("PK_data_one.fArray[%d] = %f\n", i, PK_data_one.fArray[i]);

    printf("\n\n");
    printf("Members Of 'struct MyDataTwo' Alongwith Their Assigned Values Are : \n\n");

    printf("\n\n");
    printf("Character Array (PK_data_two.cArray[]) : \n\n");
    for (i = 0; i < CHAR_ARRAY_SIZE; i++)
        printf("PK_data_two.cArray[%d] = %c\n", i, PK_data_two.cArray[i]);

    printf("\n\n");
    printf("String Array (PK_data_two.strArray[]) : \n\n");
    for (i = 0; i < NUM_STRINGS; i++)
        printf("%s ", PK_data_two.strArray[i]);

    printf("\n\n");
    return(0);
}
