#include<stdio.h>
int main(void)
{
    //code
    printf("\n\n");
    printf("*******************************************************************************************************************************************");
    printf("\n\n");

    printf("Hello world !!! \n\n");

    int PK_p =25;
    printf("Integer Decimal Vaalue of 'PK_p' =%d\n",PK_p);
    printf("Integerr Octal value of 'PK_p' =%o\n",PK_p);
    printf("Integer hexadecimal vlue of 'PK_p'(Hexadecimal Letter In Lower case =%x\n", PK_p);
    printf("Integer hexadecimal vlue of 'PK_p'(Hexadecimal Letter In Lower case =%x\n\n",PK_p);
   
    char PK_ch= 's';
    printf("Character PK_ch=  %c\n", PK_ch);
    char str[] = "AstroMediComp's Real Time Rendering Batch";
    printf("String str = %s\n\n", str);

    long PK_num = 250738l; 
    printf("long Integer = %ld\n\n", PK_num);

    unsigned int PK_k=7;
    printf("Unsigned Integer 'PK_k' = %u\n\n", PK_k);

    float PK_f_num = 25380.708f;
    printf("Floating Point Number with Just %%f 'PK_f_num' = %f\n", PK_f_num);
    printf("Floating Point Number with %%4.2f 'PK_f_num' = %4.2f\n", PK_f_num);
    printf("Floating Point Number with %%6.5f 'PK_f_num' = %6.5f\n\n", PK_f_num);

    double PK_d_pi = 25.030303039865562;
    printf("Double Precision Floating Point Number Without Exponential =%g\n", PK_d_pi);
    printf(" Double Precision Floating point Number With Exponential (Lower case )=%e\n", PK_d_pi);
    printf("Double Precision Floating Point Number With Exponential (Upper case) =%E\n\n", PK_d_pi);
    printf("Double Hexadecimal Value of 'PK_d_pi' (Hexadecimal Letter In Lower case)= %a\n", PK_d_pi);
    printf("Double Hexadecimal Value of 'PK_d_pi' (Hexadecimal Letter In Upper Case ) =%A\n\n", PK_d_pi);
     
    printf("********************************************************************");

    printf("\n\n");
    return(0);

}
