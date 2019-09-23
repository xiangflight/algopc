//
// Created by xiang on 2019/9/23.
//
// Description:
//     春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：
//     “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。
//     现在要求输出所有在m和n范围内的水仙花数。
//
// Input:
//     输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999）。
//
// Output:
//     对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m,并且小于等于n，如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开;
//     如果给定的范围内不存在水仙花数，则输出no;
//     每个测试实例的输出占一行。
//
// Sample:
//        100 120  ->  no
//        300 380  ->  370 371
//
//        进制
//
#include <cstdio>
#include <cmath>

bool isNarci(int num) {
    int sum = num;
    while (num / 10) {
        int remainder = num % 10;
        sum -= pow(remainder, 3);
        num /= 10;
    }
    sum -= pow(num, 3);
    return !sum;
}

int main() {
    int m, n;
    int count;
    while (scanf("%d %d", &m, &n) != EOF) {
        count = 0;
        for (int i = m; i <= n; i++) {
            if (isNarci(i)) {
                if (count > 0) {
                    printf(" ");
                }
                printf("%d", i);
                count++;
            }
        }
        if (!count) {
            printf("no");
        }
        printf("\n");
    }
    return 0;
}


