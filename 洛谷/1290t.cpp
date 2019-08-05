#include <cstdio>
#include <iostream>
#include <cmath>
#define LL long long

using namespace std;

int a[100][100];
LL t, n, m;
int flag;

int main() {
    scanf("%lld", &t);
    while(t--) {
        flag = 1;
        scanf("%lld%lld", &n, &m);
        while (1) {
            if (n == m) {
                break;
            }
            if (n < m) {
                LL tem = n;
                n = m;
                m = tem;
            }
            if (n/m > 1) {
                break;
            }
            flag = !flag;
            n = n%m;
        }
        if (flag) {
            printf("Stan wins\n");
        } else {
            printf("Ollie wins\n");
        }
    }
    return 0;
}
