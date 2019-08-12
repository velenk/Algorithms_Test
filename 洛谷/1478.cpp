#include <cstdio>
#include <algorithm>

using namespace std;

int n, s, a, b;
int cnt;
class Node{
public:
    int x;
    int y;
};

Node ap[5050];

int cmp(Node a, Node b){
    return a.y<b.y;
}

int main() {
    scanf("%d%d%d%d", &n, &s, &a, &b);
    b = a+b;
    for (int i = 0; i<n; i++) {
        scanf("%d%d", &ap[i].x, &ap[i].y);
    }
    sort(ap, ap+n, cmp);
    cnt = 0;
    for (int i=0; i<n; i++){
        if (ap[i].x > b) continue;
        if (ap[i].y > s) break;
        s -= ap[i].y;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}



