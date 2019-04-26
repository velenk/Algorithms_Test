#include <iostream>

typedef unsigned long long ll;

using namespace std;

int main() {
    ll n;
    cin >> n;
    cout << n * (n-1) /2 * (n-2)/3 * (n-3)/4;
    return 0;
}
