#include <iostream>

using namespace std;

int main() {
    int a[10];
    int k;
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    cin >> k;
    k += 30;
    for (int i = 0; i < 10; ++i) {
        if (k >= a[i]) {
            count++;
        }
    }
    cout << count;
    return 0;
}
