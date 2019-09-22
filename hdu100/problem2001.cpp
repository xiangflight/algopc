//
// Created by xiang on 2019/9/22.
//
// Description:
//     输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
//
// Input:
//     输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
//
// Output:
//     对于每组输入数据，输出一行，结果保留两位小数。
//
// Sample:
//     0 0 0 1  ->  1.00
//     0 1 1 0  ->  1.41
//
#include <cstdio>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF) {
        double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        printf("%.2f\n", distance);
    }
    return 0;
}

