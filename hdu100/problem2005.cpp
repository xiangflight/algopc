//
// Created by xiang on 2019/9/22.
//
// Description:
//     给定一个日期，输出这个日期是该年的第几天。
//
// Input:
//    输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。
//
// Output:
//    对于每组输入数据，输出一行，表示该日期是该年的第几天。
//
// Sample:
//         1985/1/20  ->  20
//         2006/3/12  ->  71
//
#include <cstdio>

int main() {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day;
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF) {
        int ret = 0;
        for (int i = 0; i < month - 1; i++) {
            ret += days[i];
        }
        if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            ret += 1;
        }
        ret += day;
        printf("%d\n", ret);
    }
    return 0;
}
