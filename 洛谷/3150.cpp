#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
    int n;
    cin >> n;
    if (n % 2) {
        cout << "zs wins" << endl;
    } else {
        cout << "pb wins" << endl;
    }
    }
    return 0;
}
