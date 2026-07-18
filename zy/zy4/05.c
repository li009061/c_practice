#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int m, int n, int (*x)[n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void assign(int m, int n, int (*a)[n], int (*b)[n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[i][j];
        }
    }
}

int main() {
    srand(time(NULL));

    int m, n;
    printf("请输入行数 m 和列数 n：");
    scanf("%d%d", &m, &n);

    int a[m][n];
    int b[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 1000;
        }
    }

    printf("源数组 a：\n");
    show(m, n, a);

    assign(m, n, a, b);

    printf("目标数组 b（复制后）：\n");
    show(m, n, b);

    return 0;
}