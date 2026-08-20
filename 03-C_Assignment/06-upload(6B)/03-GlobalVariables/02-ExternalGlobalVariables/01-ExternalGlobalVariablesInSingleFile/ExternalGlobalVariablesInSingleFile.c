#include <stdio.h>

// GLOBAL SCOPE

int main(void)
{
    //function prototypes
    void change_count(void);

    //variable declarations
    extern int PK_global_count;

    //code
    printf("\n");
    printf("Value Of PK_global_count before change_count() = %d\n", PK_global_count);
    change_count();
    printf("Value Of PK_global_count after change_count() = %d\n", PK_global_count);
    printf("\n");
    return(0);
}

int PK_global_count = 0;

void change_count(void)
{
    //code
    PK_global_count = 5;
    printf("Value Of PK_global_count in change_count() = %d\n", PK_global_count);
}
