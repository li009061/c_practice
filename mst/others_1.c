// 以下 C 程序片段的执行结果是什么？

#include<stdio.h>
//第八题
void fun(int a, int b, int c){   //---------------------> 4 3 2
     a=a+1; b=b+2; c=c+3;
    }

int main(int argc, char const *argv[])
{
    // 1.
    // unsigned char tt;
    // tt = ~0 << 2; //11111111 >> 11111100
    // printf("%X\n\r", tt);   //FC

    // 2.
    // char bufa[24] = {0};
    // char bufb[28] = "hello!";
    // char a = 0x12;
    // char *p = "123456";
    // sprintf(bufa, "%x", a);                     
    // printf("%d %d \n",strlen(bufb),sizeof(bufb)); //----------->6 28
    // printf("%d %d %d\n",sizeof(p),sizeof(*p),strlen(p));//----->8 1 6
    // return 0;

    // 3.
    // char* a[] = {"work","at","here"};
    // char** pa = a;
    // pa++;
    // pa++;
    // printf("%s\n", *pa);  // ----> here
    // return 0;

    // 4.
    // struct test1{
    // int a; -------4
    // int b; --------4
    // char c; -------1
    // };
    // Sizeof(struct test1)的值是多少  -------->12

    //5.
    // #define PT 5.5
    // #define S(x) PT*x*x     //---------------> 5.5*x*x
    // int a=2,b=3;            
    // printf("%f\n", S(a+b)); //--------------> 5.5*2+3*2+3 =11+6+3=20.000000
    
    // 6.
    // int a=6;
    // printf("\na=%d",++a+2);   //--------------->
                             // ---------------> a=9
    // 7.
    // 6、若已定义 char str[10]; 则以下命令中只有【 】是 str [1] 的地址（5 分） ------------------>D
    // A) ++str;
    // B) str++;
    // C) str[0]+1;
    // D) str+0+1;

    // 8.
        // int a=4, b=3, c=2;
        // fun(a,b,c); 
        // printf("%d,%d,%d\n", a, b, c);              // ----------> 4,3,2

    // 9.
    // int a[5]={1,2,3,4,5};
    // int *pstr = (int*)(&a+1);
    // printf(" %d %d \n",*(pstr-1),*(a+1));           //------------->5 2

    // 10.
    //     for(int i = 0; i < 3;i++)
    // {
    //     switch (i)
    //     {
    //     case 0:
    //         printf("%d",i);
    //     case 1:
    //         printf("%d",i);
    //     default:
    //         printf("%d",i);           //--------------->000112
    //     }
    // }

    // 10.
    // int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // int *ptr1 = (int *)(&aa + 1);
    // int *ptr2 = (int *)(*(aa + 1) );
    // printf( " %d,%d",*(ptr2 - 1), *(ptr1 - 1));     //-------------> 5,10


}
