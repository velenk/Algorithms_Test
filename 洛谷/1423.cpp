#include <iostream>

using namespace std;

int main() {
    int i;
    double sum, s, n;
    const double k = 0.98;
    cin >> n;
    i = 0;
    sum = 0;
    s = 2;
    while (sum < n) {
        sum += s;
        i++;
        s *= k;
    }
    cout << i;
    return 0;
}
