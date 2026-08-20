#include <stdio.h>

struct PK_Employee
{
    char PK_name[100];
    int PK_age;
    float PK_salary;
    char PK_sex;
    char PK_marital_status;
};

int main(void)
{
    printf("\n\n");
    printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");

    printf("Size of (int) : %zu \t \t \t  Size of pointer to int (int*) : %zu \t \t \t Size of pointer to pointer to int (int**) : %zu\n\n",sizeof(int), sizeof(int*), sizeof(int**));

    printf("Size of (float) : %zu \t \t \t Size of pointer to float (float*) : %zu \t \t \t Size of pointer to pointer to float (float**) : %zu\n\n",sizeof(float), sizeof(float*), sizeof(float**));

    printf("Size of (double) : %zu \t \t \t Size of pointer to double (double*) : %zu \t \t \t Size of pointer to pointer to double (double**) : %zu\n\n",sizeof(double), sizeof(double*), sizeof(double**));

    printf("Size of (char) : %zu \t \t \t Size of pointer to char (char*) : %zu \t \t \t Size of pointer to pointer to char (char**) : %zu\n\n",sizeof(char), sizeof(char*), sizeof(char**));

    printf("Size of (struct PK_Employee) : %zu \t \t Size of pointer to struct PK_Employee (struct PK_Employee*) : %zu \t \t \t Size of pointer to pointer to struct PK_Employee (struct PK_Employee**) : %zu\n\n",sizeof(struct PK_Employee), sizeof(struct PK_Employee*), sizeof(struct PK_Employee**));

    return(0);
}
