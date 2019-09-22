//
// Created by xiang on 2019/9/22.
//
// Description:
//     求实数的绝对值。
//
// Input:
//     输入数据有多组，每组占一行，每行包含一个实数。
//
// Output:
//     对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。
//
// Sample:
//     123    ->  123.00
//    -234.00 ->  234.00
//
#include <cstdio>

int main() {
    double num;
    while (scanf("%lf", &num) != EOF) {
        if (num < 0) {
            num = - num;
        }
        printf("%.2f\n", num);
    }
    return 0;
}

