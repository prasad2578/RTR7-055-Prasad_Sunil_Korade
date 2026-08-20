#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
//function prototype
{
          
          int MyStrlen(char[]);
          //variable declaraions
          
          char PK_strArray [10][15] = { "Hello!", "Welcome", "To", "Real", "Time","Rendering", "Batch", "(2026-27)", "Of", "ASTROMEDICOMP." }; 
          
          int PK_iStrLengths [10]; 
          
          int PK_strArray_size;
          int PK_strArray_num_rows;
          
          int PK_i, PK_j;
          //code
          PK_strArray_size = sizeof(PK_strArray);
          PK_strArray_num_rows = PK_strArray_size / sizeof(PK_strArray[0]);
         
          for (PK_i = 0; PK_i < PK_strArray_num_rows; PK_i++)
              PK_iStrLengths[PK_i] = MyStrlen(PK_strArray[PK_i]);
          
              printf("\n\n");
              printf("The Entire String Array : \n\n");
              
          for (PK_i = 0; PK_i < PK_strArray_num_rows; PK_i++)
              printf("%s ", PK_strArray[PK_i]);
              printf("\n\n");
              printf("Strings In The 2D Array : \n\n");
              
          
          for (PK_i = 0; PK_i < PK_strArray_num_rows; PK_i++)
          {
                    
              printf("String Number %d => %s\n\n", (PK_i + 1), PK_strArray[PK_i]);
              for (PK_j = 0; PK_j < PK_iStrLengths[PK_i]; PK_j++)
              {
                  printf("Character %d = %c\n", (PK_j + 1), PK_strArray[PK_i][PK_j]);
              }
              printf("\n\n");
          }

return(0);
}

int MyStrlen(char str[])
{
     int PK_j;
     int PK_string_length = 0;
     
     for (PK_j = 0; PK_j < MAX_STRING_LENGTH; PK_j++)
     {
         if (str[PK_j] == '\0')
             break;
         else
             PK_string_length++;
     }
     return(PK_string_length);
}

