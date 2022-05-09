#include <stdio.h>
#include <stdlib.h>
#include "lib/rd3.h"

extern int rd3_func(int, int);

int wrap_rd3_func(int a, int b)
{
    printf("before call rd3_func. do something... \n");
    return rd3_func(a, b);
}
