#include<stdio.h>

int main(void)
{
          int PK_num;
          int *PK_ptr = NULL;

          PK_num = 10 ;

          printf("\n\n");

          printf("******** BEFORE PK_ptr = &PK_num ********\n\n");
          printf("value of 'PK_num'     %d\n\n",PK_num);
          printf("Addresss of 'PK_num'  = %d\n\n", *(&PK_num));


          PK_ptr = &PK_num;

          printf("\n\n");

          printf("******AFTER PK_ptr = &PK_num******\n\n");
          printf("vlaue of 'PK_num'    =%d\n\n", PK_num);
          printf("Address of 'PK_num'     =%p\n\n",PK_ptr);
          printf("Value at address of PK_num = %p\n\n", PK_ptr);

          return(0);
}
