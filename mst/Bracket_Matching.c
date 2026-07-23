// 12、请编写一个 C 函数，不用任何库函数实现查看一个字符串括号是否匹配，
// 比如"(11)2((33)(4))"为匹配，"(113)3("为不匹配（20 分）

int Bracket_Matching(char *s){
    int a = 0;
    for (int i = 0; s[i] != '\0' ; i++)
    {   
        if (s[i] == '(')
        {
            a++;
        }else if (s[i] == ')')
        {
            a--;
            if (a < 0)
            {
                return 0;
            }
        }
    }
    return a == 0;
}

