#include <cstdio>
#include <algorithm>

using namespace std;

class Node {
public:
    int val, index;
};

Node a[1000];
int n;
int ans[1000],c[1000];

int lowbit(int x) {
    return x&(-x);
}

void update(int x) {
    for (int i = x; i <= n; i+=lowbit(i)) {
        c[i]+=1;
    }
    return;
}

int sum(int x) {
    int s = 0;
    for (int i = x;i>0;i-=lowbit(i)) {
        s+=c[i];
    }
    return s;
}

int cmp(Node c, Node b) {
    return c.val > b.val;
}

int cmp1(Node c, Node b) {
    return c.index < b.index;
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
        ans[a[i].index] = sum(a[i].index-1);
    }
    sort(a+1,a+n+1,cmp1);
    for (int i = 1; i <= n; i++) {
        printf("%d ",i-ans[i]-1);
    }
    return 0;
}
