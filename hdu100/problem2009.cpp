//
// Created by xiang on 2019/9/22.
//
// Description:
//     数列的定义如下：
//        数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
//
// Input:
//     输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，n和m的含义如前所述。
//
// Output:
//     对于每组输入数据，输出该数列的和，每个测试实例占一行，要求精度保留2位小数。
//
// Sample:
//        81 4  ->  94.73
//         2 2  ->   3.14
//
#include <cstdio>
#include <cmath>

int main() {
    int m, n;
    while (scanf("%d %d", &n, &m) != EOF) {
        double sum = n;
        double last = n;
        for (int i = 1; i < m; i++) {
            last = sqrt(last);
            sum += last;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}