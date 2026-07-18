#include <stdio.h>

int main(){
    int a = 123;
    printf("a=%d\n",a);
    printf("占用%zu字节\n",sizeof(a));
    
    return 0;
}