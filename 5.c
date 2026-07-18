#include <stdio.h>
int main(){
    printf("请输入两个整数:\n");
    int a, b;
    int n = scanf("%d%d", &a, &b);
    while (n != 2){
        char s[50];
        fgets(s, 50, stdin);
        printf("输入不对请重新输入:\n");
        n = scanf("%d%d", &a, &b);
    }
    printf("a=%d, b=%d",  a, b);
    return 0;
}
