#include <stdio.h>
#include <stdlib.h>

struct PK_MyData
{
    int PK_i;
    float PK_f;
    double PK_d;
};

int main(void)
{
    int PK_i_size;
    int PK_f_size;
    int PK_d_size;
    int PK_struct_MyData_size;
    int PK_pointer_to_struct_MyData_size;
    struct PK_MyData *PK_pData = NULL;

    printf("\n\n");

    PK_pData = (struct PK_MyData *)malloc(sizeof(struct PK_MyData));
    if (PK_pData == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY TO 'struct PK_MyData' ! EXITING NOW ...\n\n");
        exit(0);
    }
    else
        printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct PK_MyData' !!! \n\n");

    (*PK_pData).PK_i = 30;
    (*PK_pData).PK_f = 11.45f;
    (*PK_pData).PK_d = 1.2503;

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct PK_MyData' ARE : \n\n");
    printf("i = %d\n", (*PK_pData).PK_i);
    printf("f = %f\n", (*PK_pData).PK_f);
    printf("d = %lf\n", (*PK_pData).PK_d);

    PK_i_size = sizeof((*PK_pData).PK_i);
    PK_f_size = sizeof((*PK_pData).PK_f);
    PK_d_size = sizeof((*PK_pData).PK_d);

    printf("\n\n");
    printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct PK_MyData' ARE : \n\n");
    printf("Size of 'i' = %d bytes\n", PK_i_size);
    printf("Size of 'f' = %d bytes\n", PK_f_size);
    printf("Size of 'd' = %d bytes\n", PK_d_size);

    PK_struct_MyData_size = sizeof(struct PK_MyData);
    PK_pointer_to_struct_MyData_size = sizeof(struct PK_MyData *);

    printf("\n\n");
    printf("Size of 'struct PK_MyData' : %d bytes\n\n", PK_struct_MyData_size);
    printf("Size of pointer to 'struct PK_MyData' : %d bytes\n\n", PK_pointer_to_struct_MyData_size);

    if (PK_pData)
    {
        free(PK_pData);
        PK_pData = NULL;
        printf("MEMORY ALLOCATED TO 'struct PK_MyData' HAS BEEN SUCCESSFULLY FREED !!! \n\n");
    }

    return(0);
}
