#include <stdio.h>

int main(void)

{
     //variable decclaration 
     int PK_a, PK_b;
     int PK_p, PK_q;
     char PK_ch_result_01, PK_ch_result_02;
     int PK_i_result_01, PK_i_result_02;     
     //code 
     printf("\n\n");     
     PK_a = 4;
     PK_b = 5;
     PK_ch_result_01 = ( PK_a > PK_b) ? 'A' : 'B';
     PK_i_result_01 = (PK_a != PK_b) ? PK_a : PK_b;
     printf("Ternary Operator Answer 1 ----- %c and %d.\n\n", PK_ch_result_01, PK_i_result_01);     
     PK_p = 30;
     PK_q = 30;
     PK_ch_result_02 = (PK_p = PK_q) ? 'P' : 'Q';
     PK_i_result_02 = (PK_p != PK_q) ? PK_p : PK_q;
     printf("Ternary Operator Answer 2 ----- %c and %d.\n\n", PK_ch_result_02, PK_i_result_02);     
     printf("\n\n");
     return(0);
}
