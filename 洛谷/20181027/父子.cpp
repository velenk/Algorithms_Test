#include <iostream>

using namespace std;

unsigned long long powerful(unsigned long long x, unsigned long long y, long long m) {
    unsigned long long result = 1;
    while (y > 0) {
        if (y & 1 == 1) {
            result = result * x % m;
        }
        x = x * x % m;
        y >>= 1;
    }
    return result;
}

int main() {
    unsigned long long t, n, num;
    long long x = 1e9 + 9;
    cin >> t;
    int i;
    for (i = 0; i < t; ++i) {
        cin >> n;
        num = powerful(n, n-1, x);
        cout << num << endl;
    }
    return 0;
}
