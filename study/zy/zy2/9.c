#include <stdio.h>
int main(){
    char ch;
    printf("请输入一个大写英文字母: ");
    scanf("%c", &ch);

    int n = ch - 'A' + 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            printf(" ");
        }
        
        for (char a = 'A'; a <= 'A' + i; a++)
        {
            printf("%c", a);
        }
        
        for (char a = 'A' + i -1; a >= 'A'; a--)
        {
            printf("%c", a);
        }

        printf("\n");
    }
    return 0;
}