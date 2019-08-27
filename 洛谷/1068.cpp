#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

class Node{
public:
    int id;
    int score;
};

int n, m;
Node a[5050];

int cmp(Node x, Node y) {
    if (x.score == y.score) return x.id < y.id;
    return x.score > y.score;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; i++) {
        scanf("%d%d", &a[i].id, &a[i].score);
    }
    
    sort(a, a+n, cmp);
    
    m = m*3/2;
    //printf("%d\n", m);
    int line = n;
    
    for (int i=0; i<n; i++) {
        if (a[i].score < a[m-1].score) {
            line = i;
            break;
        }
    }
    printf("%d %d\n", a[m-1].score, line);
    for (int i=0; i<line; i++) {
        printf("%d %d\n", a[i].id, a[i].score);
    }
    
    return 0;
}

