// 4、（结构体基本语法）
// 编写一个transform()函数，接口约定如下所示：
// void transform(double source[],
//                double target[],
//                int num,
//                double (*p)(double));
// 它接受4个参数：
// 1.double类型数据的源数组名
// 2.double类型的目标数组名
// 3.表示数组元素个数的int变量
// 4.函数指针p。
// transform()函数把指定的函数作用于源数组source中的每个元素，并将转换后的结果一一对应地放到目标数组target中。
// 要求：
// 使用数学库中的正弦函数和余弦函数，即 sin() 和 cos() 进行转换。
// 使用自定义的函数，进行转换。

#include <stdio.h>
#include <math.h>

void transform(double *source, double *target, int num, double (*p)(double)){
    for (int i = 0; i < num; i++)
    {
        target[i] = p(source[i]);
    }
}
      
double square(double x){
    return x* x;
}


int main(int argc, char const *argv[])
{
    double src[] = {0.0, 1.0, 2.0, 3.0};
    double dst[4];
    int n = 4;
    
    // 1. 用 sin 转换
    transform(src, dst, n, sin);
    printf("sin: ");
    for (int i = 0; i < n; i++) 
    printf("%.4f ", dst[i]);
    printf("\n");
    
    // 2. 用 cos 转换
    transform(src, dst, n, cos);
    printf("cos: ");
    for (int i = 0; i < n; i++) 
    printf("%.4f ", dst[i]);
    printf("\n");
    
    // 3. 用自定义函数 square 转换
    transform(src, dst, n, square);
    printf("square: ");
    for (int i = 0; i < n; i++) 
    printf("%.4f ", dst[i]);
    printf("\n");
    
    return 0;
}
