//
// Created by xiang on 2019/9/30.
//
// Description:
//     求A^B的最后三位数表示的整数。
//     说明：A^B的含义是“A的B次方”
//
// Input:
//     输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），如果A=0, B=0，则表示输入数据的结束，不做处理。
//
// Output:
//     对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行。
//
// Sample:
//
//       2 3          8
//      12 6      ->  984
//  6789 10000        1
//        0 0
//
#include <cstdio>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        if (n == 0 && m == 0) {
            break;
        }
        int ret = 1;
        while (m != 0) {
            if (m % 2 == 1) {
                ret = ret * n % 1000;
            }
            n = n * n % 1000;
            m = m / 2;
        }
        printf("%d\n", ret);
    }
    return 0;
}

