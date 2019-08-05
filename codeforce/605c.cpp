#include <cstdio>
#include <cmath>
#include <algorithm>
#define eps 1e-8

using namespace std;

class Point
{
public:
    double x, y;
    Point(const double &x0 = 0, const double &y0 = 0) : x(x0), y(y0) { }
};

double Cross (const Point &a, const Point &b, const Point &c, const Point &d)
{
    return (b.x-a.x) * (d.y-c.y) - (b.y-a.y) * (d.x-c.x);
}

bool cmp (Point &a, Point &b)
{
    double x = Cross(Point(), a, Point(), b);
    if(x>0) return 1;
    if(fabs(x) < eps && a.x < b.x) return 1;
    return 0;
}

Point P[100010];
Point K[100010];

double Max(double a, double b)
{
    return a>b?a:b;
}

int main ()
{
    int n;
    double p, q;
    scanf("%d%lf%lf", &n, &p, &q);
    int maxp = 0, maxq = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf%lf", &P[i].x, &P[i].y);
        maxp = Max(P[i].x, maxp);
        maxq = Max(P[i].y, maxq);
    }
    P[0].x = maxp;
    P[0].y = 0;
    P[n+1].x = 0;
    P[n+1].y = maxq;
    sort(P+1, P+n+1, cmp);
    int now;
    K[0] = P[0];
    int k = 2;
    K[1] = P[1];
    for (int i = 2; i <= n+1; i++)
    {
        while (k >= 2 && Cross(K[k-2], K[k-1], K[k-2], P[i]) <= 0) k--;
        K[k] = P[i];
        k++;
        
    }
    for (int i = 0; i <= k; i++)
    {
        if (Cross(Point(), Point(p, q), Point(), K[i]) > 0)
        {
            now = i;
            break;
        }
    }
    /*
    for (int i = 0; i <= n+1; i++)
    {
        printf("%d %d %d\n", i, P[i].x, P[i].y);
    }
    for (int i = 0; i <= k; i++)
    {
        printf("%d %d %d\n", i, K[i].x, K[i].y);
    }
    */
    double p1, p2, q1, q2;
    double x, y, sum;
    {
        p1 = K[now-1].x;
        q1 = K[now-1].y;
        p2 = K[now].x;
        q2 = K[now].y;
        
        //printf("%d %d %d %d %d\n", now, p1, q1, p2, q2);
        
        y = (p1*q-p*q1)/(p1*q2-p2*q1);
        x = (p2*q-p*q2)/(p2*q1-p1*q2);
        sum = x + y;
        //printf("%lf %lf", x, y);
    }
    printf("%.8lf", sum);
    return 0;
}
