#include <stdio.h>
int main(){
    int n;
    printf("qing shu ru yi ge shu zi: ");
    scanf("%d", &n);
    if(n < 100){
        printf("xiao yu 100\n");
    }
    else if(n > 100){
        printf("da yu 1000\n");
        }
    else
        printf("no\n");
    return 0;
}