#include <iostream>
using namespace std;

long long Get(long long min,long long max,int a, int b) {
    long long sum1, sum2;
    if (max - min == 0) {
        return 0;
    } else if (max - min == 1) {
        return a;
    } else if (max - min == 2) {
        return a + b;
    }
    long long mid = (max + min) / (a + b) * b;
    sum1 = Get(min, mid, a, b) + a;
    sum2 = Get(mid + 1, max, a, b) + a;
    if (sum1 < sum2) {
        return sum2;
    } else {
        return sum1;
    }
}

int main() {
    int a, b;
    long long t, n;
    cin >> a >> b >> t;
    int i;
    for (i = 0; i < t; ++i) {
        cin >> n;
        long long sum = Get(1, n, a, b);
        cout << sum << endl;
    }
    return 0;
}
