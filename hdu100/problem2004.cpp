//
// Created by xiang on 2019/9/22.
//
// Description:
//     输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
//          90~100为A;
//          80~89为B;
//          70~79为C;
//          60~69为D;
//           0~59为E;
//
// Input:
//     输入数据有多组，每组占一行，由一个整数组成。
//
// Output:
//     对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。
//
// Sample:
//         56  ->  E
//
#include <cstdio>

int main() {
    int score;
    while (scanf("%d", &score) != EOF) {
        if (score < 0 || score > 100) {
            printf("Score is error!");
        } else if (score < 60) {
            printf("E");
        } else if (score < 70) {
            printf("D");
        } else if (score < 80) {
            printf("C");
        } else if (score < 90) {
            printf("B");
        } else {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}

