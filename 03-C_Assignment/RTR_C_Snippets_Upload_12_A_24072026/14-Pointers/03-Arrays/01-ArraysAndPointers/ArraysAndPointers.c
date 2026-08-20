#include <stdio.h>

int main(void)
{
    int PK_iArray[] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120 };
    float PK_fArray[] = { 9.8f, 8.7f, 7.6f, 6.5f, 5.4f };
    double PK_dArray[] = { 1.222222, 2.333333, 3.444444 };
    char PK_cArray[] = { 'A', 'S' ,'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' };

    printf("\n\n");
    printf("Integer Array Elements And The Addresses They Occupy Are As Follows : \n\n");
    printf("PK_iArray[0] = %d \t At Address : %p\n", *(PK_iArray + 0), (PK_iArray + 0));
    printf("PK_iArray[1] = %d \t At Address : %p\n", *(PK_iArray + 1), (PK_iArray + 1));
    printf("PK_iArray[2] = %d \t At Address : %p\n", *(PK_iArray + 2), (PK_iArray + 2));
    printf("PK_iArray[3] = %d \t At Address : %p\n", *(PK_iArray + 3), (PK_iArray + 3));
    printf("PK_iArray[5] = %d \t At Address : %p\n", *(PK_iArray + 5), (PK_iArray + 5));
    printf("PK_iArray[6] = %d \t At Address : %p\n", *(PK_iArray + 6), (PK_iArray + 6));
    printf("PK_iArray[7] = %d \t At Address : %p\n", *(PK_iArray + 7), (PK_iArray + 7));
    printf("PK_iArray[8] = %d \t At Address : %p\n", *(PK_iArray + 8), (PK_iArray + 8));
    printf("PK_iArray[9] = %d \t At Address : %p\n", *(PK_iArray + 9), (PK_iArray + 9));

    printf("\n\n");
    printf("Float Array Elements And The Addresses They Occupy Are As Follows : \n\n");
    printf("PK_fArray[0] = %f \t At Address : %p\n", *(PK_fArray + 0), (PK_fArray + 0));
    printf("PK_fArray[1] = %f \t At Address : %p\n", *(PK_fArray + 1), (PK_fArray + 1));
    printf("PK_fArray[2] = %f \t At Address : %p\n", *(PK_fArray + 2), (PK_fArray + 2));
    printf("PK_fArray[3] = %f \t At Address : %p\n", *(PK_fArray + 3), (PK_fArray + 3));
    printf("PK_fArray[4] = %f \t At Address : %p\n", *(PK_fArray + 4), (PK_fArray + 4));

    printf("\n\n");
    printf("Double Array Elements And The Addresses They Occupy Are As Follows : \n\n");
    printf("PK_dArray[0] = %lf \t At Address : %p\n", *(PK_dArray + 0), (PK_dArray + 0));
    printf("PK_dArray[1] = %lf \t At Address : %p\n", *(PK_dArray + 1), (PK_dArray + 1));
    printf("PK_dArray[2] = %lf \t At Address : %p\n", *(PK_dArray + 2), (PK_dArray + 2));

    printf("\n\n");
    printf("Character Array Elements And The Addresses They Occupy Are As Follows : \n\n");
    printf("PK_cArray[0] = %c \t At Address : %p\n", *(PK_cArray + 0), (PK_cArray + 0));
    printf("PK_cArray[1] = %c \t At Address : %p\n", *(PK_cArray + 1), (PK_cArray + 1));
    printf("PK_cArray[2] = %c \t At Address : %p\n", *(PK_cArray + 2), (PK_cArray + 2));
    printf("PK_cArray[3] = %c \t At Address : %p\n", *(PK_cArray + 3), (PK_cArray + 3));
    printf("PK_cArray[4] = %c \t At Address : %p\n", *(PK_cArray + 4), (PK_cArray + 4));
    printf("PK_cArray[5] = %c \t At Address : %p\n", *(PK_cArray + 5), (PK_cArray + 5));
    printf("PK_cArray[6] = %c \t At Address : %p\n", *(PK_cArray + 6), (PK_cArray + 6));
    printf("PK_cArray[7] = %c \t At Address : %p\n", *(PK_cArray + 7), (PK_cArray + 7));
    printf("PK_cArray[8] = %c \t At Address : %p\n", *(PK_cArray + 8), (PK_cArray + 8));
    printf("PK_cArray[9] = %c \t At Address : %p\n", *(PK_cArray + 9), (PK_cArray + 9));
    printf("PK_cArray[10] = %c \t At Address : %p\n", *(PK_cArray + 10), (PK_cArray + 10));
    printf("PK_cArray[11] = %c \t At Address : %p\n", *(PK_cArray + 11), (PK_cArray + 11));
    printf("PK_cArray[12] = %c \t At Address : %p\n", *(PK_cArray + 12), (PK_cArray + 12));
    printf("PK_cArray[13] = %c \t At Address : %p\n", *(PK_cArray + 13), (PK_cArray + 13));

    return(0);
}
