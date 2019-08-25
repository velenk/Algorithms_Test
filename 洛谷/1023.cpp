#include <cstdio>
#include <cmath>
#include <algorithm>

#define MAXN 100010

using namespace std;

int s[MAXN];
int maxv, minv, ev, cost, loss;
int a, b, now, x;

int main() {
    scanf("%d", &ev);
    while (1) {
        scanf("%d%d", &a, &b);
        if (a == b && b == -1) break;
        
        if (cost == 0) {
            cost = a;
            s[cost] = b;
            now = cost;
        } else {
            for (int i=now+1; i<=a; i++) {
                s[i] = (b - s[now]) * (i-now) / (a-now) + s[now];
            }
            now = a;
        }
    }
    scanf("%d", &loss);
    while (s[now]>0) {
        now++;
        s[now] = s[now-1] - loss;
    }
    
    //for (int i=cost; i<now; i++) printf("v %d s %d\n", i, s[i]);
    //printf("%d\n", s[ev]);
    maxv = 100000000;
    for (int i=cost; i<ev; i++) {
        //if (i == ev-1) printf("%d\n", ((i-cost)*s[i] - (ev-cost)*s[ev]-1));
        x = ((i-cost)*s[i] - (ev-cost)*s[ev]-1) / (s[ev] - s[i]) +1;
        if (x < 0) x = (-(i-cost)*s[i] + (ev-cost)*s[ev]+1) / (s[i] - s[ev]) -1;
        maxv = min(maxv, x);
        //printf("max %d\n", maxv);
        //if (x > -50 && x < 0) printf("min %d v %d\n", maxv, i);
    }
    minv = -100000000;
    for (int i=ev+1; i<=now; i++) {
        x = ((i-cost)*s[i] - (ev-cost)*s[ev]-1) / (s[ev] - s[i]) +1;
        if (x < 0) x = ((i-cost)*s[i] - (ev-cost)*s[ev]+1) / (s[ev] - s[i]) -1;
        minv = max(minv, x);
        //if (x > -100) printf("min %d v %d\n", minv, i);
    }
    
    if (minv > maxv) {
        printf("NO SOLUTION\n");
    } else {
        if (minv > 0) {
            printf("%d\n", minv);
        } else if (maxv < 0) {
            printf("%d\n", maxv);
        } else {
            printf("0\n");
        }
    }
    //printf("%d", (-200+1)/10-1);
    return 0;
}
