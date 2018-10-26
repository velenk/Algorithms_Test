#include <iostream>

using namespace std;

int num[3];
int price[3];

int main() {
    int i, n, cost, min = 1e8;
    cin >> n;
    for (i = 0; i < 3; ++i) {
        cin >> num[i] >> price[i];
        cost = ((n - 1) / num[i] + 1) * price[i];
        if (cost < min) {
            min = cost;
        }
    }
    cout << min << endl;
    return 0;
}
