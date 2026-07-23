#include <stdio.h>
int main(){
    int ch;

    while (1)
    {
        int n;
        printf("请输入任意一个值：\n");
        n = scanf("%d", &ch);
        if (n == 1 && getchar() == '\n')
        {
            if ((ch >= 65 && ch <=90) || (ch >=97 && ch <= 122))
            {
                printf("字母：%c\n");
                break;
            }
            else{
                printf("请重新输入一个值：");
            }
        }
        else if (n == 0)
        {
            ch = getchar();
            int count = 1;
            int a = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
            int c;
            while ((c = getchar()) != '\n' && c != EOF) 
            {
                count++;
                if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
                    a = 0;
                }
            }
            if (count == 1 && a) {
                printf("ASCII码: %d\n", ch);
                break;
            } else {
                printf("只能输入单个字母或有效ASCII数字，请重新输入。\n");
            }
        } 
        else 
        {
            printf("输入格式错误，只能输入纯数字或单个字母\n");
            while (getchar() != '\n');
        }
    }
    return 0;
}