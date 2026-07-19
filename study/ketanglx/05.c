#include <stdio.h>

void a(int num) {
    if (num < 2) {
        printf("%d 不是素数。\n", num);
        return;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d 不是素数。\n", num);
            return;   // 一旦确定不是素数，立即返回
        }
    }
    printf("%d 是素数。\n", num);   // 循环结束仍未找到因子
}

int main() {
    int n;
    printf("输入一个大于0正整数: ");
    scanf("%d", &n);
    a(n);
    return 0;
}