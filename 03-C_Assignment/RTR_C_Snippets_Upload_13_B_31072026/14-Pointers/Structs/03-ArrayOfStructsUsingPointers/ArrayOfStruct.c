#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define PK_MARITAL_STATUS 10
#define PK_NAME_LENGTH 100

struct PK_Employee
{
    char PK_name[PK_NAME_LENGTH];
    int PK_age;

    char PK_sex;
    float PK_salary;
    char PK_marital_status;
};

void PK_MyGetString(char PK_str[], int PK_str_size);

int main(void)
{
    struct PK_Employee *PK_pEmployeeRecord = NULL;
    int PK_num_employees, PK_i;

    printf("\n\n");
    printf("Enter Number Of Employees Whose Details You Want To Record : ");
    scanf("%d", &PK_num_employees);

    printf("\n\n");
    PK_pEmployeeRecord = (struct PK_Employee *)malloc(sizeof(struct PK_Employee) * PK_num_employees);
    if (PK_pEmployeeRecord == NULL)
    {
        printf("FAILED TO ALLOCATED MEMORY FOR %d EMPLOYEES ! EXITING NOW ...\n\n", PK_num_employees);
        exit(0);
    }
    else
        printf("SUCCESSFULLY ALLOCATED MEMORY FOR %d EMPLOYEES !!! \n\n", PK_num_employees);

    for (PK_i = 0; PK_i < PK_num_employees; PK_i++)
    {
        printf("\n\n\n\n");
        printf(" ****** DATA ENTRY FOR EMPLOYEE NUMBER %d ******\n", (PK_i + 1));
        printf("\n\n");
        printf("Enter Employee Name : ");
        PK_MyGetString(PK_pEmployeeRecord[PK_i].PK_name, PK_NAME_LENGTH);

        printf("\n\n\n");
        printf("Enter Employee's Age (in years) : ");
        scanf("%d", &PK_pEmployeeRecord[PK_i].PK_age);

        printf("\n\n");
        printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
        PK_pEmployeeRecord[PK_i].PK_sex = getch();
        printf("%c", PK_pEmployeeRecord[PK_i].PK_sex);
        PK_pEmployeeRecord[PK_i].PK_sex = toupper(PK_pEmployeeRecord[PK_i].PK_sex);

        printf("\n\n\n");
        printf("Enter Employee's Salary (in Indian Rupees) : ");
        scanf("%f", &PK_pEmployeeRecord[PK_i].PK_salary);

        printf("\n\n");
        printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
        PK_pEmployeeRecord[PK_i].PK_marital_status = getch();
        printf("%c", PK_pEmployeeRecord[PK_i].PK_marital_status);
        PK_pEmployeeRecord[PK_i].PK_marital_status = toupper(PK_pEmployeeRecord[PK_i].PK_marital_status);
    }

    printf("\n\n\n\n");
    printf(" ********** DISPLAYING EMPLOYEE RECORDS ********** \n\n");
    for (PK_i = 0; PK_i < PK_num_employees; PK_i++)
    {
        printf(" *********** EMPLOYEE NUMBER %d ********** \n\n", (PK_i + 1));
        printf("Name : %s\n", PK_pEmployeeRecord[PK_i].PK_name);
        printf("Age : %d years\n", PK_pEmployeeRecord[PK_i].PK_age);

        if (PK_pEmployeeRecord[PK_i].PK_sex == 'M')
            printf("Sex : Male\n");
        else if (PK_pEmployeeRecord[PK_i].PK_sex == 'F')
            printf("Sex : Female\n");
        else
            printf("Sex : Invalid Data Entered\n");

        printf("Salary : Rs. %f\n", PK_pEmployeeRecord[PK_i].PK_salary);

        if (PK_pEmployeeRecord[PK_i].PK_marital_status == 'Y')
            printf("Marital Status : Married\n");
        else if (PK_pEmployeeRecord[PK_i].PK_marital_status == 'N')
            printf("Marital Status : Unmarried\n");
        else
            printf("Marital Status : Invalid Data Entered\n");

        printf("\n\n");
    }

    if (PK_pEmployeeRecord)
    {
        free(PK_pEmployeeRecord);
        PK_pEmployeeRecord = NULL;
        printf("MEMORY ALLOCATED TO %d EMPLOYEES HAS BEEN SUCCESSFULLY FREED !!! \n\n", PK_num_employees);
    }

    return(0);
}

void PK_MyGetString(char PK_str[], int PK_str_size)
{
    int PK_i;
    char PK_ch = '\0';

    PK_i = 0;
    do
    {
        PK_ch = getch();
        PK_str[PK_i] = PK_ch;
        printf("%c", PK_str[PK_i]);
        PK_i++;
    } while (PK_ch != '\r' && PK_i < PK_str_size);

    if (PK_i == PK_str_size)
        PK_str[PK_i - 1] = '\0';
    else
        PK_str[PK_i] = '\0';
}
