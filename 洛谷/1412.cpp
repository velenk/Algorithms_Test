#include <iostream>

using namespace std;

int main() {
    int k;
    long long s, n;
    cin >> k >> n;
    s = 0;
    for (long long i = 0; i < n; ++i) {
        if ((i + k) % 7 != 0 
            && (i + k) % 7 != 6) {
            s += 250;
        }
    }
    cout << s;
    return 0;
}
