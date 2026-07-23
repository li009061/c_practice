#include <stdio.h>
int main(){
    int ch;
    int space = 0 , zimu = 0 , zifu = 0;
    printf("请输入文本（按 Ctrl+D 结束）：\n");
    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            space++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            zimu++;
        }
        else
        {
            zifu++;
        }
    }   
    printf("\n统计结果：\n");
    printf("空格数：%d\n", space);
    printf("大小写字母数：%d\n", zimu);
    printf("其他字符数：%d\n", zifu);
    return 0;
}