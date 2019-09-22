//
// Created by xiang on 2019/9/22.
//
// Description:
//     输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//
// Input:
//     输入数据有多组，每组占一行，有三个字符组成，之间无空格。
//
// Output:
//     对于每组输入数据，输出一行，字符中间用一个空格分开。
//
// Sample:
//     qwe -> e q w
//
#include <cstdio>

void swap(char*, char*);

int main() {
    char c[3];
    while (scanf("%s", c) != EOF) {
        if (c[0] > c[1]) {
            swap(&c[0], &c[1]);
        }
        if (c[0] > c[2]) {
            swap(&c[0], &c[2]);
        }
        if (c[1] > c[2]) {
            swap(&c[1], &c[2]);
        }
        printf("%c %c %c\n", c[0], c[1], c[2]);
    }
    return 0;
}

void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}


