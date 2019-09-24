//
// Created by xiang on 2019/9/24.
//
// Description:
//     输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
//
// Input:
//     输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。
//
// Output:
//     对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
//
// Sample:
//
//       3 3 -4 2        -4 3 2
//       4 0 1 2 -3  ->  -3 2 1 0
//       0
//
//
#include <cstdio>

int abs(int num) {
    return num < 0 ? -num : num;
}

int swap(int* a, int i, int j) {
    int temp = *(a + i);
    *(a + i) = *(a + j);
    *(a + j) = temp;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            continue;
        }
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        // 针对数组 a 进行选择排序，排序的key为|a[i]|
        for (int i = 0; i < n - 1; i++) {
            int max = i;
            for (int j = i + 1; j < n; j++) {
                if (abs(a[j]) > abs(a[max])) {
                    max = j;
                }
            }
            swap(a, max, i);
        }
        for (int i = 0; i < n; i++) {
            printf("%d", a[i]);
            if (i != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


