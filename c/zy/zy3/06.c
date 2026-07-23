#include <stdio.h>

int main() {
    int ch;
    printf("请输入一个十进制非负整数：");
    scanf("%d", &ch);

    if (ch == 0) {
        printf("十六进制:0\n");
        return 0;
    }

    char hex[20];
    int m = 0;

    while (ch > 0) {
        int n = ch % 16;
        if (n < 10) {
            hex[m] = '0' + n;
        } else {
            hex[m] = 'A' + n - 10;
        }
        m++;
        ch /= 16;
    }

    printf("十六进制:0#");
    for (int i = m - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");

    return 0;
}