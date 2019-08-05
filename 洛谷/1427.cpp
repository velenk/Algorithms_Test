#include <cstdio>

#define INF 100000000

int a[10010];

int Max(int a, int b) {
    return a<b? b: a;
}

int main() {
    int t;
    scanf("%d", &t);
    int last = INF;
    int now = 0;
    int maxi = 0;
    int ans = 0;
    for (int i = 0; i < t ;i++) {
        scanf("%d", &now);
        if (now > last) {
            ans++;
        } else {
            ans = 0;
        }
        last = now;
        maxi = Max(maxi, ans);
    }
    printf("%d", maxi+1);
    return 0;
}
