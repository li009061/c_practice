#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // 使用 memset，包含此头文件

void a(int *p){
    for (int i = 0; i < 25; i++)
    {
        printf("%d", p[i]);
    }
    
}

int main(void) {
    // 第一部分：int 动态内存操作
    int *p = malloc(sizeof(int));
    bzero(p, sizeof(int));
    *p = 5;
    printf("%d\n", *p);
    *p = 10;
    printf("%d\n", *p);
    free(p);

    // 第二部分：double 数组操作
    double *k = malloc(sizeof(double) * 3);
    k[0] = 0.168;
    k[1] = 2.467;
    k[2] = 3.789;
    printf("%f %f %f\n", k[0], k[1], k[2]);
    free(k);

    int *q = calloc(25 , sizeof(int));
    for (int i = 0; i < 25; i++)
    {
        q[i] = i + 1;
    }
    a(q);
    printf("\n");
    free(q);

    return 0;
}