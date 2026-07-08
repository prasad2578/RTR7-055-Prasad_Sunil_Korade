#include<stdio.h>
#include<conio.h>

// asci value for 'A' to 'Z' => 65 to 90

#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// asci value for 'a' to 'z' => 97 to 122

#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCI VALUES FOR a TO z => 97 TO 122
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DEGIT_ENDING 57

int main(void)
{
          //variable declaration 
          char ch;
          int ch_value;

          //code 
          printf("\n\n");

          printf("Enter Character : ");
          ch = getch();

          printf("\n\n");

          if ((ch == 'A' || ch == 'a') || (ch == 'E' || ch == 'e') || (ch == 'I'|| ch == 'i') || (ch == 'O' || ch == 'o') || (ch == 'U' || ch == 'u'))

          {
                    printf("Character \'%c\' Entered by you Is A VOWEL CHARCATER From The English Alphabet !!!\n\n", ch);       
          }
          else 
          {
                    ch_value = (int)ch;
                    
                    //If the character has ascii value between 65 and 90 or between 97 and 122 it is still a letter of the alphabet but it is  a consonant and not a vowel 

                    if ((ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value>= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
                    {
                              printf("Charactr \'%c\' Entered By you Is A CONSONANT CHARACTER from the english alphabet !!!\n\n", ch);
                    }
                    else if (ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DEGIT_ENDING)
                    {
                              printf("CHaracter \'%c\' Enterd By You , IS a DIGIT CHARACTER !!!!\n\n", ch);

                    }
                    else 
                    {
                              printf("Character \'%c\' Entered by you, is a SPECIAL CHARCTER !!!\n\n", ch);


                    }
                    
          }
          return(0);
}
