#include <stdio.h>
static inline void noly_one(void){
    static int a = 0;
    if (a)
    {
        printf("我死了\n");
        return;
    }
    a = 1;
    printf("我只会声明一次\n");
    return;
}
int main(int argc, char const *argv[])
{
    noly_one();
    noly_one();
    noly_one();
    return 0;
}
