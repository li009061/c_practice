// 2、（函数定义与调用）
// 编写一个函数，使其返回3个整型参数中的最大值。
#include <stdio.h>
int MAx(int z, int x, int c){
    int max;
    if (z >= x)
    {
        max = (z > c) ? z : c;    // {return (z > x) ? ((z > c) ? z : c) : ((x > c) ? x : c);}
    }else if (z <= x)
    { 
        max = (x > c) ? x : c;
    }
    
    return max;
    
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("请输入3个数：\n");
    scanf("%d %d %d",&a ,&b ,&c);
    int max = MAx(a, b, c);
    printf("最大值为:%d\n", max);
    return 0;
}
