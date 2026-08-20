#include <stdio.h>

#define PK_MY_PI_VERSION 0

#ifdef PK_MY_PI_VERSION
#if PK_MY_PI_VERSION <= 0
#define PK_MY_PI 3.14
#elif PK_MY_PI_VERSION == 1
#define PK_MY_PI 3.1415
#elif PK_MY_PI_VERSION == 2
#define PK_MY_PI 3.141592
#elif PK_MY_PI_VERSION == 3
#define PK_MY_PI 3.14159265
#elif PK_MY_PI_VERSION == 4
#define PK_MY_PI 3.1415926535
#elif PK_MY_PI_VERSION == 5
#define PK_MY_PI 3.141592653589
#else
#define PK_MY_PI 3.141592653589793
#endif
#endif

#ifndef PK_MY_PI_VERSION
#define PK_MY_PI 0.0
#endif

int main(void)
{
    printf("\n\n");
    printf("Hello World !!! \n");

    printf("\n\n");
    printf("PI Version Selected = %d\n", PK_MY_PI_VERSION);
    printf("PI Value = %.151f\n", PK_MY_PI);
    return(0);
}
