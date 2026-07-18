#include <stdio.h>
int main(){
    double a;
    char b;
    printf("请输入一个整数和一个数:\n");
    while (1)
    {
        int n = scanf("%lf%c", &a, &b);
        if (n != 2)
        {
            printf("温馨提示：请重新输入一个整数和一个小数：\n");
            while (getchar() != '\n')  {}
        }
        else if (n == 2)
        {
            printf("完成任务！");
            break;
        }
    }
    return 0;
}