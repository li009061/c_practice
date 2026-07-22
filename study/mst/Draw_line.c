// 已实现画点函数：void DrawPixel(int x, int y, int pixColor);
// 编程实现画线函数：void DrawLine(int x1, int y1, int x2, int y2, int pixColor);
#include <stdlib.h>   // 用于 abs()

// 已存在画点函数（由外部提供）
void DrawPixel(int x, int y, int pixColor);

/**
 * 画线函数：使用 Bresenham 算法在两点间绘制直线段
 * @param x1,y1    起点坐标
 * @param x2,y2    终点坐标
 * @param pixColor 像素颜色值
 */
void DrawLine(int x1, int y1, int x2, int y2, int pixColor) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    // 步进方向（-1 或 1）
    int stepX = (dx > 0) ? 1 : -1;
    int stepY = (dy > 0) ? 1 : -1;

    dx = abs(dx);
    dy = abs(dy);

    // 情况一：x 方向变化大于等于 y 方向（斜率 |m| ≤ 1）
    if (dx >= dy) {
        int e = 2 * dy - dx;      // 初始误差项
        int y = y1;
        for (int x = x1; x != x2 + stepX; x += stepX) {
            DrawPixel(x, y, pixColor);
            if (e >= 0) {
                y += stepY;       // y 方向步进
                e -= 2 * dx;
            }
            e += 2 * dy;
        }
    }
    // 情况二：y 方向变化大于 x 方向（斜率 |m| > 1）
    else {
        int e = 2 * dx - dy;
        int x = x1;
        for (int y = y1; y != y2 + stepY; y += stepY) {
            DrawPixel(x, y, pixColor);
            if (e >= 0) {
                x += stepX;       // x 方向步进
                e -= 2 * dy;
            }
            e += 2 * dx;
        }
    }
}
