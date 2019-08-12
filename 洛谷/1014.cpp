#include <cstdio>
#include <cmath>

int n;

int main() {
    scanf("%d", &n);
    int sq = (int)sqrt(n);
    while (sq*(sq-1)/2 < n) sq++;
    sq--;
    n -= sq*(sq-1)/2;
    sq++;
    int a, b;
    if (sq%2 == 1) {
        a = n;
        b = sq-a;
    } else {
        b = n;
        a = sq-b;
    }
    printf("%d/%d", a, b);
    return 0;
}
