#include <stdio.h>

typedef int PK_MY_INT;
typedef float PK_PVG_FLOAT;
typedef char PK_CHARACTER;
typedef double PK_MY_DOUBLE;
typedef unsigned int PK_UINT;
typedef PK_UINT PK_HANDLE;
typedef PK_HANDLE PK_HWND;
typedef PK_HANDLE PK_HINSTANCE;

int main(void)
{
    PK_MY_INT PK_Add(PK_MY_INT, PK_MY_INT);

    PK_MY_INT PK_a = 10, PK_i;
    PK_MY_INT PK_iArray[] = { 9, 18, 27, 36, 45, 54, 63, 72, 81, 90 };
    PK_PVG_FLOAT PK_f_pvg = 30.9f;
    const PK_PVG_FLOAT PK_f_pvg_pi = 3.14f;

    PK_CHARACTER PK_ch = '*';
    PK_CHARACTER PK_chArray_01[] = "Hello";
    PK_CHARACTER PK_chArray_02[][10] = { "RTR", "Batch", "2026-2027" };
    PK_MY_DOUBLE PK_d = 8.01547;

    PK_UINT PK_uint = 345;
    PK_HANDLE PK_handle = 9587;
    PK_HWND PK_hwnd = 9876;
    PK_HINSTANCE PK_hInstance = 14456;

    printf("\n\n");
    printf("Type PK_MY_INT variable PK_a = %d\n", PK_a);

    printf("\n\n");
    for (PK_i = 0; PK_i < (sizeof(PK_iArray) / sizeof(int)); PK_i++)
    {
        printf("Type PK_MY_INT array variable PK_iArray[%d] = %d\n", PK_i, PK_iArray[PK_i]);
    }

    printf("\n\n");
    printf("Type PK_PVG_FLOAT variable PK_f_pvg = %f\n", PK_f_pvg);
    printf("Type PK_PVG_FLOAT constant PK_f_pvg_pi = %f\n", PK_f_pvg_pi);
    printf("\n\n");
    printf("Type PK_MY_DOUBLE variable PK_d = %lf\n", PK_d);

    printf("\n\n");
    printf("Type PK_CHARACTER variable PK_ch = %c\n", PK_ch);
    printf("\n\n");
    printf("Type PK_CHARACTER array variable PK_chArray_01 = %s\n", PK_chArray_01);
    printf("\n\n");
    for (PK_i = 0; PK_i < (sizeof(PK_chArray_02) / sizeof(PK_chArray_02[0])); PK_i++)
    {
        printf("%s\t", PK_chArray_02[PK_i]);
    }

    printf("\n\n");
    printf("Type PK_UINT variable PK_uint = %u\n\n", PK_uint);
    printf("Type PK_HANDLE variable PK_handle = %u\n\n", PK_handle);
    printf("Type PK_HWND variable PK_hwnd = %u\n\n", PK_hwnd);
    printf("Type PK_HINSTANCE variable PK_hInstance = %u\n\n", PK_hInstance);

    PK_MY_INT PK_x = 90;
    PK_MY_INT PK_y = 30;
    PK_MY_INT PK_ret;
    PK_ret = PK_Add(PK_x, PK_y);
    printf("PK_ret = %d\n\n", PK_ret);

    return(0);
}

PK_MY_INT PK_Add(PK_MY_INT PK_a, PK_MY_INT PK_b)
{
    PK_MY_INT PK_c;
    PK_c = PK_a + PK_b;
    return(PK_c);
}
