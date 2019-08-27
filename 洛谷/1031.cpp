#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int n, sum, cnt, maxc;
int a[200];

int main() {
    scanf("%d", &n);
    
    sum = 0;
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    sum = sum/n;
    
    for (int i=0; i<n; i++) {
        if (a[i] == sum) continue;
        int temp = a[i] - sum;
        a[i+1] += temp;
        cnt ++;
    }
    printf("%d\n", cnt);
    return 0;
}
