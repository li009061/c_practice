//1.指针实现字符串拼接（2 个字符串拼接到一起），并写一个测试例程
//2.不额外分配空间，实现字符串拼接，并且写一个测试例程
#include <string.h>
#include <stdio.h>

void String_concatenation(char *p , char *p1){
    char s[200];
    int i = 0;
    for (i ; p[i] != '\0' ; i++)
    {
        s[i] = p[i];
    }
    for (int j = 0 ; p1[j] != '\0'; j++)
    {
        s[i] = p1[j];
        i++;
    }
    s[i] = '\0';
    printf("%s\n", s);
}

void String_concatenation1(char *p ,const char *p1){
    int i = strlen(p) , j = 0;
    for (i; p1[j] != '\0'; i++)
    {   
        p[i] = p1[j];
        j++;
    }
    p[i + j + 1] = '\0';
    printf("%s\n", p);
}

int main(int argc, char const *argv[])
{
    char a1[20] = {"abcd"};
    char a2[20] = {"efgh"};
    String_concatenation(a1 , a2);
    String_concatenation1(a1 , a2);
    return 0;
}
