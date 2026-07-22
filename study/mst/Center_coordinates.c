// 已知平面上一个圆和圆上三个点的坐标，编程求这个圆的圆心坐标。

// 圆心（x ， y），点一（x1 . y1）,点二（x2 , x2）,点三（x3 , x3）
// 有（(x-x1)^2 + (y-y1)^2） = ((x - x2)^2 + (y - y2)^2)
// 有（(x-x1)^2 + (y-y1)^2） = ((x - x3)^2 + (y - y3)^2)
//

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    printf("请输入三个点的坐标（x1 y1 x2 y2 x3 y3）：");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    double A = 2 * (x2 - x1);
    double B = 2 * (y2 - y1);
    double C = x2*x2 + y2*y2 - x1*x1 - y1*y1;

    double D = 2 * (x3 - x1);
    double E = 2 * (y3 - y1);
    double F = x3*x3 + y3*y3 - x1*x1 - y1*y1;

    double det = A * E - B * D;

    if (fabs(det) < 1e-12) {
        printf("错误：三点共线，无法确定圆。\n");
        return 1;
    }

    double cx = (C * E - B * F) / det;
    double cy = (A * F - C * D) / det;

    printf("圆心坐标：(%.6f, %.6f)\n", cx, cy);
    return 0;
}
 
