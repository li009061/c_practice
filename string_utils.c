#include <stdio.h>
#include <string.h>
#include "string_utils.h"

char* str_concat(char *dest, const char *src){
    char *p = dest;
    while (*p != '\0')
    {
        p++;
    }
    while (*src != '\0')
    {
        *p = *src;
        p++;
        src++;
    }
    *p = '\0';

    return dest;
}

// 去除字符串中所有空格
char* str_remove_spaces(char *str){
    char *p = str;
    char *q = str;

    while (*p != '\0')
    {
        if (*p != ' ')
        {
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';

    return str;
}

// 去除字符串中重复字符
char* str_remove_duplicates(char *str) {
    if (str == NULL) 
    return NULL;
    int len = strlen(str);
    if (len <= 1) 
    return str;
    int write = 1;
    for (int read = 1; read < len; read++) {
        int is_dup = 0;
        for (int check = 0; check < write; check++) {
            if (str[read] == str[check]) {
                is_dup = 1;
                break;
            }
        }
        if (!is_dup) {
            str[write] = str[read];
            write++;
        }
    }
    str[write] = '\0';
    return str;
}

char* str_remove_duplicates_other(char *str) {
    if (str == NULL) return NULL;

    int seen[256] = {0};
    int write = 0;

    for (int read = 0; str[read] != '\0'; read++) {
        unsigned char c = (unsigned char)str[read];
        if (!seen[c]) {
            seen[c] = 1;
            str[write++] = str[read];
        }
    }
    str[write] = '\0';
    return str;
}

// 计算字符串长度
int str_length(const char *s){
    const char *p = s;
    while (*p != '\0')
    {
        p++;
    }
return p - s;
}

//三点求圆心
int get_circle_center(double x1, double y1, double x2, double y2, double x3, double y3,
                      double *cx, double *cy) {
    double A = 2 * (x2 - x1);
    double B = 2 * (y2 - y1);
    double C = x2 * x2 + y2 * y2 - x1 * x1 - y1 * y1;

    double D = 2 * (x3 - x1);
    double E = 2 * (y3 - y1);
    double F = x3 * x3 + y3 * y3 - x1 * x1 - y1 * y1;

    double det = A * E - B * D;

    if (fabs(det) < 1e-12) {
        return 0;   // 三点共线，无解
    }

    *cx = (C * E - B * F) / det;
    *cy = (A * F - C * D) / det;
    return 1;
}