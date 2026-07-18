#include <stdio.h>
int main(){
    int N;
    printf("请输入数组元素个数：");
    scanf("%d", &N);

    if (N <= 0) {
        printf("数组长度必须大于 0\n");
        return 1;
    }

    int ch[N];
    printf("请输入 %d 个整数：", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &ch[i]);
    }
    int MAX = 0;
    int m = 0;
    int n;
    for ( n = 0; n < N; n++)
    {
        if (ch[n] > 0)
        {
            break;
        }
        if (ch[n] < 0)
        {
            MAX =ch[n];
            if (ch[n] >= MAX)
            {
                MAX = ch[n];
            }
        }
        if (n = N)
        {
            printf("%d\n",MAX);
            return 0;
        }
        
    }  
    for (int i = n; i < N; i++)
    {
        m +=ch[i];
        if (m >= MAX)
        {
            MAX = m;
        }
        if (m < 0)
        {
            m = 0;
        }
        
    }
    printf("%d\n",MAX);
}