//
// Created by xiang on 2019/9/22.
//
// Description:
//     统计给定的n个数中，负数、零和正数的个数。
//
// Input:
//    输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入结束，该行不做处理。
//
// Output:
//    对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。
//
// Sample:
//        6 0 1 2 3 -1 0 -> 1 2 3
//
//        5 1 2 3 4 0.5     0 0 5
//        0
//
#include <cstdio>

int main() {
    int n;
    double num;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            continue;
        }
        int negative, zero, positive;
        negative = zero = positive = 0;
        for (int i = 0; i < n; i++) {
            scanf("%lf", &num);
            if (num < 0) {
                negative++;
            } else if (num > 0) {
                positive++;
            } else {
                zero++;
            }
        }
        printf("%d %d %d\n", negative, zero, positive);
    }
    return 0;
}

