#include <cstdio>

int x1[10010], y1[10010], x2[10010], y2[10010];

int n;
int x0, y0, res;

int Check(int i) {
    if (x1[i] <= x0 && x0 <= x1[i]+x2[i]) {
        if (y1[i] <= y0 && y0 <= y1[i]+y2[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d%d%d%d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    scanf("%d%d", &x0, &y0);
    res = -1;
    for (int i=n-1; i>=0; i--) {
        if (Check(i) ) {
            res = i+1;
            break;
        }
    }
    printf("%d\n", res);
    return 0;
}
