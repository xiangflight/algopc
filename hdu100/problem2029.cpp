//
// Created by xiang on 2019/9/26.
//
// Description:
//     “回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。
//
// Input:
//     输入包含多个测试实例，输入数据的第一行是一个正整数n,表示测试实例的个数，后面紧跟着是n个字符串。
//
// Output:
//     如果一个字符串是回文串，则输出"yes",否则输出"no".
//
// Sample:
//
//       4
//       level         yes
//       abcde   ->     no
//       noon          yes
//       haha           no
//
#include <cstdio>
#include <string>

int main() {
    int n;
    scanf("%d\n", &n);
    while (n--) {
        char s[150];
        gets(s);
        int len = strlen(s);
        int palindrome = 1;
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                palindrome = 0;
                break;
            }
        }
        if (palindrome) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}

