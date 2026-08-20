#include <stdio.h>

struct PK_MyNumber
{
    int PK_num;
    int PK_num_table[10];
};

struct PK_NumTables
{
    struct PK_MyNumber PK_n;
};

int main(void)
{
    struct PK_NumTables PK_tables[10];
    int PK_i, PK_j;

    for (PK_i = 0; PK_i < 10; PK_i++)
    {
        PK_tables[PK_i].PK_n.PK_num = (PK_i + 1);
    }

    for (PK_i = 0; PK_i < 10; PK_i++)
    {
        printf("\n\n");
        printf("Table Of %d : \n\n", PK_tables[PK_i].PK_n.PK_num);

        for (PK_j = 0; PK_j < 10; PK_j++)
        {
            PK_tables[PK_i].PK_n.PK_num_table[PK_j] = PK_tables[PK_i].PK_n.PK_num * (PK_j + 1);
            printf("%d * %d = %d\n", PK_tables[PK_i].PK_n.PK_num, (PK_j + 1), PK_tables[PK_i].PK_n.PK_num_table[PK_j]);
        }
    }

    return(0);
}
