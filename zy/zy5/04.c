// 4、（函数、字符串处理）
//编写一个程序，将两个给定的字符串连接起来，要求不能用 strcat 或 strncat 函数。
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a[100], b[100];
    char s[200] = {0};
    int x = 0;
    int i;
    printf("请输入两个字符串：");
    scanf("%s %s", a, b);
    for (i = 0; i < sizeof(a) + sizeof(b); i++)
    {
        if (a[i] == '\0')
        {
            for (i; i < sizeof(b) + sizeof(a); i++)
            {
                s[i] = b[x];
                x++;
                if (b[x] == '\0')
                {
                    break;
                }
            }
        if (b[x] == '\0')
        {
            break;
        }
        }
        s[i] = a[i];
    }
    printf("%s\n", s);
    return 0;
}
