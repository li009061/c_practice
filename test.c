#include <stdio.h>

int main() {
    int n;
    printf("请输入 n (n <= 20)：");
    scanf("%d", &n);

    // int 版本
    int sum_int = 0;      // 总和
    int fact_int = 1;     // 当前阶乘，初始为 1! = 1

    // long long 版本
    long long sum_ll = 0;
    long long fact_ll = 1;

    for (int i = 1; i <= n; i++) {
        // 计算 i! = (i-1)! * i
        fact_int = fact_int * i;
        fact_ll = fact_ll * i;

        // 累加到总和
        sum_int = sum_int + fact_int;
        sum_ll = sum_ll + fact_ll;

        // 打印当前步的中间结果
        printf("i = %2d : int sum = %12d, long long sum = %20lld\n", 
               i, sum_int, sum_ll);
    }

    printf("\n=== 最终结果 ===\n");
    printf("int 结果     : %d\n", sum_int);
    printf("long long 结果: %lld\n", sum_ll);

    return 0;
}
