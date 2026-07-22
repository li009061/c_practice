// 5、（递归函数）
// 编写一个程序，用户输入整数 N，程序输出第 N 项斐波那契数。
//从第3项开始，每一项都等于前两项之和。
// 它的标准定义如下（通常以 F(1)=1, F(2)=1 或 F(0)=0, F(1)=1 开头）：
// F(0) = 0    F(1) = 1    F(n) = F(n-1) + F(n-2) （当 n ≥ 2）
// 因此，数列的前几项是：0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
#include <stdio.h>
 
int Fibonacci(int a){
    switch (a)
    {
    case 1:
        return 1;
    case 2:
        return 1;
    }
    return Fibonacci(a-1) + Fibonacci(a-2);
}

int main(int argc, char const *argv[])
{
    int N , M;
    printf("请输入一个正整数:\n");
    scanf("%d", &N);
    M = Fibonacci(N);
    printf("第%d项斐波那契数: %d", N, M);
    printf("\n");
    return 0;
}
