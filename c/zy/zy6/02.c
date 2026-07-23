// 2、（静态数据）
// 编写一个函数，使其能记录自身被调用的次数。
#include <stdio.h>

static  void records_number(){
    static int n = 0;
    n++;
    printf("被调用了%d次\n", n);
    return ;
}

int main(int argc, char const *argv[])
{
    records_number();
    records_number();
    records_number();
    return 0;
}
