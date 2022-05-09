#include <stdio.h>
#include <stdlib.h>
#include "rd3.h"

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;

    int result = rd3_func(a, b);
    printf("result = %d \n", result);
    return 0;
}
