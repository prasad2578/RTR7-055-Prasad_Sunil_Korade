#include <stdio.h>

int main(void)
{
    //variable declarations
    char PK_chArray_01[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' }; 
    char PK_chArray_02[9] = { 'W', 'E', 'L', 'C', 'O', 'M', 'E', 'S', '\0' }; 
    char PK_chArray_03[] = { 'Y', 'O', 'U', '\0' }; 
    char PK_chArray_04[] = "To"; 
    char PK_chArray_05[] = "REAL TIME RENDERING BATCH OF 2026-27"; 

    char PK_chArray_WithoutNullTerminator[] = { 'H', 'e', 'l', 'l', 'o' };

    //code
    printf("\n\n");

    printf("Size Of PK_chArray_01 : %zu\n\n", sizeof(PK_chArray_01));
    printf("Size Of PK_chArray_02 : %zu\n\n", sizeof(PK_chArray_02));
    printf("Size Of PK_chArray_03 : %zu\n\n", sizeof(PK_chArray_03));
    printf("Size Of PK_chArray_04 : %zu\n\n", sizeof(PK_chArray_04));
    printf("Size Of PK_chArray_05 : %zu\n\n", sizeof(PK_chArray_05));

    printf("\n\n");

    printf("The Strings Are : \n\n");
    printf("PK_chArray_01 : %s\n\n", PK_chArray_01);
    printf("PK_chArray_02 : %s\n\n", PK_chArray_02);
    printf("PK_chArray_03 : %s\n\n", PK_chArray_03);
    printf("PK_chArray_04 : %s\n\n", PK_chArray_04);
    printf("PK_chArray_05 : %s\n\n", PK_chArray_05);

    printf("\n\n");

    printf("Size Of PK_chArray_WithoutNullTerminator : %Zu\n\n", sizeof(PK_chArray_WithoutNullTerminator));
    printf("PK_chArray_WithoutNullTerminator : %s\n\n", PK_chArray_WithoutNullTerminator);

    return(0);
}

