// 不额外分配空间，实现字符串逆序，并且写一个测试例程
//!!!!不额外分配空间，可以用异或
#include <stdio.h>
#include <stdio.h>

void String_reverse(char *p) {
    int len = 0;
    while (p[len]) len++;   // p[len] != '\0' 的简写
    int left = 0, right = len - 1;
    while (left < right) {
        // 异或交换三步曲
        p[left]  ^= p[right];
        p[right] ^= p[left];
        p[left]  ^= p[right];
        left++;
        right--;
    }
}

int main() {
    // 测试用例1：奇数长度
    char s1[] = "abcdefg";
    printf("原字符串: %s\n", s1);
    String_reverse(s1);
    printf("逆序后:   %s\n\n", s1);
    
    // 测试用例2：偶数长度
    char s2[] = "hello";
    printf("原字符串: %s\n", s2);
    String_reverse(s2);
    printf("逆序后:   %s\n\n", s2);
    
    // 测试用例3：空字符串
    char s3[] = "";
    printf("原字符串: \"%s\"\n", s3);
    String_reverse(s3);
    printf("逆序后:   \"%s\"\n\n", s3);
    
    // 测试用例4：单个字符
    char s4[] = "x";
    printf("原字符串: %s\n", s4);
    String_reverse(s4);
    printf("逆序后:   %s\n\n", s4);
    
    // 测试用例5：再逆序一次（恢复原样）
    String_reverse(s1);
    printf("再逆序:   %s\n", s1);
    
    return 0;
}
