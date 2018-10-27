#include <iostream>
#include <deque>

using namespace std;

int main() {
    int i, n, x;
    deque<int> Q;
    cin >> n;
    int num[n];
    for (i = 0; i < n; ++i) {
        cin >> num[i];
    }
    for (i = n-1; i >= 0; --i) {
        if (i < n-1) {
            x = Q.back();
            Q.push_front(num[i]);
            if (i != 0) {
                Q.pop_back();
                Q.push_front(x);
            }
        } else {
            Q.push_front(num[i]);
        }
    }
    while (!Q.empty()) {
        cout << Q.front() << " " ;
        Q.pop_front();
    }
    return 0;
}
