#include <stdio.h>
void f(){
    int unsigned n = 0;
    int a = (~n) / 2;;
    printf("%d\n", a);


    int max = ~(0x1 << sizeof(int)*8-1);
    printf("int的最大值为%d\n", max);
}
int main(void){
    // 方式一：
    int a=1, max;
    while(1)
    {
        max = a;

        a <<= 1;
        a  |= 1;

        if(a < 0)
            break;
    }
    printf("int的最大值为%d\n", max);
}
