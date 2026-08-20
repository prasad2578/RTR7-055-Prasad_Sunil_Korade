#include <stdio.h>
#define PK_MAX_NAME_LENGTH 100

struct PK_Employee
{
    char PK_name[PK_MAX_NAME_LENGTH];
    unsigned int PK_age;
    char PK_gender;
    double PK_salary;
};

struct PK_MyData
{
    int PK_i;
    float PK_f;
    double PK_d;
    char PK_c;
};

typedef struct PK_Employee PK_MY_EMPLOYEE_TYPE;
typedef struct PK_MyData PK_MY_DATA_TYPE;

int main(void)
{
    struct PK_Employee PK_emp = {"SARTHAK", 25, 'M', 10000.00};
    PK_MY_EMPLOYEE_TYPE PK_emp_typedef = {"SRUSHTI", 23, 'F', 20400.00};

    struct PK_MyData PK_md = {30, 11.45f, 26.122017, 'S'};
    PK_MY_DATA_TYPE PK_md_typedef;

    PK_md_typedef.PK_i = 9;
    PK_md_typedef.PK_f = 1.5f;
    PK_md_typedef.PK_d = 8.041997;
    PK_md_typedef.PK_c = 'P';

    printf("\n\n");
    printf("struct PK_Employee : \n\n");
    printf("PK_emp.PK_name = %s\n", PK_emp.PK_name);
    printf("PK_emp.PK_age = %d\n", PK_emp.PK_age);
    printf("PK_emp.PK_gender = %c\n", PK_emp.PK_gender);
    printf("PK_emp.PK_salary = %lf\n", PK_emp.PK_salary);

    printf("\n\n");
    printf("PK_MY_EMPLOYEE_TYPE : \n\n");
    printf("PK_emp_typedef.PK_name = %s\n", PK_emp_typedef.PK_name);
    printf("PK_emp_typedef.PK_age = %d\n", PK_emp_typedef.PK_age);
    printf("PK_emp_typedef.PK_gender = %c\n", PK_emp_typedef.PK_gender);
    printf("PK_emp_typedef.PK_salary = %lf\n", PK_emp_typedef.PK_salary);

    printf("\n\n");
    printf("struct PK_MyData : \n\n");
    printf("PK_md.PK_i = %d\n", PK_md.PK_i);
    printf("PK_md.PK_f = %f\n", PK_md.PK_f);
    printf("PK_md.PK_d = %lf\n", PK_md.PK_d);
    printf("PK_md.PK_c = %c\n", PK_md.PK_c);

    printf("\n\n");
    printf("PK_MY_DATA_TYPE : \n\n");
    printf("PK_md_typedef.PK_i = %d\n", PK_md_typedef.PK_i);
    printf("PK_md_typedef.PK_f = %f\n", PK_md_typedef.PK_f);
    printf("PK_md_typedef.PK_d = %lf\n", PK_md_typedef.PK_d);
    printf("PK_md_typedef.PK_c = %c\n", PK_md_typedef.PK_c);

    printf("\n\n");
    return(0);
}
