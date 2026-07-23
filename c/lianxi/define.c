#include <stdio.h>

#define PI 3.14
#define MAX(a,b) \
    ({ \
        typeof(a) _a = a; \
        typeof(b) _b = b; \
        _a > _b ? _a : _b; \
    })

int main() {
    float a =1.1, b =1.2;
    float m = MAX(a, b);
    printf("a : %f\n", a);
    printf("b : %f\n", b);
    printf("m : %f\n", m);
    return 0;
}