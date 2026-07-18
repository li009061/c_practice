#include <stdio.h>

int main(){
    char c1 = 20;
    char c2 = c1 + 'a'; // 等价于 char c2 = 20 + 97;

    printf("%c\n", c2); // 以字符形式输出117，即 'u'
    printf("%d\n", c2); // 以整型形式输出117

    return 0;
}