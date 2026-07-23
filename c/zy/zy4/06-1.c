#include <stdio.h>
#include <string.h>

void strip(char s[]) {
    int seen[256] = {0};   // 标记 ASCII 是否出现过
    int write = 0;         // 写指针
    for (int read = 0; s[read] != '\0'; read++) {
        unsigned char c = (unsigned char)s[read];
        if (!seen[c]) {
            seen[c] = 1;
            s[write++] = s[read];
        }
    }
    s[write] = '\0';
}

int main() {
    char s[100];
    printf("请输入字符串：");
    fgets(s, sizeof(s), stdin);
    // 去掉末尾换行符
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';

    strip(s);
    printf("去重后：%s\n", s);
    return 0;
}