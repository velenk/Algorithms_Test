#include <iostream>

using namespace std;

int main() {
    int i;
    int spend[12];
    for (i = 0; i < 12; ++i) {
        cin >> spend[i];
    }
    int cash = 300;
    int plan, sum = 0;
    int flag = 0;
    for (i = 0; i < 12; ++i) {
        plan = cash - spend[i];
        if (plan < 0) {
            flag = i + 1;
            break;
        }
        sum += plan / 100 * 100;
        cash = plan % 100 + 300;
    }
    if (flag != 0) {
        cout << flag * -1;
    } else {
        cout << cash + 6 * sum / 5 - 300;
    }
}
