#include <cstdio>

int m, n;
int a[1010];
int b[1010];
int cnt, res;
int now;

int main() {
    scanf("%d%d", &m, &n);
    int temp;
    res = 0;
    now = 0;
    for (int i=0; i<m; i++){
        b[i] = -1;
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &temp);
        if (a[temp] == 1) continue;
        
        res++;
        if (b[now] != -1) {
            a[ b[now] ] = 0;
        }
        a[temp] = 1;
        b[now] = temp;
        now = (now + 1) % m;
    }
    printf("%d\n", res);
    return 0;
}
