 #include <stdio.h>
 int max(int x, int y) // 该函数接收两个整型参数，并返回一个整型数据
{
    int z;
    z = x>y ? x : y;
    return z;
} 

int main(void)
{
    int a = 1;
    int b = 2;
    int m;
        
    m = max(a, b); // 调用函数 max()，将 a 和 b 作为实参传入，将返回值赋给 m
    printf("m = %d\n", m);
}