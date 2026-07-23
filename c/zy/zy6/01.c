#include <stdio.h>

// 1. 全局变量（未初始化） → BSS 段
int global_uninit;

// 2. 全局变量（已初始化） → Data 段
int global_init = 100;

// 3. 静态全局变量（已初始化） → Data 段（仅本文件可见）
static int static_global = 200;

// 4. 字符串常量 → .rodata 段
char *str = "hello world";

int main() {
    // 5. 局部变量（auto） → 栈区
    int local_auto = 0;

    // 6. 静态局部变量（已初始化） → Data 段（但作用域仅在 main 内）
    static int local_static = 300;

    // 7. 堆区动态分配 → 堆区
    int *p = (int*)malloc(sizeof(int) * 10);

    printf("全局已初始化: %d\n", global_init);
    free(p);
    return 0;
}