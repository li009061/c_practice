#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();           // 将本进程分裂为两个进程
    printf("abcd\n"); // 该语句将被两个进程执行，打印两遍
    return 0;
}
