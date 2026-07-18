#include <stdio.h>

// 定义一个结构体 student
struct student {
    int age;
};

// 定义一个函数，用于测试函数指针
void f(int x) {
    printf("  函数 f 被调用，参数为 %d\n", x);
}

int main() {
    // ========== 第1组：普通变量与指针 ==========
    int a;
    int *ptr;
    ptr = &a;
    a = 100;
    printf("1) a = %d, *ptr = %d\n", a, *ptr);
    *ptr = 200;      // 通过指针修改 a 的值
    printf("   修改 *ptr 后，a = %d, *ptr = %d\n", a, *ptr);

    // ========== 第2组：结构体与指针 ==========
    struct student jack;
    struct student *Liz;
    Liz = &jack;
    jack.age = 21;
    printf("2) jack.age = %d, (*Liz).age = %d\n", jack.age, (*Liz).age);
    (*Liz).age = 25;   // 通过结构体指针修改 age
    printf("   修改 (*Liz).age 后，jack.age = %d\n", jack.age);

    // ========== 第3组：指向字符串的指针与二级指针 ==========
    char *p = "abcd";
    char **dlt;
    dlt = &p;
    printf("3) p = %s, *dlt = %s\n", p, *dlt);
    p = "xyz";
    printf("   修改 p 后，p = %s, *dlt = %s\n", p, *dlt);
    *dlt = "123";    // 通过二级指针修改 p 指向的内容
    printf("   修改 *dlt 后，p = %s, *dlt = %s\n", p, *dlt);

    // ========== 第4组：数组与指向整个数组的指针 ==========
    char s[50];
    char (*ptz)[50];  // ptz 是一个指针，指向有50个char的数组
    ptz = &s;
    s[4] = 'a';
    printf("4) s[4] = '%c', (*ptz)[4] = '%c'\n", s[4], (*ptz)[4]);
    (*ptz)[4] = 'b';   // 通过数组指针修改元素
    printf("   修改 (*ptz)[4] 后，s[4] = '%c'\n", s[4]);

    // ========== 第5组：函数指针 ==========
    void (*cbk)(int);   // cbk 是指向函数的指针
    cbk = &f;           // 也可以直接写 cbk = f;
    printf("5) 直接调用 f(100): ");
    f(100);
    printf("   通过函数指针调用 (*cbk)(200): ");
    (*cbk)(200);        // 也可以用 cbk(200);
    // 注意：cbk(200) 同样合法，(*cbk)(200) 更传统

    return 0;
}