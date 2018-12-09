#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char s[100];

int Mini(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int Resize(int now, int a) {
    if (now % a == 0) {
        return now;
    } else {
        now = now / a * a + a;
        return now;
    }
}

void Output(int k, int p) {
    int flag = 0;
    if (p > 0) {
        flag = 1;
    }
    int maxi = 0;
    int now = 0;
    int size;
    for (int i = 0; i < k; ++i) {
        scanf("%s", &s);
        if (s[0] == 'B') {
            size = 1;
        } else if (s[0] == 'W') {
            size = 2;
        } else if (s[0] == 'D') {
            size = 4;
        } else if (s[0] == 'Q') {
            size = 8;
        }
        now += size;
        if (flag) {
            size = Mini(size, p);
        }
        now = Resize(now, size);
        if (size > maxi) {
            maxi = size;
        }
    }
    if (flag) {
        maxi = p;
    }
    now = Resize(now, maxi);
    printf("%d\n", now);
    return;
}

int main() {
    int n;
    int k;
    int p;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &k, &p);
        Output(k, p);
    }
    return 0;
}
