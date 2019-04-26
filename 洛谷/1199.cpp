#include <iostream>

using namespace std;

int p[1003][1003];

int main() {
    int n;
    cin >> n;
    int i, j;
    for (j = 1; j < n; j++) {
        for (i = j+1; i <= n; i++) {
            cin >> p[i][j];
            p[j][i] = p[i][j];
        }
    }
    int max1 = 0, max2 = 0, max0 = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (p[i][j] > max2) {
                max2 = p[i][j];
                if (max2 > max1) {
                    swap(max1, max2);
                }
            }
        }
        if (max2 > max0) {
            max0 = max2;
        }
        max1 = max2 = 0;
    }
    cout << 1 << endl << max0;
    return 0;
}
