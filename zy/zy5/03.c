// 编写一个函数myPower(x，N)，输入给底数x和幂指数N,计算输出x的N次方。其中x可以是任意浮点数，N是整数
// 例如：
// float ans1 = myPower(4, 2);     // 4的2次方
// float ans2 = myPower(3.14, -2); // 3.14的-2次方
// 要求用两个版本来实现 myPower：
// 1.采用循环的算法实现。
// 2.采用递归的算法实现。
#include <stdio.h>
float myPower_cycle(float x, int N){
    float a = x;
    for (int i = 1; i < N; i++)
    {
        x *= a;
    }
    
    return x;
}
float myPower1_recursion(float x, int N){
    if (N == 0)
    {
        return 1;
    }
    N--;
    return myPower1_recursion(x , N) * x;
}

int main(int argc, char const *argv[])
{
    float a;
    int b;
    printf("请输入底数x和幂指数N的值:\n");
    scanf("%f %d", &a, &b);
    float end = myPower_cycle(a, b);
    float end1 = myPower1_recursion(a, b);

    printf("x的N次幂为:%.4f\n", end);
    printf("x的N次幂为:%.4f\n", end1);
    return 0;
}
