//
// Created by xiang on 2019/9/25.
//
// Description:
//     假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。
//
// Input:
//     输入数据有多个测试实例，每个测试实例的第一行包括两个整数n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）。
//
// Output:
//     对于每个测试实例，输出3行数据，第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；第二行包含m个数据，表示m门课的平均成绩，结果保留两位小数；第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
//     每个测试实例后面跟一个空行。
//
// Sample:
//
//       2 2       7.50 15.00
//      5 10  ->   7.50 15.00
//     10 20       1
//
//
#include <cstdio>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        double a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%lf", &a[i][j]);
            }
        }
        double sum;
        double b[m];
        for (int i = 0; i < n; i++) {
            sum = 0.0;
            for (int j = 0; j < m; j++) {
                sum += a[i][j];
                b[j] += a[i][j];
            }
            printf("%.2f", sum / m);
            if (i != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
        for (int i = 0; i < m; i++) {
            printf("%.2f", b[i] / n);
            if (i != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
        int ret = 0;
        int i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (a[i][j] < (b[j] / n)) {
                    break;
                }
            }
            if (j == m) {
                ret++;
            }
        }
        printf("%d\n\n", ret);
    }
    return 0;
}

