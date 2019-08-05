#include <cstdio>

int l, r, L, m;
int a[10010];

int main() {
    scanf("%d%d", &L , &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d", &l, &r);
        a[l]++;
        a[r+1]--;
    }
    
    int now = 0, ans = 0;
    
    for (int i = 0; i <= L; i++) {
        now += a[i];
        if (now == 0) {
            ans++;
        }
    }
    
    printf("%d", ans);
    
    return 0;
}
