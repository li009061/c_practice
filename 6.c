#include <stdio.h>
int main(){
    int n;
    printf("qing ni shu ru shuzi :");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");      
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        printf("4~9\n");
        break;
    default:
        printf("no\n");
        break;
    }
    return 0;
}