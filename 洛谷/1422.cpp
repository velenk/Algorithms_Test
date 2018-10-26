#include <iostream>
#include <cstdio>
using namespace std;

double x = 0.4463;
double y = 0.4663;
double z = 0.5663;

int main() {
    int a;
    double sum;
    cin >> a;
    if (a < 150) {
        sum = a * x;
    } else if (a <= 400) {
        sum = 150 * x + (a - 150) * y;
    } else {
        sum = 150 * x + 250 * y + (a - 400) * z;
    }
    printf("%.1lf", sum);
    return 0;
}
