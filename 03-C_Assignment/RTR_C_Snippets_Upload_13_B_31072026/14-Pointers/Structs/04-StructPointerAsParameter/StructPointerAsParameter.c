#include <stdio.h>
#include <stdlib.h>

struct PK_MyData
{
    int PK_i;
    float PK_f;
    double PK_d;
};

void PK_ChangeValues(struct PK_MyData *PK_pParam_Data);

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

    PK_pData->PK_i = 30;
    PK_pData->PK_f = 11.45f;
    PK_pData->PK_d = 1.2995;

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct PK_MyData' ARE : \n\n");
    printf("i = %d\n", PK_pData->PK_i);
    printf("f = %f\n", PK_pData->PK_f);
    printf("d = %lf\n", PK_pData->PK_d);

    PK_ChangeValues(PK_pData);

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct PK_MyData' ARE : \n\n");
    printf("i = %d\n", PK_pData->PK_i);
    printf("f = %f\n", PK_pData->PK_f);
    printf("d = %lf\n", PK_pData->PK_d);

    if (PK_pData)
    {
        free(PK_pData);
        PK_pData = NULL;
        printf("MEMORY ALLOCATED TO 'struct PK_MyData' HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}

void PK_ChangeValues(struct PK_MyData *PK_pParam_Data)
{
    PK_pParam_Data->PK_i = 9;
    PK_pParam_Data->PK_f = 8.2f;
    PK_pParam_Data->PK_d = 6.1998;

    (*PK_pParam_Data).PK_i = 9;
    (*PK_pParam_Data).PK_f = 8.2f;
    (*PK_pParam_Data).PK_d = 6.1998;
}
