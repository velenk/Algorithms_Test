#include <cstdio>
#include <cmath>

int n;
int a[30];
int cnt;
int k;

inline int isPrime(int n) {
    if (n<2) return 0;
    int t = (int)sqrt(n);
    for (int i = 2; i <=t; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}

void Solve(int start, int sum, int num) {
    if (num == k) {
        if (isPrime(sum)) {
            cnt++;
        }
        return;
    }
    for (int i = start; i<=n-k+num; i++) {
        Solve(i+1,sum+a[i],num+1);
    }
    return;
}

int main() {
    
    scanf("%d%d",&n,&k);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    cnt=0;
    Solve(0,0,0);
    printf("%d\n",cnt);
    
    return 0;
}
