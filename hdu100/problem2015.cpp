//
// Created by xiang on 2019/9/23.
//
// Description:
//     有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。
//
// Input:
//     输入数据有多组，每组占一行，包含两个正整数n和m，n和m的含义如上所述。
//
// Output:
//     对于每组输入数据，输出一个平均值序列，每组输出占一行。
//
// Sample:
//        3 2  ->  3 6
//        4 2  ->  3 7
//
#include <cstdio>

int a[100];

int sum_average(int* begin, int m) {
    int ans = 0;
    for (int i = 0; i < m; i++) {
        ans += begin[i];
    }
    return ans / m;
}

int main() {
    int n, m;
    int n0, m0;
    for (int i = 1; i <= 100; i++) {
        a[i - 1] = 2 * i;
    }
    while (scanf("%d %d", &n, &m) != EOF) {
        n0 = n / m;
        m0 = n - n0 * m;
        for (int j = 0; j < n0; j++) {
            if (j != 0) {
                printf(" ");
            }
            printf("%d", sum_average(a + j * m, m));
        }
        if (m0 != 0) {
            printf(" %d\n", sum_average(a + n0 * m, m0));
        } else {
            printf("\n");
        }
    }
    return 0;
}

