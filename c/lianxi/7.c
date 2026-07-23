#include <stdio.h>
// 以64位系统字长为例进行分析：
struct node
{
    char a;   // 尺寸=1，m值=1
    double b; // 尺寸=8，m值=8
    short c;  // 尺寸=2，m值=2
};

struct node n; // M值 = max{1, 8, 2} = 8

int main(int argc, char const *argv[])
{
    printf("%ld\n", sizeof(n)); // 1+7+8+2+6=24

    printf("&a:%p\n", &n.a);
    printf("&b:%p\n", &n.b);
    printf("&c:%p\n", &n.c);

    return 0;
}