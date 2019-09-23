//
// Created by xiang on 2019/9/23.
//
// Description:
//     青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
//
// Input:
//     输入数据有多组，每组占一行，每行的第一个数是n(2<n<=100)，表示评委的人数，然后是n个评委的打分。
//
// Output:
//     对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行。
//
// Sample:
//        3 99 98 97       ->  98.00
//        4 100 99 98 97b  ->  98.50
//
#include <cstdio>

int main() {
    int n, min, max, num;
    double sum;
    while (scanf("%d", &n) != EOF) {
        sum = 0.0;
        min = 101;
        max = -1;
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            sum += num;
            if (num < min) {
                min = num;
            }
            if (num > max) {
                max = num;
            }
        }
        printf("%.2f\n", (sum - max - min) / (n - 2));
    }
    return 0;
}
