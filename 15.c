#include <stdio.h>
int main(int argc, char const *argv[])
{

    printf("%d\n", strcmp("abc", "abc")); // 输出0，两个字符串相等
    printf("%d\n", strcmp("abc", "aBc")); // 输出1，"abc" 大于 "aBc"
    printf("%d\n", strcmp("999", "aaa")); // 输出-1，"999" 小于 "aaa"}
    printf("%s\n", "abc"); 
    return 0;
}
