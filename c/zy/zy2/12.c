#include <stdio.h>
int main(){
    int  N;
    printf("任意写出一个（非零）自然数N:");
    scanf("%d", &N);
    int i = 0;
    int MAX = 0;
    while (N != 1)
    {
        if (N % 2 == 0)
        {
            N = N/2;
        }
        else
        {
            N = 3*N + 1;
        }
        i++;
        if(N > MAX)
		{
			MAX = N;
		}
    }
    printf("%d %d\n", i, MAX);
    return 0;
}