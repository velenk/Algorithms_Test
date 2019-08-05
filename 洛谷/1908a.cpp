#include <cstdio>
#include <algorithm>

#define LL long long

using namespace std;

class Node {
public:
    int val, index;
};

Node a[500010];
int n;
int ans[500010],c[500010];
LL res;

int lowbit(int x) {
    return x&(-x);
}

void update(int x) {
    for (int i = x; i <= n; i+=lowbit(i)) {
        c[i]+=1;
    }
}

int sum(int x) {
    int s = 0;
    for (int i = x;i>0;i-=lowbit(i)) {
        s+=c[i];
    }
    return s;
}

int cmp(Node a, Node b) {
    return a.val > b.val;
}

int cmp1(Node a, Node b) {
    return a.index < b.index;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i].val);
        a[i].index = i;
    }
    sort(a+1,a+n+1,cmp);
    for (int i = 1; i <= n; i++) {
        update(a[i].index);
        ans[a[i].index] += sum(a[i].index-1);
        res += ans[a[i].index];
    }
    printf("%lld\n", res);
    return 0;
}
