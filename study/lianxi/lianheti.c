#include <stdio.h>

union attr
{
    int x;
    char y;
    double z;

};


int main(int argc, char const *argv[])
{
    union attr n;

    // union attr at = {100 , 'k', 3.14};

    union attr at = {
        at.x = 100,
        at.y = 'a',
        at.z = 3.14,
    };

    printf("%d\n", at.x);
    printf("%c\n", at.y);
    printf("%f\n", at.z);

    union attr *p = &at;
    p -> x = 100;
    p -> y = 'a';
    p -> z = 3.14;

    printf("%d\n", at.x);
    printf("%c\n", at.y);
    printf("%f\n", at.z);



    return 0;
}
