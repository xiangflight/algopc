//
// Created by xiang on 2019/9/25.
//
// Description:
//     统计每个元音字母在字符串中出现的次数。
//
// Input:
//     输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的字符串。
//
// Output:
//     对于每个测试实例输出5行，格式如下：
//     a:num1
//     e:num2
//     i:num3
//     o:num4
//     u:num5
//     多个测试实例之间由一个空行隔开。
//
//     请特别注意：最后一块输出后面没有空行：）
//
// Sample:
//
//       2
//       aeiou
//       my name is ignatius
//
//      ->
//
//      a:1
//      e:1
//      i:1
//      o:1
//      u:1
//
//      a:2
//      e:1
//      i:3
//      o:0
//      u:1
//
#include <cstdio>
#include <string>

int main() {
    int n;
    scanf("%d\n", &n);
    while (n--) {
        char s[150];
        gets(s);
        int len = strlen(s), a = 0, e = 0, t = 0, o = 0, u = 0;
        for (int i = 0; i < len; i++) {
            switch (s[i]) {
                case 'a':
                    a++;
                    break;
                case 'e':
                    e++;
                    break;
                case 'i':
                    t++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'u':
                    u++;
                    break;
            }
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", a, e, t, o, u);
        if (n > 0) {
            printf("\n");
        }
    }
    return 0;
}


