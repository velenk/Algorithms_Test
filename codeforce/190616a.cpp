#include <iostream>
#include <cstdlib>
#include <cmath>
#define ll long long int

using namespace std;

int main() 
{
    ll x, y, z;
    ll n, m1, m2, m;
    cin >> x >> y >> z;
    n = (x+y)/z;
    m1 = z-x%z;
    m2 = z-y%z;
    if (m1 == z || m2 == z) 
    {
        m = 0;
    }
    else if (m1 > m2)
    {
        m = m2;
    }
    else 
    {
        m = m1;
    }
    if (x/z + y/z == n)
    {
        m = 0;
    }
    if (n == 0)
    {
        m = 0;
    }
    cout << n << " " << m << endl;
    return 0;
}
