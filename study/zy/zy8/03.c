// 3、（地址对齐、结构体大小）
// 定义一个结构体来存储日期（含年、月、日）。并设计一个函数，计算传入的结构体存储的日期是一年中的第几天。

#include <stdio.h>

struct Storage_date
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
    
};

int is_leap_year(int year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }else
    return 0;
}

int which_day(int a, int b, int c){
    int days = 0;
    int s[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (is_leap_year(a))
    {
        s[2] = 29;
    }
    for (int i = 0; i < b; i++)
    {
        days += s[i];
    }
    days += c;
    return days;
}

 int main(int argc, char const *argv[])
 {
    struct Storage_date today;
    while (1) {
        printf("请输入日期（年 月 日）：");
        scanf("%d %d %d", &today.year, &today.month, &today.day);
        // 清空输入缓冲区（防止非法输入导致死循环）
        while (getchar() != '\n');
        // 基础范围校验
        if (today.year < 0 || today.month < 1 || today.month > 12 || 
            today.day < 1 || today.day > 31) {
            printf("输入了不存在的日期，请重新输入！\n");
            continue;
        }
        // 精确校验：结合月份和闰年
        int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        // 闰年判断
        int is_leap = (today.year % 4 == 0 && today.year % 100 != 0) || 
                    (today.year % 400 == 0);
        if (is_leap) {
            days_in_month[2] = 29;
        }
        if (today.day > days_in_month[today.month]) {
            printf("该月没有这一天，请重新输入！\n");
            continue;
        }  
        break;  // 校验通过，退出循环
    }
    is_leap_year(today.year);
    int todays = which_day(today.year, today.month, today.day);
    printf("这个日期是%d中的%d天。\n", today.year, todays);
    return 0;
 }
 