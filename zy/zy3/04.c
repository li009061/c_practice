#include <stdio.h>
int main(){
    int *p;
    int a[2][2] = {1, 2, 3, 0};
    p = a[0];
    printf("%d, %d", *p, *(p+1)); // 输出什么？ 1, 2
 
    int *p;
    int a[2][2] = {{1, 0}, {2, 3}};
    p= a[0];
    printf("%d, %d", *p, *(p+1)); // 输出什么？ 1, 0
}