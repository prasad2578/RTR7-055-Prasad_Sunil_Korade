#include <stdio.h>

struct PK_Employee
{
    char PK_name[100];
    int PK_age;
    char PK_sex;
    char PK_marital_status;
    float PK_salary;
};

int main(void)
{
    printf("\n\n");
    printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE : \n\n");

    printf("Size of (int) : %zu \t Size of pointer to int (int*) : %zu\n\n", sizeof(int), sizeof(int*));
    printf("Size of (double) : %zu \t Size of pointer to double (double*) : %zu\n\n", sizeof(double), sizeof(double*));
    printf("Size of (char) : %zu \t Size of pointer to char (char*) : %zu\n\n", sizeof(char), sizeof(char*));
    printf("Size of (float) : %zu \t Size of pointer to float (float*) : %zu\n\n", sizeof(float), sizeof(float*));
    printf("Size of (struct PK_Employee) : %zu \t Size of pointer to struct PK_Employee (struct PK_Employee*) : %zu\n\n",sizeof(struct PK_Employee), sizeof(struct PK_Employee*));

    return(0);
}
