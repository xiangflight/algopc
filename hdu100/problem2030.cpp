//
// Created by xiang on 2019/9/26.
//
// Description:
//     统计给定文本文件中汉字的个数。
//
// Input:
//     输入文件首先包含一个整数n，表示测试实例的个数，然后是n段文本。
//
// Output:
//     对于每一段文本，输出其中的汉字的个数，每个测试实例的输出占一行。
//     [Hint:]从汉字机内码的特点考虑~   汉字占 2 个字节，在 MacOS 上占用 3 个字节，每个字节的最高位都是1，因而直接判断是负数即可
//
// Sample:
//
//       2
//       WaHaHa! WaHaHa! 今年过节不说话要说只说普通话WaHaHa! WaHaHa!   ->    14
//       马上就要期末考试了Are you ready?                                    9
//
#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d\n", &n);
    char s[10001];
    while (n--) {
        int ret = 0;
        gets(s);
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            if (s[i] < 0) {
                ret++;
                i++; // if on MacOS，this statement should be i += 2
            }
        }
        printf("%d\n", ret);
    }
    return 0;
}

