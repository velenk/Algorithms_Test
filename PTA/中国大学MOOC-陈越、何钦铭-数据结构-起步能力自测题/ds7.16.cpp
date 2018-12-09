#include <iostream>

using namespace std;

int main() {
    int a[2001], b[2001];
    int i = 0;
    while (cin >> a[i]) {
        cin >> b[i];
        i++;
    }
    int flag = 0;
    int j = 0;
    if (i == 1) {
        if (b[i] == 0) {
            cout << "0 0";
        }
    } else {
        for (; i >= 0; --i) {
            if (b[j] == 0) {
                continue;
            }
            if (flag) {
                cout << " ";
            }
            cout << a[j] * b[j] << " " << b[j] - 1;
            j++;
            flag = 1;
        }
    }
    cout << endl;
    return 0;
}
