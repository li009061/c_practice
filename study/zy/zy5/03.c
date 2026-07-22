// 编写一个函数myPower(x，N)，输入给底数x和幂指数N,计算输出x的N次方。其中x可以是任意浮点数，N是整数
// 例如：
// float ans1 = myPower(4, 2);     // 4的2次方
// float ans2 = myPower(3.14, -2); // 3.14的-2次方
// 要求用两个版本来实现 myPower：
// 1.采用循环的算法实现。
// 2.采用递归的算法实现。
#include <stdio.h>
float myPower_cycle(float x, int N) {
    if (N == 0) return 1.0f;
    if (N > 0) {
        float result = 1.0f;
        for (int i = 0; i < N; i++) {
            result *= x;
        }
        return result;
    } else {
        int n = -N;
        float result = 1.0f;
        for (int i = 0; i < n; i++) {
            result *= x;
        }
        return 1.0f / result;
    }
}
float myPower_recursion(float x, int N) {
    if (N == 0) return 1.0f;          // 递归终止条件
    if (N > 0) {
        return x * myPower_recursion(x, N - 1);
    } else {
        // N < 0：递归计算正次方，再取倒数
        return 1.0f / myPower_recursion(x, -N);
    }
}
int main(int argc, char const *argv[])
{
    float a;
    int b;
    printf("请输入底数x和幂指数N的值:\n");
    while (1)
    {
        if ( scanf("%f %d", &a, &b) == 2 && getchar() == '\n')
        break;
        printf("请再次输入底数x和幂指数N的值:\n");
        while (getchar() != '\n');
    }
    
    float end = myPower_cycle(a, b);
    float end1 = myPower_recursion(a, b);

    printf("x的N次幂为:%.4f\n", end);
    printf("x的N次幂为:%.4f\n", end1);
    return 0;
}
