#include <cstdio>
#include <cmath>

int n;
int a[1010];
int cnt;
int k;

int Solve(int now) {
    if (a[now] > 0) {
        return a[now];
    }
    int temp = 1;
    for (int i = 1; i <= now/2; i++) {
        temp += Solve(i);
    }
    a[now] = temp;
    return temp;
}

int main() {
    
    scanf("%d",&n);
    cnt = Solve(n);
    printf("%d\n",cnt);
    
    return 0;
}
