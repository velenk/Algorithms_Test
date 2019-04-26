#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        if (m%6) {
            cout << "October wins!" << endl;
        } else {
            cout << "Roy wins!" << endl;
        }
    }
    return 0;
}
