// 3、（存储期）
//某同学写了如下代码：
// #include <stdio.h>
// int main(void)
// {
//     char *p = malloc(20);
//     strcpy(p, "abcdefg");
//     free(p);
//     printf("%s\n", p);
//     return 0;
// }
// 程序中的指针p，明明已经被 free 掉了，为什么将这段代码编译后不仅不报错并且还能正常运行？
// free()只能释放堆内存,释放内存并不会改变指针的指向,释放内存并不会对内存做任何修改，更不会将内存清零。