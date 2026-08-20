#include <stdio.h>

struct MyNumber
{
    int PK_num;
    int PK_num_table[10];
};

struct NumTables
{
    struct MyNumber PK_a;
    struct MyNumber PK_b;
    struct MyNumber PK_c;
};

int main(void)
{
    struct NumTables PK_tables;
    int i;

    PK_tables.PK_a.PK_num = 1;
    for (i = 0; i < 10; i++)
        PK_tables.PK_a.PK_num_table[i] = PK_tables.PK_a.PK_num * (i + 1);

    printf("\n\n");
    printf("Table Of %d : \n\n", PK_tables.PK_a.PK_num);
    for (i = 0; i < 10; i++)
        printf("%d * %d = %d\n", PK_tables.PK_a.PK_num, (i + 1), PK_tables.PK_a.PK_num_table[i]);

    PK_tables.PK_b.PK_num = 2;
    for (i = 0; i < 10; i++)
        PK_tables.PK_b.PK_num_table[i] = PK_tables.PK_b.PK_num * (i + 1);

    printf("\n\n");
    printf("Table Of %d : \n\n", PK_tables.PK_b.PK_num);
    for (i = 0; i < 10; i++)
        printf("%d * %d = %d\n", PK_tables.PK_b.PK_num, (i + 1), PK_tables.PK_b.PK_num_table[i]);

    PK_tables.PK_c.PK_num = 3;
    for (i = 0; i < 10; i++)
        PK_tables.PK_c.PK_num_table[i] = PK_tables.PK_c.PK_num * (i + 1);

    printf("\n\n");
    printf("Table Of %d : \n\n", PK_tables.PK_c.PK_num);
    for (i = 0; i < 10; i++)
        printf("%d * %d = %d\n", PK_tables.PK_c.PK_num, (i + 1), PK_tables.PK_c.PK_num_table[i]);

    return(0);
}
