//给定一个字符串，找出不含有重复字符的最长子串长度，比如 abcabb 最长为 abc，长度是 3
#include <stdio.h>

int lengthOfLongestSubstring(char *s) {
    // 记录字符上次出现的位置，假设 ASCII 字符集
    int last_pos[128] = {0};  // 初始化为0，表示未出现
    int max_len = 0;
    int left = 0;  // 窗口左边界（从1开始计数，方便处理）
    for (int right = 0; s[right] != '\0'; right++) {
        char c = s[right];
        // 如果字符在窗口内已存在，移动左边界
        if (last_pos[c] > left) {
            left = last_pos[c];
        }
        // 更新当前字符的最新位置（right+1，因为初始是0）
        last_pos[c] = right + 1;
        // 计算当前窗口长度，更新最大值
        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}

int main() {
    char s1[] = "abcabbabcd";
    printf("%s: %d\n", s1, lengthOfLongestSubstring1(s1));  // 4 ("babc" 或 "abcd")
    
    char s2[] = "abcabcbb";
    printf("%s: %d\n", s2, lengthOfLongestSubstring1(s2));  // 3 ("abc")
    
    char s3[] = "bbbbb";
    printf("%s: %d\n", s3, lengthOfLongestSubstring1(s3));  // 1 ("b")
    
    char s4[] = "pwwkew";
    printf("%s: %d\n", s4, lengthOfLongestSubstring1(s4));  // 3 ("wke")
    
    return 0;
}