#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
          //function prototypes
          void Function_Country();

          //code 
          Function_Country();
          return(0);

}
void Function_Country(void)
{
          //function declaration 
          void Function_OfAMC(void);

          //code
          Function_OfAMC();

          printf("\n\n");

          printf("I live in INDIA ");

          printf("\n\n");

}
void Function_OfAMC(void)//funnction definition 
{
          //function declaration 
          void Function_Surname(void);

          //code
          Function_Surname();

          printf("\n\n");

          printf("Of ASTROMEDICOMP");
}
void Function_Surname(void)
{
          //function declaration 
          void Function_MiddleName(void);

          //code
          Function_MiddleName();

          printf("\n\n");
          printf("Korade");
}

void Function_MiddleName(void) //function definition
{
          // function_declarations
          void Function_FirstName(void);
      
          // code
          Function_FirstName();
          printf("\n\n");
          printf("Sunil");
}

void Function_FirstName(void) //function definition
{
         // function_declarations
         void Function_Is(void);
     
         // code
         Function_Is();
         printf("\n\n");
         printf("Prasad");
}

void Function_Is(void) //function definition
{
         // function_declarations
         void Function_Name(void);
     
         //code
         Function_Name();
         printf("\n\n");
         printf("Is");
}

void Function_Name(void) //function definition
{
        // function_declarations
        void Function_My(void);
    
        //code
        Function_My();

        printf("\n\n");

        printf("Name");
}

void Function_My(void)
{
          //code 
          printf("\n\n");

          printf("My");

}



