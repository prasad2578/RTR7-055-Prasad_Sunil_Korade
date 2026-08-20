#include<stdio.h>

union MyUnion
{
          int PK_i;
          float PK_f;
          double PK_d;
          char PK_c;

};
int main(void)
{
          union MyUnion u1, u2;

          printf("\n\n");
          printf("Member of union u1 are : \n\n");

          u1.PK_i = 6;
          u1.PK_f = 10.5;
          u1.PK_d = 25.38888;
          u1.PK_c = 'S';

          printf("u1.PK_i = %d\n\n", u1.PK_i);
          printf("u1.PK_f = %f\n\n", u1.PK_f);
          printf("u1.PK_d = %zu\n\n", u1.PK_d);
          printf("u1.PK_c = %c\n\n", u1.PK_c);

          printf("Addresses of member of union u1 are : \n\n");

          printf("u1.PK_i = %p\n\n", u1.PK_i);
          printf("u1.PK_f = %p\n\n", u1.PK_f);
          printf("u1.PK_d =  %p\n\n", u1.PK_d);
          printf("u1.PK_c = %p\n\n", u1.PK_c);

          printf("MyUnion u1  = %p \n\n", &u1);

          printf("\n\n");
          printf("Member of union u2 are : \n\n");

          u2.PK_i = 3;
          printf("u2.PK_i = %d\n\n", u2.PK_i);

          u2.PK_f = 2.5f;
          printf("u2.PK_f = %f\n\n", u2.PK_f);

          u2.PK_d = 2.5;
          printf("u2.PK_d = %lf\n\n", u2.PK_f);

          u2.PK_f = 'S';
          printf("u2.PK_c = %c\n\n", u2.PK_c);


          printf("Addresses of member of union u1 are : \n\n");

          printf("u2.PK_i = %p\n\n", u2.PK_i);
          printf("u2.PK_f = %p\n\n", u2.PK_f);
          printf("u2.PK_d =  %p\n\n", u2.PK_d);
          printf("u2.PK_c = %p\n\n", u2.PK_c);

          printf("Myunion u2 = %p\n\n", &u2);

          return(0);

}
