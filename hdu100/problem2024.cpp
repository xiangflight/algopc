//
// Created by xiang on 2019/9/25.
//
// Description:
//     输入一个字符串，判断其是否是C的合法标识符。
//
// Input:
//     输入数据包含多个测试实例，数据的第一行是一个整数n,表示测试实例的个数，然后是n行输入数据，每行是一个长度不超过50的字符串。
//
// Output:
//     对于每组输入数据，输出一行。如果输入数据是C的合法标识符，则输出"yes"，否则，输出“no”。
//
// Sample:
//
//       3
//       12ajf    ->   no
//       fi8x_a       yes
//       ff  ai_2      no
//
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;

int main() {
    int n;
    char a[60];
    scanf("%d\n", &n);
    while (n--) {
        bool flag = true;
        gets(a);
        int len = strlen(a);
        for (int i = 0; i < len; i++) {
            if ((!isalnum(a[i]) && a[i] != '_') || isdigit(a[0])) {
                printf("no");
                flag = false;
                break;
            }
        }
        if (flag) {
            printf("yes");
        }
        printf("\n");
    }
    return 0;
}

