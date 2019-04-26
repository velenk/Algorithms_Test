#include <iostream>

using namespace std;

int a[30];

int main() {
    int n;
    cin >> n;
    int flag = 1;
    int m1, m2;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 0 && flag) {
            m1 = i;
            flag = 0;
        }
    }
    flag = 1;
    for (int i = n; i > 0; i--) {
        if (a[i] == 0 && flag) {
            m2 = n-i+1;
            flag = 0;
        }
    }
    if (m1%2 && m2%2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}
