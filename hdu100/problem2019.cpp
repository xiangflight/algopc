//
// Created by xiang on 2019/9/24.
//
// Description:
//     有n(n<=100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
//
// Input:
//     输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。
//
// Output:
//     对于每个测试实例，输出插入新的元素后的数列。
//
// Sample:
//
//        3 3
//      1 2 4  ->  1 2 3 4
//        0 0
//
//
#include <cstdio>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        if (n == 0 && m == 0) {
            continue;
        }
        int a[n + 1];
        for (int i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        int j;
        for (j = n - 1; j >= 0; j--) {
            if (a[j] <= m) {
                break;
            }
        }
        j++;
        for (int k = n; k > j; k--) {
            a[k] = a[k - 1];
        }
        a[j] = m;
        for (int i = 0; i < n + 1; i++) {
            printf("%d", a[i]);
            if (i != n) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


