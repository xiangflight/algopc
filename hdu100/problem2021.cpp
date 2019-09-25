//
// Created by xiang on 2019/9/24.
//
// Description:
//     作为杭电的老师，最盼望的日子就是每月的8号了，因为这一天是发工资的日子，养家糊口就靠它了，呵呵
//     但是对于学校财务处的工作人员来说，这一天则是很忙碌的一天，财务处的小胡老师最近就在考虑一个问题：如果每个老师的工资额都知道，最少需要准备多少张人民币，才能在给每位老师发工资的时候都不用老师找零呢？
//     这里假设老师的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种。
//
// Input:
//     输入数据包含多个测试实例，每个测试实例的第一行是一个整数n（n<100），表示老师的人数，然后是n个老师的工资。
//     n=0表示输入的结束，不做处理。
//
// Output:
//     对于每个测试实例输出一个整数x,表示至少需要准备的人民币张数。每个输出占一行。
//
// Sample:
//
//       3
//   1 2 3  ->  4
//       0
//
//
#include <cstdio>

int howMany(int money) {
    int ret = 0;
    int a[6] = {100, 50, 10, 5, 2, 1};
    for (int i : a) {
        if (money >= i) {
            ret += (money / i);
            money %= i;
        }
    }
    return ret;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            continue;
        }
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += howMany(a[i]);
        }
        printf("%d\n", ans);
    }
    return 0;
}

