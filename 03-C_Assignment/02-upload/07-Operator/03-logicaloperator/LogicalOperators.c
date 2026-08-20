#include<stdio.h>

int main(void)
{
        //variable 
        int PK_a;
        int PK_b;
        int PK_c;
        int PK_result;

        //code
        printf("\n\n");
        printf("Enter First Integer : ");
        scanf("%d", &PK_a);

        printf("\n\n");
        printf("Enter Second Integer : ");
        scanf("%d", &PK_b);

        printf("\n\n");
        printf("Enter Third Integer : ");
        scanf("%d", &PK_c);

        printf("\n\n");
        printf(" If Answer = 0, It is 'FALSE'.\n");
        printf("If Answer =1 , It Is 'TRUE'.\n\n");

         
        PK_result = (PK_a <= PK_b) && (PK_b != PK_c);
        printf("LOGICAL AND (&&) : Answer is TRUE (1) If And Only If BOTH Conditions Are True. The Answer is FALSE (0), If Any One Or Both Conditions Are False.\n\n");
        printf("A = %d Is Less Than Or Equal To B = %d AND B = %d Is NOT Equal To C = %d \t Answer = %d\n\n", PK_a, PK_b, PK_b, PK_c, PK_result);

        PK_result = (PK_b >= PK_a) || (PK_a == PK_c);
        printf("LOGICAL OR (||) : Answer is FALSE (0) If And Only If BOTH Conditions Are False. The Answer is TRUE (1), If Any One Or Both Conditions Are True.\n");
        printf("Either B = %d Is Greater Than Or Equal To A = %d OR A = %d Is Equal To C = %d \t Answer = %d\n\n", PK_b, PK_a, PK_a, PK_c, PK_result);

        PK_result = !PK_a;
        printf("A = %d And Using Logical NOT (!) Operator on A Gives Result = %d\n\n", PK_a, PK_result);

        PK_result = !PK_b;
        printf("B = %d And Using Logical NOT (!) Operator on B Gives Result = %d\n\n", PK_b, PK_result);

        PK_result = !PK_c;
        printf("C = %d And Using Logical NOT (!) Operator on C Gives Result = %d\n\n", PK_c, PK_result);

        PK_result = !(PK_a <= PK_b) && !(PK_b != PK_c);
        printf("Using Logical NOT (!) On (PK_a <= PK_b) And Also On (PK_b != PK_c) And then AND-ing Them Afterwards Gives Result = %d\n", PK_result);

        printf("\n\n");

        PK_result = !(PK_b >= PK_a) || (PK_a == PK_c);
        printf("Using Logical NOT (!) On Entire Logical Expression (PK_b >= PK_a) || (PK_a == PK_c) Gives Result = %d\n", PK_result);

        printf("\n\n");

        return(0);
}
