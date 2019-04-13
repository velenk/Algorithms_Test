#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T) {
    if (T % 2) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
    cin >> T;
    }
    return 0;
}
