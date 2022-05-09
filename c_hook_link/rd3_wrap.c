#include <stdio.h>
#include <stdlib.h>

#include "rd3_wrap.h"

extern int __real_rd3_func(int, int);

int __wrap_rd3_func(int a, int b)
{
    printf("before call rd3_func. do something... \n");
    return __real_rd3_func(a, b);
}
