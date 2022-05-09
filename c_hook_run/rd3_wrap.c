#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

#include "rd3.h"

// 与目标函数签名一致的函数类型
typedef int (*pFunc)(int, int);

int rd3_func(int a, int b)
{
    printf("before call rd3_func. do something... \n");
    //打开动态链接库
    void *handle = dlopen("./lib/librd3.so", RTLD_NOW);
    // 查找库中的目标函数
    pFunc pf = dlsym(handle, "rd3_func");
    // 调用目标函数
    int c = pf(a, b);
    // 关闭动态库句柄
    dlclose(handle);
    return c;
}
