#include <stdio.h>
int main(){
    int n;
    int sum;
    printf("请输入一个整数：");
    scanf("%d", &n);
    sum = (n + 1)*n /2;
    printf("总和为：%d\n", sum);
}


#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    for(int a = 1; a <= n;a++){
        sum += a;
    }
    printf("总和为：%d\n", sum);
    return 0;
}

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    int i = 1;
    // 一次循环加 4 个数
    for ( ; i + 3 <= n; i += 4) {
        sum += i + (i + 1) + (i + 2) + (i + 3);
    }
    // 处理剩余不足 4 个的尾巴
    for ( ; i <= n; i++) {
        sum += i;
    }
    printf("总和为：%d\n", sum);
    return 0;
}