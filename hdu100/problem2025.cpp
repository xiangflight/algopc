//
// Created by xiang on 2019/9/25.
//
// Description:
//     对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。
//
// Input:
//     输入数据包括多个测试实例，每个实例由一行长度不超过100的字符串组成，字符串仅由大小写字母构成。
//
// Output:
//     对于每个测试实例输出一行字符串，输出的结果是插入字符串“(max)”后的结果，如果存在多个最大的字母，就在每一个最大字母后面都插入"(max)"。
//
// Sample:
//
//       abcdefgfedcba  ->  abcdefg(max)fedcba
//       xxxxx               x(max)x(max)x(max)x(max)x(max)
//
#include <cstdio>
#include <string>

int main() {
    char a[150];
    while (gets(a)) {
        char max = a[0];
        int len = strlen(a);
        for (int i = 1; i < len; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        for (int i = 0; i < len; i++) {
            if (a[i] == max) {
                printf("%c(max)", a[i]);
            } else {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

