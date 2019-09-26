//
// Created by xiang on 2019/9/26.
//
// Description:
//     求n个数的最小公倍数。
//
// Input:
//     输入包含多个测试实例，每个测试实例的开始是一个正整数n，然后是n个正整数。
//
// Output:
//     为每组测试数据输出它们的最小公倍数，每个测试实例的输出占一行。你可以假设最后的输出是一个32位的整数。
//
// Sample:
//
//       2 4 6      ->     12
//       3 2 5 7           70
//
#include <cstdio>

long long gcd(long long m, long long n) {
    return n == 0 ? m: gcd(n, m % n);
}

long long lcm(long long m, long long n) {
    return m * n / gcd(m, n);
}

int main() {
    long long n, m;
    long long lcx = 1;
    while (scanf("%lld", &n) != EOF) {
        long long temp = 1;
        for (int i = 0; i < n; i++) {
            scanf("%lld", &m);
            lcx = lcm(temp, m);
            temp = lcx;
        }
        printf("%lld\n", lcx);
    }
    return 0;
}