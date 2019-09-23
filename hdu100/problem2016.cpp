//
// Created by xiang on 2019/9/23.
//
// Description:
//     输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
//
// Input:
//     输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。
//
// Output:
//     对于每组输入数据，输出交换后的数列，每组输出占一行。
//
// Sample:
//        4 2 1 3 4          1 2 3 4
//        5 5 4 3 2 1  ->    1 4 3 2 5
//        0
//
#include <cstdio>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            continue;
        }
        int arr[n];
        int min = 0xffff;
        int minIndex = -1;
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", arr + i);
            if (arr[i] < min) {
                min = arr[i];
                minIndex = i;
            }
        }
        if (minIndex != 0) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[0];
            arr[0] = temp;
        }
        for (int j = 0; j < n; j++) {
            printf("%d", arr[j]);
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}