#include <iostream>
using namespace std;

long long MaxFactor(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    long long p = a % b;
    a = b;
    b = p;
    return MaxFactor(a, b);
}

int main() {
    long long m, k;
    cin >> m >> k;
    if (MaxFactor(m, k) != 1) {
        cout << "Let's go Blue Jays!" << endl;
    } else {
        bool s[m+3] = { };
        int i, j;
        for (i = 2; i <= m; ++i) {
            if (s[i] == true) {
                continue;
            }
            if (m % i == 0) {
                for (j = 2 * i; j <= m; j += i) {
                    s[j] = true;
                }
            }
        }
        int count; 
        for (i = 1; i <= m; ++i) {
            if (s[i] == false) {
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}
