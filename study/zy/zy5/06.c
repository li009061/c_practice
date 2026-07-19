// 6、（函数、字符串处理）
// 编写一个函数，接收一个给定的字符串，返回去除所有的空格后的字符串。
#include <stdio.h>
#include <string.h>

char* removeSpaces(char* str) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    return str;
}

int main() {
    char str[100];
    printf("请输入一个字符串:\n");
    fgets(str, sizeof(str), stdin);
    printf("去除空格后的字符串: %s", removeSpaces(str));
    return 0;
}