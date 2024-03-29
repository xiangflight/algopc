//
// Created by xiang on 2019/9/26.
//
// Description:
//     输入一个十进制数N，将它转换成R进制数输出。
//
// Input:
//     输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）。
//
// Output:
//     为每个测试实例输出转换后的数，每个输出占一行。如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。
//
// Sample:
//
//       7 2          111
//     23 12    ->     1B
//      -4 3          -11
//
#include <cstdio>

char a[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

void scale(int n, int m);

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        if (n < 0) {
            printf("-");
            n = -n;
        }
        scale(n, m);
        printf("\n");
    }
    return 0;
}

void scale(int n, int m) {
    if (n > m) {
        scale(n / m, m);
    }
    printf("%c", a[n % m]);
}

