#include <stdio.h>
#include <ctype.h>
#include <conio.h>

#define NUM_EMPLOYEES 5
#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name[NAME_LENGTH];
    int age;
    char sex;
    float salary;
    char marital_status;
};



int main(void)
{

    void PK_MyGetString(char str[], int str_size);
    struct Employee PK_EmployeeRecord[NUM_EMPLOYEES];
    int i;

    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("\n\n\n\n");
        printf("***** DATA ENTRY FOR EMPLOYEE NUMBER %d *****\n", (i + 1));

        printf("\n\n");
        printf("Enter Employee Name : ");
        PK_MyGetString(PK_EmployeeRecord[i].name, NAME_LENGTH);

        printf("\n\n\n");
        printf("Enter Employee's Age (in years) : ");
        scanf("%d", &PK_EmployeeRecord[i].age);

        printf("\n\n");
        printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
        PK_EmployeeRecord[i].sex = getch();
        printf("%c", PK_EmployeeRecord[i].sex);
        PK_EmployeeRecord[i].sex = toupper(PK_EmployeeRecord[i].sex);

        printf("\n\n\n");
        printf("Enter Employee's Salary (in Indian Rupees) : ");
        scanf("%f", &PK_EmployeeRecord[i].salary);

        printf("\n\n");
        printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
        PK_EmployeeRecord[i].marital_status = getch();
        printf("%c", PK_EmployeeRecord[i].marital_status);
        PK_EmployeeRecord[i].marital_status = toupper(PK_EmployeeRecord[i].marital_status);
    }

    printf("\n\n\n\n");
    printf("********** DISPLAYING EMPLOYEE RECORDS ********** \n\n");
    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("*********** EMPLOYEE NUMBER %d ********** \n\n", (i + 1));
        printf("Name : %s\n", PK_EmployeeRecord[i].name);
        printf("Age : %d years\n", PK_EmployeeRecord[i].age);

        if (PK_EmployeeRecord[i].sex == 'M')
            printf("Sex : Male\n");
        else if (PK_EmployeeRecord[i].sex == 'F')
            printf("Sex : Female\n");
        else
            printf("Sex : Invalid Data Entered\n");

        printf("Salary : Rs. %f\n", PK_EmployeeRecord[i].salary);

        if (PK_EmployeeRecord[i].marital_status == 'Y')
            printf("Marital Status : Married\n");
        else if (PK_EmployeeRecord[i].marital_status == 'N')
            printf("Marital Status : Unmarried\n");
        else
            printf("Marital Status : Invalid Data Entered\n");

        printf("\n\n");
    }

    return(0);
}

void PK_MyGetString(char str[], int str_size)
{
    int i = 0;
    char ch = '0';

    do
    {
        ch = getch();
        str[i] = ch;
        printf("%c", str[i]);
        i++;
    } while ((ch != '\r') && (i < str_size));

    if (i == str_size)
        str[i - 1] = '\0';
    else
        str[i] = '\0';
}
