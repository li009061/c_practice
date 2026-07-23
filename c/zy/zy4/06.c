#include <stdio.h>
#include <string.h>
void a(char s[]){
    int len = strlen(s);
    for (int k = 0; k < len; k++)
    {
        if (s[k] == -1)
        {
            continue;
        }
        
        for (int n = k + 1; n < len; n++)
        {
            if (s[n] == s[k])
            {
                s[n] = -1;
            }
        }
    }
    

    int i, j;
    for ( i = 0; i < len; i++)
    {
        if (s[i] == -1)
        {
            break;
        }
    }
    
    for ( j = i; j < len; j++)
    {
        if (s[j] != -1)
        {
            break;
        }
        
    }
    
    for ( ; j < len; j++)
    {
        if (s[j] == -1)
        {
            continue;
        }
        s[j] = s[i];
        i++;
    }
    
    s[i] = '\0';
    
}
int main(){
    char s[20];
    printf("请输入字符串:\n");
    fgets(s, 20, stdin);

    a(s);
    
    printf("%s\n", s);
}