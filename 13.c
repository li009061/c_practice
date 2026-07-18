#include <stdio.h>

void f2(int (*b)[]){
    printf("[%s]: %ld\n", __FUNCTION__, sizeof(b));
}

void f3(char **s){
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", s[i]);
    }
          
}

int main(){
    // char *s[3] = { "abc" , "123" , "xyz"};
    // f3(s);
    // int b[2][3];
    // f2(b);
    // printf("[%s]: %ld\n", __FUNCTION__, sizeof(b));



    
}