//
// Created by xiang on 2019/10/13.
//
#include <cstdio>

int hailstone(int n) {
    int length = 1;
    while (1 < n) {
        (n % 2) ? n = 3 * n + 1: n /= 2;
        length++;
    }
    return length;
}

int main() {
    int res = hailstone(27);
    printf("res = %d", res);
}

