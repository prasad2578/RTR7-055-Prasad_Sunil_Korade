#include <stdio.h>

#define INT_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENT 3
#define CHAR_ARRAY_NUM_ELEMENT 15

int main(void)
{
          //variable declaration 
          int PK_iArray[INT_ARRAY_NUM_ELEMENTS];
          float PK_fArray[FLOAT_ARRAY_NUM_ELEMENT];
          char PK_cArray[CHAR_ARRAY_NUM_ELEMENT];
          int PK_i, PK_num;

          //code

          printf("\n\n");
          printf("Enter Element For Integer Array : \n");
          for (PK_i = 0; PK_i < INT_ARRAY_NUM_ELEMENTS; PK_i++)
          scanf("%d", &PK_iArray[PK_i]);

          printf("\n\n");
          printf("Enter Element For 'Floating-Point' Array :  \n");
          for (PK_i = 0; PK_i < FLOAT_ARRAY_NUM_ELEMENT; PK_i++)
          scanf("%f", &PK_fArray[PK_i]);

          printf("\n\n");
          printf("Enter Element For 'Character' Array : \n");
          for (PK_i = 0; PK_i < CHAR_ARRAY_NUM_ELEMENT; PK_i++)
          {
                    PK_cArray[PK_i] = getch();
                    printf("%c\n", PK_cArray[PK_i]);
          }

          printf("\n\n");
          printf("Integer Array Entered By You : \n\n");
          for (PK_i = 0; PK_i < INT_ARRAY_NUM_ELEMENTS; PK_i++)
          printf("%d\n", PK_iArray[PK_i]);

          printf("\n\n");
          printf("Floating Array Entered By You : \n\n");
          for (PK_i = 0; PK_i < FLOAT_ARRAY_NUM_ELEMENT; PK_i++)
          printf("%f\n", PK_fArray[PK_i]);

          printf("\n\n");

          printf("Character Array Entered By You : \n\n");
          for (PK_i =0 ; PK_i < CHAR_ARRAY_NUM_ELEMENT; PK_i++)
          printf("%c\n", PK_cArray[PK_i]);

          return(0);
}
