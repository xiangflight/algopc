//
// Created by xiang on 2019/9/24.
//
// Description:
//     有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
//
// Input:
//     输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
//     n=0表示输入数据的结束，不做处理。
//
// Output:
//     对于每个测试实例，输出在第n年的时候母牛的数量。
//     每个输出占一行。
//
// Sample:
//     2      2
//     4  ->  4
//     5      6
//     0
//
#include <cstdio>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            continue;
        }
        if (n <= 3) {
            printf("%d\n", n);
            continue;
        }
        int first =  1;
        int second = 2;
        int third = 3;
        int ans = 3;
        for (int i = 3; i < n; i++) {
            ans = first + third;
            first = second;
            second = third;
            third = ans;
        }
        printf("%d\n", ans);
    }
    return 0;
}


