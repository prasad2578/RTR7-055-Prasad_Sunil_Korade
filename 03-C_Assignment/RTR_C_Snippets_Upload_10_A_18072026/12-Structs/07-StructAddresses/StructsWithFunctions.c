#include <stdio.h>

struct MyData
{
    int PK_i;
    float PK_f;
    double PK_d;
    char PK_c;
};
struct MyData AddStructMembers(struct MyData, struct MyData, struct MyData);

struct MyData PK_data1, PK_data2, PK_data3, PK_answer_data;

int main(void)
{
    printf("\n\n\n\n");
    printf(" ********** DATA 1 ********** \n\n");
    printf("Enter Integer Value For 'PK_i' Of 'struct MyData PK_data1' : ");
    scanf("%d", &PK_data1.PK_i);

    printf("\n\n");
    printf("Enter Floating-Point Value For 'PK_f' Of 'struct MyData PK_data1' : ");
    scanf("%f", &PK_data1.PK_f);

    printf("\n\n");
    printf("Enter 'Double' Value For 'PK_d' Of 'struct MyData PK_data1' : ");
    scanf("%lf", &PK_data1.PK_d);

    printf("\n\n");
    printf("Enter Character Value For 'PK_c' Of 'struct MyData PK_data1' : ");
    PK_data1.PK_c = getch();
    printf("%c", PK_data1.PK_c);

    printf("\n\n\n\n");
    printf(" ********** DATA 2 ********** \n\n");
    printf("Enter Integer Value For 'PK_i' Of 'struct MyData PK_data2' : ");
    scanf("%d", &PK_data2.PK_i);

    printf("\n\n");
    printf("Enter Floating-Point Value For 'PK_f' Of 'struct MyData PK_data2' : ");
    scanf("%f", &PK_data2.PK_f);

    printf("\n\n");
    printf("Enter 'Double' Value For 'PK_d' Of 'struct MyData PK_data2' : ");
    scanf("%lf", &PK_data2.PK_d);

    printf("\n\n");
    printf("Enter Character Value For 'PK_c' Of 'struct MyData PK_data2' : ");
    PK_data2.PK_c = getch();
    printf("%c", PK_data2.PK_c);

    printf("\n\n\n\n");
    printf(" ********** DATA 3 ********** \n\n");
    printf("Enter Integer Value For 'PK_i' Of 'struct MyData PK_data3' : ");
    scanf("%d", &PK_data3.PK_i);

    printf("\n\n");
    printf("Enter Floating-Point Value For 'PK_f' Of 'struct MyData PK_data3' : ");
    scanf("%f", &PK_data3.PK_f);

    printf("\n\n");
    printf("Enter 'Double' Value For 'PK_d' Of 'struct MyData PK_data3' : ");
    scanf("%lf", &PK_data3.PK_d);

    printf("\n\n");
    printf("Enter Character Value For 'PK_c' Of 'struct MyData PK_data3' : ");
    PK_data3.PK_c = getch();
    printf("%c", PK_data3.PK_c);

    PK_answer_data = AddStructMembers(PK_data1, PK_data2, PK_data3);

    printf("\n\n\n\n");
    printf(" ********** ANSWER ********* \n\n");
    printf("PK_answer_data.PK_i = %d\n", PK_answer_data.PK_i);
    printf("PK_answer_data.PK_f = %f\n", PK_answer_data.PK_f);
    printf("PK_answer_data.PK_d = %lf\n\n", PK_answer_data.PK_d);

    PK_answer_data.PK_c = PK_data1.PK_c;
    printf("PK_answer_data.PK_c (from PK_data1) = %c\n\n", PK_answer_data.PK_c);
    PK_answer_data.PK_c = PK_data2.PK_c;
    printf("PK_answer_data.PK_c (from PK_data2) = %c\n\n", PK_answer_data.PK_c);
    PK_answer_data.PK_c = PK_data3.PK_c;
    printf("PK_answer_data.PK_c (from PK_data3) = %c\n\n", PK_answer_data.PK_c);

    return(0);
}

struct MyData AddStructMembers(struct MyData PK_md_one, struct MyData PK_md_two, struct MyData PK_md_three)
{
    struct MyData PK_answer;

    // code
    PK_answer.PK_i = PK_md_one.PK_i + PK_md_two.PK_i + PK_md_three.PK_i;
    PK_answer.PK_f = PK_md_one.PK_f + PK_md_two.PK_f + PK_md_three.PK_f;
    PK_answer.PK_d = PK_md_one.PK_d + PK_md_two.PK_d + PK_md_three.PK_d;

    return(PK_answer);
}
