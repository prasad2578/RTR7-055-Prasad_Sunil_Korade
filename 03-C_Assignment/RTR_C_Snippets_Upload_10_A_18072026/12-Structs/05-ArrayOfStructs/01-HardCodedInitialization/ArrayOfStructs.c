#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name[NAME_LENGTH];
    int age;
    float salary;
    char sex;
    char marital_status[MARITAL_STATUS];
};

int main(void)
{
    struct Employee PK_EmployeeRecord[5];

    char PK_employee_prasad[] = "prasad";
    char PK_employee_sagar[] = "sagar";
    char PK_employee_pranali[] = "pranali";
    char PK_employee_gauri[] = "gauri";
    char PK_employee_hemant[] = "hemant";

    strcpy(PK_EmployeeRecord[0].name, PK_employee_prasad);
    PK_EmployeeRecord[0].age = 20;
    PK_EmployeeRecord[0].sex = 'M';
    PK_EmployeeRecord[0].salary = 50000.0f;
    strcpy(PK_EmployeeRecord[0].marital_status, "Unmarried");

    strcpy(PK_EmployeeRecord[1].name, PK_employee_sagar);
    PK_EmployeeRecord[1].age = 32;
    PK_EmployeeRecord[1].sex = 'M';
    PK_EmployeeRecord[1].salary = 60000.0f;
    strcpy(PK_EmployeeRecord[1].marital_status, "Married");

    strcpy(PK_EmployeeRecord[2].name, PK_employee_pranali);
    PK_EmployeeRecord[2].age = 29;
    PK_EmployeeRecord[2].sex = 'F';
    PK_EmployeeRecord[2].salary = 62000.0f;
    strcpy(PK_EmployeeRecord[2].marital_status, "married");

    strcpy(PK_EmployeeRecord[3].name, PK_employee_gauri);
    PK_EmployeeRecord[3].age = 33;
    PK_EmployeeRecord[3].sex = 'F';
    PK_EmployeeRecord[3].salary = 50000.0f;
    strcpy(PK_EmployeeRecord[3].marital_status, "Married");

    strcpy(PK_EmployeeRecord[4].name, PK_employee_hemant);
    PK_EmployeeRecord[4].age = 40;
    PK_EmployeeRecord[4].sex = 'M';
    PK_EmployeeRecord[4].salary = 55000.0f;
    strcpy(PK_EmployeeRecord[4].marital_status, "Married");

    int i;
    printf("\n\n");
    printf("****** DISPLAYING EMPLOYEE RECORDS ****** \n\n");
    for (i = 0; i < 5; i++)
    {
        printf("****** EMPLOYEE NUMBER %d ****** \n\n", (i + 1));
        printf("Name : %s\n", PK_EmployeeRecord[i].name);
        printf("Age : %d years\n", PK_EmployeeRecord[i].age);

        if (PK_EmployeeRecord[i].sex == 'M' || PK_EmployeeRecord[i].sex == 'm')
            printf("Sex : Male\n");
        else
            printf("Sex : Female\n");

        printf("Salary : Rs. %f\n", PK_EmployeeRecord[i].salary);
        printf("Marital Status : %s\n", PK_EmployeeRecord[i].marital_status);
        printf("\n\n");
    }

    return(0);
}
