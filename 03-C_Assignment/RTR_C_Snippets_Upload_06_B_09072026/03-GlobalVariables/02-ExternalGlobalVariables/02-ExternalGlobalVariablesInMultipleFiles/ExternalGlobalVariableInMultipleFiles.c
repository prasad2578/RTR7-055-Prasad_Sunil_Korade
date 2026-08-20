#include <stdio.h>

// *** GLOBAL SCOPE ***
int PK_global_count = 0;

int main(void)
{
    //function prototypes
    void change_count(void);
    void change_count_one(void); //function defines in File_01.c
    void change_count_two(void); //function defines in File_02.c

    //code
    printf("\n");

    change_count();
    change_count_one(); //function defines in File_01.c
    change_count_two(); //function defines in File_02.c

    return(0);
}

void change_count(void)
{
    //code
    PK_global_count = PK_global_count + 1;
    printf("Global Count = %d\n", PK_global_count);
}
