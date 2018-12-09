#include <iostream>

using namespace std;

int main() {
    int i, count = 0, n, k;
    cin >> n >> k;
    for (i = 1; i <= n; ++i) {
        int t = i;
        while (t) {
            if (t % 10 == k) {
                count++;
            }
            t /= 10;
        }
    }
    cout << count;
    return 0;
}
