//
// Created by xiang on 2019/9/22.
//
// Description:
//     根据输入的半径值，计算球的体积。
//
// Input:
//     输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
//
// Output:
//     输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
//
// Sample:
//     1.5  ->  14.137
//
#include <cstdio>
#include <cmath>

const double PI = 3.1415927;

int main() {
    double radius;
    while (scanf("%lf", &radius) != EOF) {
        double volume = (4 * PI * pow(radius, 3)) / 3;
        printf("%.3f\n", volume);
    }
    return 0;
}