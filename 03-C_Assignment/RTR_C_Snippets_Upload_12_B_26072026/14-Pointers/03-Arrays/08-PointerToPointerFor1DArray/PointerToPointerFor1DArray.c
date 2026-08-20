#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void PK_MyAlloc(int **PK_ptr, unsigned int PK_numberOfElements);
    int *PK_piArray = NULL;
    unsigned int PK_num_elements;
    int PK_i;

    printf("\n\n");
    printf("How Many Elements You Want In Integer Array ?\n\n");
    scanf("%u", &PK_num_elements);
    printf("\n\n");
    PK_MyAlloc(&PK_piArray, PK_num_elements);

    printf("Enter %u Elements To Fill Up Your Integer Array : \n\n", PK_num_elements);
    for (PK_i = 0; PK_i < PK_num_elements; PK_i++)
        scanf("%d", &PK_piArray[PK_i]);

    printf("\n\n");
    printf("The %u Elements Entered By You In The Integer Array : \n\n", PK_num_elements);
    for (PK_i = 0; PK_i < PK_num_elements; PK_i++)
        printf("%u\n", PK_piArray[PK_i]);

    printf("\n\n");
    if (PK_piArray)
    {
        free(PK_piArray);
        PK_piArray = NULL;
        printf("Memory Allocated Has Now Been Successfully Freed !!! \n\n");
    }
    return(0);
}

void PK_MyAlloc(int **PK_ptr, unsigned int PK_numberOfElements)
{
    *PK_ptr = (int *)malloc(PK_numberOfElements * sizeof(int));
    if (*PK_ptr == NULL)
    {
        printf("Could Not Allocate Memory !!! Exitting Now ... \n\n");
        exit(0);
    }
    printf("PK_MyAlloc() Has Successfully Allocated %zu Bytes For Integer Array !!! \n\n",(PK_numberOfElements * sizeof(int)));
}
