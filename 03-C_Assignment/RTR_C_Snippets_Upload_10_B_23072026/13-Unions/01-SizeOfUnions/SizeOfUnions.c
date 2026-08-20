#include<stdio.h>

struct MyStruct
{
          int PK_i;
          float PK_f;
          double PK_d;
          char PK_c;

};

union MyUnion
{
          int PK_i;
          float PK_f;
          double PK_d;
          char PK_c;

};

int main(void)
{
          //variable declarration 
          struct MyStruct s;
          union MyUnion u;

          printf("\n\n");
          printf("Size of MyStruct = %zu\n", sizeof(s));
          printf("\n\n");
          printf("Size Of Myunion = %zu\n", sizeof(u));
          return(0);
          
}
