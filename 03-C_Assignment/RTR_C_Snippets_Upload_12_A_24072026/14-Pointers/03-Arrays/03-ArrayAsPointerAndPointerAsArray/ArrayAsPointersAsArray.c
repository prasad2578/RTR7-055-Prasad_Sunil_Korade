#include <stdio.h>

int main(void)
{
    int PK_iArray[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int *PK_ptr_iArray = NULL;

    printf("\n\n");
    printf(" *** USING ARRAY NAME AS A POINTER i.e : Value Of xth Element Of PK_iArray : *(PK_iArray + x) AND Address Of xth Element Of PK_iArray : (PK_iArray + x) *** \n\n");
    printf("Integer Array Elements And Their Addresses : \n\n");

    printf("*(PK_iArray + 0) = %d \t At Address (PK_iArray + 0) : %p\n", *(PK_iArray + 0), (PK_iArray + 0));
    printf("*(PK_iArray + 1) = %d \t At Address (PK_iArray + 1) : %p\n", *(PK_iArray + 1), (PK_iArray + 1));
    printf("*(PK_iArray + 2) = %d \t At Address (PK_iArray + 2) : %p\n", *(PK_iArray + 2), (PK_iArray + 2));
    printf("*(PK_iArray + 3) = %d \t At Address (PK_iArray + 3) : %p\n", *(PK_iArray + 3), (PK_iArray + 3));
    printf("*(PK_iArray + 4) = %d \t At Address (PK_iArray + 4) : %p\n", *(PK_iArray + 4), (PK_iArray + 4));
    printf("*(PK_iArray + 5) = %d \t At Address (PK_iArray + 5) : %p\n", *(PK_iArray + 5), (PK_iArray + 5));
    printf("*(PK_iArray + 6) = %d \t At Address (PK_iArray + 6) : %p\n", *(PK_iArray + 6), (PK_iArray + 6));
    printf("*(PK_iArray + 7) = %d \t At Address (PK_iArray + 7) : %p\n", *(PK_iArray + 7), (PK_iArray + 7));
    printf("*(PK_iArray + 8) = %d \t At Address (PK_iArray + 8) : %p\n", *(PK_iArray + 8), (PK_iArray + 8));
    printf("*(PK_iArray + 9) = %d \t At Address (PK_iArray + 9) : %p\n", *(PK_iArray + 9), (PK_iArray + 9));

    PK_ptr_iArray = PK_iArray;

    printf("\n\n");
    printf(" *** USING POINTER AS ARRAY NAME i.e : Value Of xth Element Of PK_iArray : PK_ptr_iArray[x] AND Address Of xth Element Of PK_iArray : &PK_ptr_iArray[x] *** \n\n");
    printf("Integer Array Elements And Their Addresses : \n\n");

    printf("PK_ptr_iArray[0] = %d \t At Address &PK_ptr_iArray[0] : %p\n", PK_ptr_iArray[0], &PK_ptr_iArray[0]);
    printf("PK_ptr_iArray[1] = %d \t At Address &PK_ptr_iArray[1] : %p\n", PK_ptr_iArray[1], &PK_ptr_iArray[1]);
    printf("PK_ptr_iArray[2] = %d \t At Address &PK_ptr_iArray[2] : %p\n", PK_ptr_iArray[2], &PK_ptr_iArray[2]);
    printf("PK_ptr_iArray[3] = %d \t At Address &PK_ptr_iArray[3] : %p\n", PK_ptr_iArray[3], &PK_ptr_iArray[3]);
    printf("PK_ptr_iArray[4] = %d \t At Address &PK_ptr_iArray[4] : %p\n", PK_ptr_iArray[4], &PK_ptr_iArray[4]);
    printf("PK_ptr_iArray[5] = %d \t At Address &PK_ptr_iArray[5] : %p\n", PK_ptr_iArray[5], &PK_ptr_iArray[5]);
    printf("PK_ptr_iArray[6] = %d \t At Address &PK_ptr_iArray[6] : %p\n", PK_ptr_iArray[6], &PK_ptr_iArray[6]);
    printf("PK_ptr_iArray[7] = %d \t At Address &PK_ptr_iArray[7] : %p\n", PK_ptr_iArray[7], &PK_ptr_iArray[7]);
    printf("PK_ptr_iArray[8] = %d \t At Address &PK_ptr_iArray[8] : %p\n", PK_ptr_iArray[8], &PK_ptr_iArray[8]);
    printf("PK_ptr_iArray[9] = %d \t At Address &PK_ptr_iArray[9] : %p\n", PK_ptr_iArray[9], &PK_ptr_iArray[9]);

    return(0);
}
