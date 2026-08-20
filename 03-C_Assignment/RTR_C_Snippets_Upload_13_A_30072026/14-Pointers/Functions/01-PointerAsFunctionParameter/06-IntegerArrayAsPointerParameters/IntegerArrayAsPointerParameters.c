#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void MultiplyArrayElementsByNumber(int *, int, int);

    int *PK_iArray = NULL;
    int PK_num_elements;
    int PK_i, PK_num;

    printf("\n\n");
    printf("Enter How Many Elements You Want In The Integer Array : ");
    scanf("%d", &PK_num_elements);

    PK_iArray = (int *)malloc(PK_num_elements * sizeof(int));
    if (PK_iArray == NULL)
    {
        printf("MEMORY ALLOCATION TO 'iArray' HAS FAILED !!! EXITTING NOW. . . \n\n");
        exit(0);
    }

    printf("\n\n");
    printf("Enter %d Elements For The Integer Array : \n\n", PK_num_elements);
    for (PK_i = 0; PK_i < PK_num_elements; PK_i++)
        scanf("%d", &PK_iArray[PK_i]);

    printf("\n\n");
    printf("Array Before Passing To Function MultiplyArrayElementsByNumber ( ) : \n\n");
    for (PK_i = 0; PK_i < PK_num_elements; PK_i++)
        printf("PK_iArray[%d] = %d\n", PK_i, PK_iArray[PK_i]);

    printf("\n\n");
    printf("Enter The Number By Which You Want To Multiply Each Array Element : ");
    scanf("%d", &PK_num);

    MultiplyArrayElementsByNumber(PK_iArray, PK_num_elements, PK_num);

    printf("\n\n");
    printf("Array Returned By Function MultiplyArrayElementsByNumber ( ) : \n\n");
    for (PK_i = 0; PK_i < PK_num_elements; PK_i++)
        printf("PK_iArray[%d] = %d\n", PK_i, PK_iArray[PK_i]);

    if (PK_iArray)
    {
        free(PK_iArray);
        PK_iArray = NULL;
        printf("\n\n");
        printf("MEMORY ALLOCATED TO 'iArray' HAS BEEN SUCCESSFULLY FREED ! ! ! \n\n");
    }

    return(0);
}

void MultiplyArrayElementsByNumber(int *PK_arr, int PK_iNumElements, int PK_n)
{
    int PK_i;
    for (PK_i = 0; PK_i < PK_iNumElements; PK_i++)
        PK_arr[PK_i] = PK_arr[PK_i] * PK_n;
}
