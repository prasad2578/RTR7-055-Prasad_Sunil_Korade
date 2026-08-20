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
          struct MyStruct s;
          union MyUnion u;

          printf("\n\n");
          printf("Member of struct are : \n\n");

          s.PK_i = 9;
          s.PK_f = 2.5f;
          s.PK_d = 25.03888;
          s.PK_c = 'P';

          printf("s.PK_i = %PK_d\n\n", s.PK_i);
          printf("s.PK_f = %PK_f\n\n", s.PK_f);
          printf("s.PK_d = %lf\n\n", s.PK_d);
          printf("s.PK_c = %c\n\n", s.PK_c);

          printf("Addresses of member of struct are : \n\n");
          printf("s.PK_i =%d\n\n", s.PK_i);
          printf("s.PK_f =%lf\n\n", s.PK_f);
          printf("s.PK_d = %lf\n\n", s.PK_d);
          printf("s.PK_c =%d\n\n", s.PK_c);

          printf("MyStruct s = %p\n\n", &s);

          printf("\n\n");
          printf("Members of union are : \n\n");

          u.PK_i = 3;
          printf("u.PK_i = %d\n\n", u.PK_i);

          u.PK_f = 2.5f;
          printf("u.PK_f = %f\n\n", u.PK_f);

          u.PK_d = 5.251544;
          printf("u.PK_d = %lf\n\n", u.PK_d);

          u.PK_c = 'S';
          printf("u.PK_c = %c\n\n" , u.PK_c);

          printf("Address of member of union are : \n\n");

          printf("u.PK_i =%p\n\n", &u.PK_i);
          printf("u.PK_f =%p\n\n", &u.PK_f);
          printf("u.PK_d = %p\n\n",&u.PK_d);
          printf("u.PK_c =%p\n\n", &u.PK_c);

          printf("Myunion u = %p\n\n", &u);

          return(0);

}