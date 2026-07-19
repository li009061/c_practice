#include <stdio.h>
#include <string.h>
#include <strings.h>


void strip(char *a, char *b){
    for (int i = 0, k = 0; a[i] != '\0'; i++)
    {
        if (strchr(b, a[i]) == NULL)
        {
            b[k] = a[i];
            k++;
        }
    }
}


int main(int argc, char const *argv[])
{
    char a[100];
    char b[100];
    printf("请输入字符串：\n");
    fgets(a, 100, stdin);

    bzero(b, 100);
    
    strip(a, b);

    printf("quchonghou:\n%s", b);
    return  0;
}
