#include <iostream>

using namespace std;

int main() {
    int a, b, i, k = 0, sum = 0;
    for (i = 0; i < 7; ++i) {
        cin >> a >> b;
        if (a + b > 8 && a + b > sum) {
            k = i + 1;
            sum = a + b;
        }
    }
    cout << k;
    return 0;
}
