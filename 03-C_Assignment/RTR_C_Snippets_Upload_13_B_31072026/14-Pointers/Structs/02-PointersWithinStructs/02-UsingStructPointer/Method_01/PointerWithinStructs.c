#include <stdio.h>
#include <stdlib.h>

struct PK_MyData
{
    int *PK_ptr_i;
    int PK_i;

    float *PK_ptr_f;
    float PK_f;

    double *PK_ptr_d;
    double PK_d;
};

int main(void)
{
    struct PK_MyData *PK_pData = NULL;

    printf("\n\n");

    PK_pData = (struct PK_MyData *)malloc(sizeof(struct PK_MyData));
    if (PK_pData == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY TO 'struct PK_MyData' !!! EXITING NOW ...\n\n");
        exit(0);
    }
    else
        printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct PK_MyData' !!! \n\n");

    (*PK_pData).PK_i = 9;
    (*PK_pData).PK_ptr_i = &(*PK_pData).PK_i;

    (*PK_pData).PK_f = 11.45f;
    (*PK_pData).PK_ptr_f = &(*PK_pData).PK_f;

    (*PK_pData).PK_d = 30.121995;
    (*PK_pData).PK_ptr_d = &(*PK_pData).PK_d;

    printf("\n\n");
    printf("i = %d\n", *((*PK_pData).PK_ptr_i));
    printf("Address Of 'i' = %p\n", (*PK_pData).PK_ptr_i);

    printf("\n\n");
    printf("f = %f\n", *((*PK_pData).PK_ptr_f));
    printf("Address Of 'f' = %p\n", (*PK_pData).PK_ptr_f);

    printf("\n\n");
    printf("d = %lf\n", *((*PK_pData).PK_ptr_d));
    printf("Address Of 'd' = %p\n", (*PK_pData).PK_ptr_d);

    if (PK_pData)
    {
        free(PK_pData);
        PK_pData = NULL;
        printf("MEMORY ALLOCATED TO 'struct PK_MyData' HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}
