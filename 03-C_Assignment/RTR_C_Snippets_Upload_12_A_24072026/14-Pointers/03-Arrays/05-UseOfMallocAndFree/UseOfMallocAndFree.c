#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *PK_ptr_iArray = NULL;
    unsigned int PK_intArrayLength = 0;
    int PK_i;

    printf("\n\n");
    printf("Enter The Number Of Elements You Want In Your Integer Array : ");
    scanf("%d", &PK_intArrayLength);

    PK_ptr_iArray = (int *)malloc(sizeof(int) * PK_intArrayLength);
    if (PK_ptr_iArray == NULL)
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS FAILED !!! EXITING NOW...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS SUCCEEDED !!! \n\n");
        printf("MEMORY ADDRESSES FROM %p TO %p HAVE BEEN ALLOCATED TO INTEGER ARRAY !!! \n\n",PK_ptr_iArray, (PK_ptr_iArray + (PK_intArrayLength - 1)));
    }

    printf("\n\n");
    printf("Enter %d Elements For The Integer Array : \n\n", PK_intArrayLength);
    for (PK_i = 0; PK_i < PK_intArrayLength; PK_i++)
        scanf("%d", (PK_ptr_iArray + PK_i));

    printf("\n\n");
    printf("The Integer Array Entered By You, Consisting Of %d Elements : \n\n", PK_intArrayLength);
    for (PK_i = 0; PK_i < PK_intArrayLength; PK_i++)
    {
        printf("PK_ptr_iArray[%d] = %d \t At Address &PK_ptr_iArray[%d] : %p\n",PK_i, PK_ptr_iArray[PK_i], PK_i, &PK_ptr_iArray[PK_i]);
    }

    printf("\n\n");
    for (PK_i = 0; PK_i < PK_intArrayLength; PK_i++)
    {
        printf("*(PK_ptr_iArray + %d) = %d \t At Address (PK_ptr_iArray + %d) : %p\n",PK_i, *(PK_ptr_iArray + PK_i), PK_i, (PK_ptr_iArray + PK_i));
    }

    if (PK_ptr_iArray)
    {
        free(PK_ptr_iArray);
        PK_ptr_iArray = NULL;
        printf("\n\n");
        printf("MEMORY ALLOCATED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}
