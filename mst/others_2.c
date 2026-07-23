#include <stdio.h>
void fun(int a, int b, int c)
{
    a=a+1; b=b+2; c=c+3;
}

int main()
{
// 1.在 32 位系统上运行，写出下面打印的值
//     char bufa[30] = {1,2,0};
//     char bufb[28] = "hello";
//     char a = 0x12;
//     char *p = "1234567";
//     sprintf(bufa,"%X", a);
//     printf("%d %d\n",strlen(bufa),sizeof(bufa));               //--------------->2 30
//     printf("%d %d %d\n",sizeof(p),sizeof(*p),strlen(p));       //--------------->8 1 7
//     return 0;

//2.看一下下面程序运行结果是什么
    // char* a[] = {"work","at","here"};
    // char** pa = a;
    // pa++;
    // ++pa;
    // printf("%s\n", *pa);    //------------------here
    // return 0;


//3.3、sizeof(struct test1)的值是多少
// struct test1{
//     int a;    //---------4
//     int b;    //---------4
//     char c;   //---------1
//     char d;   //---------1
// }--------------------------------------------------------->12

//4.以下程序运行后，输出结果是【】
    // #define PT 6.5
    // #define S(x) PT*x*x
    // int a=2,b=3;
    // printf("%f\n", S(a+b));  //----------------------------->6.5*2+3*2+3=13+6+3=22.000000

//5.下面程序运行时的输出结果是【】
    // int a=7;
    // printf("\na=%d",++a+2);  //
    //                          //--------------------------------->10

//6.若已定义 char str[10]; 则以下命令中只有【 】是 str [1] 的地址 --------------------------D
// A) str[0]+1;
// B) str++;
// C) ++str;
// D) str+0+1;

//7. 以下程序的输出结果是
    // int a=5,b=3,c=2;
    // fun(a,b,c);
    // printf("%d,%d,%d\n", a, b, c);  ----------------> 5 3 2

//8.打印结果是
    // int a[5]={1,3,5,7,9};
    // int *pstr = (int*)(&a+1);
    // printf(" %d %d \n",*(pstr-2),*(a+2));--------> 7 5 

//9.下面代码输出结果是
    // for(int i = 0 ;i < 3;i++)
    //     {
    //         switch(i)
    //         {
    //             case 0:printf("%d",i);
    //             case 1:printf("%d",i);
    //             default:printf("%d",i);  //------------->000112
    //         }
    //     }

//10.打印的值是
    // int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
    // int *ptr1 = (int *)(&aa + 1);
    // int *ptr2 = (int *)(*(aa + 1));
    // printf(" %d,%d",*(ptr2 - 2), *(ptr1 - 2)); //--------------> 4,9

}

