#include <stdio.h>
int main(){
    int n;
    int m;
    int a;
    printf("请输入一个天数：");
    scanf("%d", &n);
    m = n%7;
    a = n/7;
        printf("%d个星期零%d天\n", a, m);
        return 0;
    }   