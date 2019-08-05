#include <cstdio>
#include <cmath>
#include <algorithm>

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
    return Cross(Point(), a, Point(), b) > 0;
}

Point p[100];

int main ()
{
    int cnt = 0;
    while (scanf("%lf%lf", &p[cnt].x, &p[cnt].y) != EOF)++cnt;
    sort(p+1, p+cnt, cmp);
    for (int i = 0; i < cnt; i++)
    {
        printf("(%.0lf,%.0lf)\n", p[i].x, p[i].y);
    }
    return 0;
}
