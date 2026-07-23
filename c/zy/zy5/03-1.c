#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float x;
    int N;
    printf("请输入底数x和幂指数N的值:\n");
    while (1)
    {
        if ( scanf("%f %d", &x, &N) == 2 && getchar() == '\n')
        break;
        printf("请再次输入底数x和幂指数N的值:\n");
        while (getchar() != '\n');
    }

    if (x == 0 && N == 0)
    {
        printf("x的N次幂为:%d\n", 1);
    }

    float result = 1;
    for (int i = 0; i < abs(N); i++)
    {
        result *= x;
    }
    printf("%f\n", N > 0 ? result : 1/result);
    return 0;
}
