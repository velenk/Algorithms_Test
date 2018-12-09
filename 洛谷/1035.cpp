#include <iostream>

using namespace std;

int main() {
    int k;
    double s, i;
    i = 1;
    s = 0;
    cin >> k;
    while (s <= k) {
        s += 1/i;
        i++;
    }
    cout << (int)(i-1);
    return 0;
}
