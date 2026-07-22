// 3、（函数传参、栈内存）
// 分析以下代码的输出结果并解释原因。
#include <stdio.h>

void  getString(char  **p)
{
    *p = "hello world";//---->这个就是p=&str 等价于 str= "hello world"
}

int main(void)
{
    char *str = NULL;
    getString(&str);
    printf("%s\n",  str); 
}



