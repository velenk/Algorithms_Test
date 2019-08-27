#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

class Node{
public:
    int id;
    int score;
};

int n, k;
Node a[20050];
int e[15];

int cmp(Node x, Node y) {
    if (x.score == y.score) return x.id < y.id;
    return x.score > y.score;
}

int main() {
    scanf("%d%d", &n, &k);
    
    for (int i=1; i<=10; i++) {
        scanf("%d", &e[i]);
    }
    
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i].score);
        a[i].id = i;
    }
    
    sort(a+1, a+n+1, cmp);
    
    for (int i=1; i<=n; i++) {
        a[i].score += e[ ((i -1) % 10) +1 ];
    }
    
    sort(a+1, a+n+1, cmp);
    
    for (int i=1; i<=k; i++) {
        printf("%d ", a[i].id);
    }
    
    return 0;
}

