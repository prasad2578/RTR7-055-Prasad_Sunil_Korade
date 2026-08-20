#include <stdio.h> //'stdio.h' contains declaration of 'printf()'

int main(int argc, char *argv[], char *envp[])
{
    //function prototypes
    void display_information(void);
    void Function_Country(void);

    //code
    display_information(); 
    Function_Country(); 

    return(0);
}

//User-Defined Functions' Definitions...
void display_information(void) //function definition
{
    //function prototypes
    void Function_My(void);
    void Function_Name(void);
    void Function_Is(void);
    void Function_FirstName(void);
    void Function_MiddleName(void);
    void Function_Surname(void);
    void Function_OfAMC(void);

    //code
    Function_My();
    Function_Name();
    Function_Is();
    Function_FirstName();
    Function_MiddleName();
    Function_Surname();
    Function_OfAMC();
}

void Function_My(void) 
{
    //code
    printf("\n\n");
    printf("My");
}

void Function_Name(void) 
{
    //code
    printf("\n\n");
    printf("Name");
}

void Function_Is(void) 
{
    //code
    printf("\n\n");
    printf("Is");
}

void Function_FirstName(void) 
{
    //code
    printf("\n\n");
    printf("Prasad");
}

void Function_MiddleName(void) 
{
    //code
    printf("\n\n");
    printf("Sunil");
}

void Function_Surname(void) 
{
    //code
    printf("\n\n");
    printf("Korade");
}

void Function_OfAMC(void) 
{
    //code
    printf("\n\n");
    printf("Of ASTROMEDICOMP");
}

void Function_Country(void) 
{
    //code
    printf("\n\n");
    printf("I love India...");
    printf("\n\n");
}

