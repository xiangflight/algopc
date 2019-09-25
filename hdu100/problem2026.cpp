//
// Created by xiang on 2019/9/25.
//
// Description:
//     输入一个英文句子，将每个单词的第一个字母改成大写字母。
//
// Input:
//     输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
//
// Output:
//     请输出按照要求改写后的英文句子。
//
//     A   0100 0001

//     a   0110 0001
//
// Sample:
//
//       i like acm                 ->  I Like Acm
//       i want to get an accepted      I Want To Get An Accepted
//
#include <cstdio>
#include <string>

int main() {
    char a[150];
    while (gets(a)) {
        int n = strlen(a);
        int capital = 1;
        for (int i = 0; i < n; i++) {
            if (capital == 1) {
                printf("%c", a[i] - 32);
                capital = 0;
            } else if (a[i] == ' ') {
                printf("%c", a[i]);
                capital = 1;
            } else {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
