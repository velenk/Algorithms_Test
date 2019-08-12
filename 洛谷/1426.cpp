#include <cstdio>

int x, s;

int main() {
    scanf("%d%d", &s, &x);
    double v = 7;
    double now = 0;
    while (now < s-x) {
        now += v;
        v *= 0.98;
    }
    if (now + v > s+x) {
        printf("n");
    } else {
        printf("y");
    }
    return 0;
}
