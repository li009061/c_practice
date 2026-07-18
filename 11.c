#include <stdio.h>
int main() {
    // int a = 100;
    // printf("整型变量 a 的地址是: %p\n", &a);

    // char c = 'x';
    // printf("字符变量 c 的地址是: %p\n", &c);

    // double f = 3.14;
    // printf("浮点变量 f 的地址是: %p\n", &f);
    int    *p1; // 用于存储 int  型数据的地址，p1 被称为 int  型指针，或称整型指针
    char   *p2; // 用于存储 char 型数据的地址，p2 被称为 char 型指针，或称字符指针
    double *p3; // 用于存储double型数据的地址，p3 被称为 double 型指针
    int a = 100;
    p1 = &a; // 将一个整型地址，赋值给整型指针p1

    char c = 'x';
    p2 = &c; // 将一个字符地址，赋值给字符指针p2

    double f = 3.14;
    p3 = &f; // 将一个浮点地址，赋值给浮点指针p3
    
    *p1 = 200; // 将 p1 指向的目标（即a）修改为200，等价于 a = 200;
    *p2 = 'y'; // 将 p2 指向的目标（即c）修改为'y'，等价于 c = 'y';
    *p3 = 6.6; // 将 p3 指向的目标（即f）修改为6.6，等价于 f = 6.6;
    return 0;
}