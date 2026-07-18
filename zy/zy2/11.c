#include <stdio.h>
int main(){
    int ch;
    printf("请输入一个大于2整数:");
    scanf("%d", &ch);
    for (int a = 2; a < ch; a++)
    {
        int is_prime = 1; 
        for (int i = 2; i * i <= a; i++) 
        {
            if (a % i == 0) 
            {
                is_prime = 0;   //注意：这里没有包括 1 和 num 本身，因为素数定义就是只能被 1 和自身整除。
                break;          //num % i 是求余运算。如果余数为 0，说明 i 能整除 num。
            }                   //那么 num 就不是素数，把 is_prime 设为 0（假）。
        }
        if (is_prime)
        {
            printf("%d ", a);
        }
    }
    printf("\n");
    return 0;
}