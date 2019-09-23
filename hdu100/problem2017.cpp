//
// Created by xiang on 2019/9/23.
//
// Description:
//     对于给定的一个字符串，统计其中数字字符出现的次数。
//
// Input:
//     输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。
//
// Output:
//     对于每个测试实例，输出该串中数值的个数，每个输出占一行。
//
// Sample:
//        2
//        asdfasdf123123asdfasdf      ->   6
//        asdf111111111asdfasdfasdf        9
//
#include <cstdio>

int main() {
    int n;
    char c;
    scanf("%d\n", &n);
    while (n--) {
        int count = 0;
        while ((c = getchar()) != '\n') {
            if (c >= '0' && c <= '9') {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}