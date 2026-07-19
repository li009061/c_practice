//编写一个函数，接收三个类型相同的整型数组 a、b 和 c，将 a 和 b 的各个元素的值相加，存放到数组 c 中
#include <stdio.h>
int main(){
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[4];
    for (int i = 0; i < 4; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("数组 c：");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}