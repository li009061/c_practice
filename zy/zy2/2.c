#include <stdio.h>
int main(){
    double N;
    double NA = 6.02214076e23;
    double M = 18.015;
    double molecules;

    printf("请输入多少升水:\n");
    scanf("%lf", &N);
    molecules = (N * 1000)/M * NA;
    printf("%0.f 升水含有 %e 个水分子。\n", N, molecules);
}