#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
int a[100010];

/*
void Solve(int l, int r) {
    //printf("\n\nl,r %d %d\n", l, r);
    //for (int i=1; i<=n; i++) printf("%d ", a[i]);
    if (l >= r) return;
    int i = l, j = r;
    int pivot = a[l];
    while (i < j) {
        while (a[j] >= pivot && i < j) j--;
        while (a[i] <= pivot && i < j) i++;
        
        //printf("%d %d\n", i, j);
        if (i == j) {
            swap(a[i], a[l]);
        } else {
            swap(a[i], a[j]);
        }
    }
    Solve(l, j-1);
    Solve(i+1, r);
    return;
}
*/

int cmp (int a, int b) {
    return a<b;
}

void Solve(int i, int j) {
    sort(a+i, a+j+1, cmp);
}

int main() {
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
        //a[i] = n-i+1;
    }
    int l = 1, r = n;
    Solve(l, r);
    
    for (int i=1; i<=n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

