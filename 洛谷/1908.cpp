#include <cstdio>
#include <iostream>

#define MAXN 1000010
#define LL long long

using namespace std;

int a[MAXN], r[MAXN], n;
LL ans;

void Sort(int begin, int end) {
    int mid = (begin + end) / 2;
    if (begin == end) {
        return;
    }
    Sort(begin, mid);
    Sort(mid+1, end);
    int i1 = begin, i2 = mid+1;
    int k = begin;
    while (i1 <= mid && i2 <= end) {
        if (a[i1] <= a[i2]) {
            r[k++] = a[i1++];
        } else {
            ans += mid - i1 + 1;
            r[k++] = a[i2++];
        }
    }
    while (i1 <= mid) {
        r[k++] = a[i1++];
    }
    while (i2 <= end) {
        r[k++] = a[i2++];
    }
    for (int i = begin; i <= end; i++) {
        a[i] = r[i];
    }
    return;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    Sort(1, n);
    printf("%lld", ans);
    return 0;
}
