#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void f(int n,char *s){
    char *p = malloc(200);
    memset(p, 0, 200);
    strcpy(p, "abcdefg");
    printf("%s\n" , p);
    free(p);
}

void f1(char *g){
    char *p = calloc(3 , 200);
    free(p);
    char * s = malloc(200);
    char * s1 = malloc(200);
    char * s2 = malloc(200);
    char * s3 = malloc(200);
    char * s4 = malloc(200);
}
int main(int argc, char const *argv[])
{
    f(123 , "aaa");
    f1("aaaa");
    return 0;
}
