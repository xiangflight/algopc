//
// Created by xiang on 2019/10/15.
//
#include<iostream>
#include<algorithm>

using namespace std;

void bubblesort(int A[], int n) {
    for (bool sorted = false; sorted = !sorted; n--) {
        for (int i = 1; i < n; i++) {
            if (A[i-1] > A[i]) {
                swap(A[i-1], A[i]);
                sorted = false;
            }
        }
    }
}

int main() {
    int a[] = {1, 3, 2};
    bubblesort(a, 3);
    for (auto v: a) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}

