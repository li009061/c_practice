// 12、给定一个字符串，去重
#include <stdio.h>


void string_Remove_duplicates(char *p){
    char s[256] = {0};
    char a[256];
    int j = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {
        if (s[p[i]] == 0)
        {
            a[j] = p[i];
            j++;
            s[p[i]] = 1;
        }
    }
    a[j] = '\0';
    printf("%s\n", a);
    printf("%d", j);
}

int main(int argc, char const *argv[])
{
    char s[] = {"abbchfceecdef"};
    string_Remove_duplicates(s);
    printf("\n");
    return 0;
}
