#include <cstdio>

typedef long long int ll;

ll w[25][25][25];
ll a, b, c;

ll Cal(ll a, ll b, ll c) {
    if (a<=0||b<=0||c<=0) return 1;
    if (a>20||b>20||c>20) return Cal(20, 20, 20);
    if (w[a][b][c] != 0) return w[a][b][c];
    if (a<b&&b<c) {
        w[a][b][c] = Cal(a,b,c-1)+Cal(a,b-1,c-1)-Cal(a,b-1,c);
    } else {
        w[a][b][c] = Cal(a-1,b,c)+Cal(a-1,b-1,c)+Cal(a-1,b,c-1)-Cal(a-1,b-1,c-1);
    }
    return w[a][b][c];
}

int main(){
    while(scanf("%lld%lld%lld", &a, &b, &c)){
        if (a==-1&&b==-1&&c==-1) break;
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, Cal(a, b, c));
    }
    return 0;
}
