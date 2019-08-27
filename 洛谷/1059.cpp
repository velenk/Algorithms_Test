#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
int a[1010];

int main() {
    scanf("%d", &n);
    int res = 0;
    int temp;
    for (int i=1; i<=n; i++) {
        scanf("%d", &temp);
        if (a[temp] == 0) res++;
        a[temp]++;
    }
    
    printf("%d\n", res);
    for (int i=0; i<1010; i++) {
        if (a[i] != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

