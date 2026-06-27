#include<stdio.h>
int main(void)
{
    //code
    printf("\n\n");
    printf("*******************************************************************************************************************************************");
    printf("\n\n");

    printf("Hello world !!! \n\n");

    int p =25;
    printf("Integer Decimal Vaalue of 'p' =%d\n",p);
    printf("Integerr Octal value of 'p' =%o\n",p);
    printf("Integer hexadecimal vlue of 'p'(Hexadecimal Letter In Lower case =%x\n", p);
    printf("Integer hexadecimal vlue of 'p'(Hexadecimal Letter In Lower case =%x\n\n",p);
   
    char ch= 's';
    printf("Character ch=  %c\n", ch);
    char str[] = "AstroMediComp's Real Time Rendering Batch";
    printf("String str = %s\n\n", str);

    long num = 250738l; 
    printf("long Integer = %ld\n\n", num);

    unsigned int k=7;
    printf("Unsigned Integer 'k' = %u\n\n", k);

    float f_num = 25380.708f;
    printf("Floating Point Number with Just %%f 'f_num' = %f\n", f_num);
    printf("Floating Point Number with %%4.2f 'f_num' = %4.2f\n", f_num);
    printf("Floating Point Number with %%6.5f 'f_num' = %6.5f\n\n", f_num);

    double d_pi = 25.030303039865562;
    printf("Double Precision Floating Point Number Without Exponential =%g\n", d_pi);
    printf(" Double Precision Floating point Number With Exponential (Lower case )=%e\n", d_pi);
    printf("Double Precision Floating Point Number With Exponential (Upper case) =%E\n\n", d_pi);
    printf("Double Hexadecimal Value of 'd_pi' (Hexadecimal Letter In Lower case)= %a\n", d_pi);
    printf("Double Hexadecimal Value of 'd_pi' (Hexadecimal Letter In Upper Case ) =%A\n\n", d_pi);
     
    printf("********************************************************************");

    printf("\n\n");
    return(0);

}
