#include <iostream>

using namespace std;

int* Add(int* a, int* b) {
    int flag = 0;
    int num;
    int c[1000] = { };
    for (int i = 0; i < 1000; ++i) {
        if (flag == 0) {
            num = a[i] + b[i];
        } else {
            num = a[i] + b[i] + 1;
        }
        if (num > 9) {
            flag = 1;
            num - 10;
        } else {
            flag = 0;
        }
        c[i] = num;
    }
    return c;
}

int* C(int n, int m) {
    int c[1000] = { };
    if (n == m || n == 0) {
        c[0] = 1;
        return c;
    }
    int* x = Add(C(n-1, m), C(n-1, m-1));
    for (int i = 0; i < 1000; ++i) {
        c[i] = x[i];
    }
    return c;
}

int main() {
    int n, m;
    cin >> n >> m;
    if (n > m) {
        int k = n;
        n = m;
        m = k;
    }
    int* x = C(n, m+n);
    int flag = 0;
    for (int i = 999; i >= 0; --i) {
        if (x[i] != 0) {
            flag = 1;
        }
        if (flag) {
            cout << x[i];
        }
    }
    return 0;
}
