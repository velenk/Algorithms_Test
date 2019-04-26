#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c;
    int x, y;
    cin >> a >> b >> c;
    if (a>b) swap(a, b);
    if (b>c) swap(b, c);
    if (a>b) swap(a, b);
    if (b-a == 1 && c-b == 1) {
        cout << "JMcat Win" << endl;
    } else if (a == 0 && c == n-1 && b == 1) {
        cout << "JMcat Win" << endl;
    } else if (a == 0 && c == n-1 && b == n-2) {
        cout << "JMcat Win" << endl;
    } else {    
        if (n%2 == 0) {
            cout << "JMcat Win" << endl;
        } else {
            cout << "PZ Win" << endl;
        }
    }
    
    return 0;
}
