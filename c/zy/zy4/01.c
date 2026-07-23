#include <stdio.h>
int main(){
    int a = 1;
    char unsigned (*p) = (char unsigned*) &a;
    if (*p == 1)
    {
        printf("这是LE\n");
    }else{
        printf("这是BE\n");
    }
    for (int i = 0; i < sizeof(a); i++)
    {
        printf("%02x", p[i]);
    }
    printf("\n");
    return 0;
    
}