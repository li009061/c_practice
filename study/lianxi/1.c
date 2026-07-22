#include <stdio.h>

void Reverse_order(char *s, int len){
    if (len <= 1)
        return;
    
    Reverse_order(s + 1 , len - 2);

    char a = s[0];
    s[0]  = s[len - 1];
    s[len - 1] = a;
}

void Reverse_order_other(char *s , int n){
    if(s[n] == '\0')
        return ;
    Reverse_order_other(s,n+1);
    printf("%c",s[n]);
    return;
}


int main(int argc, char const *argv[])
{
    char s[] = "abcdefg";
    printf("逆序前:%s\n", s);
    Reverse_order(s , sizeof(s)-1);
    printf("逆序之后:%s\n", s);
    
    printf("再逆序之后:");
    Reverse_order_other(s, 0);
    printf("\n");
    return 0;
}
