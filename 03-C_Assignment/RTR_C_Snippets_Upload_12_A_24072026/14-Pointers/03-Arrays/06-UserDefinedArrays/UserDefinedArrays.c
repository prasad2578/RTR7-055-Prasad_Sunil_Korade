#include <stdio.h>
#include <stdlib.h>

#define PK_INT_SIZE sizeof(int)
#define PK_FLOAT_SIZE sizeof(float)
#define PK_DOUBLE_SIZE sizeof(double)
#define PK_CHAR_SIZE sizeof(char)

int main(void)
{
    int *PK_ptr_iArray = NULL;
    unsigned int PK_intArrayLength = 0;

    float *PK_ptr_fArray = NULL;
    unsigned int PK_floatArrayLength = 0;

    double *PK_ptr_dArray = NULL;
    unsigned int PK_doubleArrayLength = 0;

    char *PK_ptr_cArray = NULL;
    unsigned int PK_charArrayLength = 0;

    int PK_i;

    printf("\n\n");
    printf("Enter The Number Of Elements You Want In The Integer Array : ");
    scanf("%u", &PK_intArrayLength);

    PK_ptr_iArray = (int *)malloc(PK_INT_SIZE * PK_intArrayLength);
    if (PK_ptr_iArray == NULL)
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR INTEGER ARRAY FAILED ! EXITING NOW...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR INTEGER ARRAY SUCCEEDED !!! \n\n");
    }

    printf("\n\n");
    printf("Enter The %d Integer Elements To Fill Up The Integer Array : \n\n", PK_intArrayLength);
    for (PK_i = 0; PK_i < PK_intArrayLength; PK_i++)
        scanf("%d", (PK_ptr_iArray + PK_i));

    printf("\n\n");
    printf("Enter The Number Of Elements You Want In The 'float' Array : ");
    scanf("%u", &PK_floatArrayLength);

    PK_ptr_fArray = (float *)malloc(PK_FLOAT_SIZE * PK_floatArrayLength);
    if (PK_ptr_fArray == NULL)
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY FAILED !!! EXITING NOW...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY SUCCEEDED !!! \n\n");
    }

    printf("\n\n");
    printf("Enter The %d Floating-Point Elements To Fill Up The 'float' Array : \n\n", PK_floatArrayLength);
    for (PK_i = 0; PK_i < PK_floatArrayLength; PK_i++)
        scanf("%f", (PK_ptr_fArray + PK_i));

    printf("\n\n");
    printf("Enter The Number Of Elements You Want In The 'double' Array : ");
    scanf("%u", &PK_doubleArrayLength);

    PK_ptr_dArray = (double *)malloc(PK_DOUBLE_SIZE * PK_doubleArrayLength);
    if (PK_ptr_dArray == NULL)
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY FAILED !!! EXITING NOW...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY SUCCEEDED !!! \n\n");
    }

    printf("\n\n");
    printf("Enter The %d Double Elements To Fill Up The 'double' Array : \n\n", PK_doubleArrayLength);
    for (PK_i = 0; PK_i < PK_doubleArrayLength; PK_i++)
        scanf("%lf", (PK_ptr_dArray + PK_i));

    printf("\n\n");
    printf("Enter The Number Of Elements You Want In The Character Array : ");
    scanf("%u", &PK_charArrayLength);

    PK_ptr_cArray = (char *)malloc(PK_CHAR_SIZE * PK_charArrayLength);
    if (PK_ptr_cArray == NULL)
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR CHARACTER ARRAY FAILED !!! EXITING NOW...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR CHARACTER ARRAY SUCCEEDED !!! \n\n");
    }

    printf("\n\n");
    printf("Enter The %d Character Elements To Fill Up The Character Array : \n\n", PK_charArrayLength);
    for (PK_i = 0; PK_i < PK_charArrayLength; PK_i++)
    {
        *(PK_ptr_cArray + PK_i) = getch();
        printf("%c\n", *(PK_ptr_cArray + PK_i));
    }

    printf("\n\n");
    printf("The Integer Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", PK_intArrayLength);
    for (PK_i = 0; PK_i < PK_intArrayLength; PK_i++)
        printf(" %d \t \t At Address : %p\n", *(PK_ptr_iArray + PK_i), (PK_ptr_iArray + PK_i));

    printf("\n\n");
    printf("The Float Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", PK_floatArrayLength);
    for (PK_i = 0; PK_i < PK_floatArrayLength; PK_i++)
        printf(" %f \t \t At Address : %p\n", *(PK_ptr_fArray + PK_i), (PK_ptr_fArray + PK_i));

    printf("\n\n");
    printf("The Double Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", PK_doubleArrayLength);
    for (PK_i = 0; PK_i < PK_doubleArrayLength; PK_i++)
        printf(" %lf \t \t At Address : %p\n", *(PK_ptr_dArray + PK_i), (PK_ptr_dArray + PK_i));

    printf("\n\n");
    printf("The Character Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", PK_charArrayLength);
    for (PK_i = 0; PK_i < PK_charArrayLength; PK_i++)
        printf(" %c \t \t At Address : %p\n", *(PK_ptr_cArray + PK_i), (PK_ptr_cArray + PK_i));

    if (PK_ptr_cArray)
    {
        free(PK_ptr_cArray);
        PK_ptr_cArray = NULL;
        printf("\n\n");
        printf("MEMORY OCCUPIED BY CHARACTER ARRAY HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    if (PK_ptr_dArray)
    {
        free(PK_ptr_dArray);
        PK_ptr_dArray = NULL;
        printf("\n\n");
        printf("MEMORY OCCUPIED BY 'DOUBLE' ARRAY HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    if (PK_ptr_fArray)
    {
        free(PK_ptr_fArray);
        PK_ptr_fArray = NULL;
        printf("\n\n");
        printf("MEMORY OCCUPIED BY FLOATING-POINT ARRAY HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    if (PK_ptr_iArray)
    {
        free(PK_ptr_iArray);
        PK_ptr_iArray = NULL;
        printf("\n\n");
        printf("MEMORY OCCUPIED BY INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}
