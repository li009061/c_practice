#include <stdio.h>

int main(int argc, char const *argv[])
{
    enum spectrum{red, orange, yellow, green, blue, cyan, purple};
    enum         {reset, running, sleep, stop};

    printf("%d\n", red);
    printf("%d\n", orange);
    printf("%d\n", green);
    return 0;
}
