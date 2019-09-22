//
// Created by xiang on 2019/9/22.
//
// Description:
//     给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
//
// Input:
//    输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
//
// Output:
//    对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
//你可以认为32位整数足以保存结果。
//
// Sample:
//         1 3  ->  4    28
//         2 5  ->  20  152
//
#include <cstdio>

int main() {
    int m, n;
    while (scanf("%d %d", &m, &n) != EOF) {
        if (m > n) {
            int temp = m;
            m = n;
            n = temp;
        }
        int square = 0;
        int cube = 0;
        int i;
        for (i = m; i <= n; i++) {
            if ((i & 1) == 0) {
                square += i * i;
            } else {
                cube += (i * i * i);
            }
        }
        printf("%d %d\n", square, cube);
    }
    return 0;
}
