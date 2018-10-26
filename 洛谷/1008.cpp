#include <iostream>
using namespace std;

bool a[9] = { };
int b[9] = { };

void DFS(int x) {
    int i;
    if (x >= 9) {
        int num = (b[0] * 10 + b[1]) * 10 + b[2];
        if ((b[3] * 10 + b[4]) * 10 + b[5] == 2 * num 
             && (b[6] * 10 + b[7]) * 10 + b[8] == 3 * num) {
                 for (i = 0; i < 9; ++i) {
                     cout << b[i];
                     if (i % 3 == 2) {
                         cout << " ";
                     }
                 }
                 cout << endl;
             }
    } else {
        for (i = 0; i < 9; ++i) {
            if (a[i] == false) {
                a[i] = true;
                b[x] = i + 1;
                DFS(x + 1);
                a[i] = false;
            }
        }
    }
    return;
}

int main() {
    DFS(0);
    return 0;
}
