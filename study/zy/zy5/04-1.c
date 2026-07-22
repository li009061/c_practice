#include <stdio.h>
#include <string.h>

void mystrncat(char *s1 , const char *s2, int maxlen){
    char *p = s1 + strlen(s1);

    int i;
    for (i = 0;s2[i] != '\0' && i < maxlen; i++)
    {
        p[i] = s2[i];
    }
    p[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char s1[50];
    char s2[50];

    fgets(s1, 50, stdin);
    fgets(s2, 50, stdin);

    strtok(s1 , "\n");
    strtok(s2 , "\n");

    mystrncat(s1 , s2 , sizeof(s1) - strlen(s1) - 1);
    
    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);

    return 0;

}
