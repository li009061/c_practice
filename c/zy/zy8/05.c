// 5、（带参宏定义）
// 写一个带参数的宏 MIN(x, y)，使之可用于求解给定两个数的最小值。

#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int x = 200;
    int y = 300;
    printf("min : %d\n", MIN(x, y));
    return 0;
}