#include <stdio.h>

int main() {
    int a = 10;
    double b = 3.14;
    char str[] = "Hello"; // 字符串数组

    printf("int 大小: %zu\n", sizeof(int));
    printf("变量 a 大小: %zu\n", sizeof(a));
    printf("double 大小: %zu\n", sizeof(double));
    printf("str 数组总字节数: %zu\n", sizeof(str));
    printf("str 数组元素个数: %zu\n", sizeof(str) / sizeof(str[0]));
    return 0;
}