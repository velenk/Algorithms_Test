#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#define ll long long int

using namespace std;

int c[200000];
int s[200000];
ll n;

int CMP(ll k)
{
    for (int i = 1; i+k<=n; i++)
    {
        if (c[i] < c[k+i])
        {
            return 1;
        }
        else if (c[i] > c[k+i])
        {
            return -1;
        }
    }
    return 0;
}

void Print(ll k)
{
    ll n1 = k;
    ll n2 = n;
    int ans = 0;
    int i = 0;
    while (i < n1 && i < n2-k)
    {
        int temp = c[n1-i] + c[n2-i] + ans;
        ans = temp /10;
        s[i] = temp%10;
        //cout << s[i] << endl;
        i++;
    }
    while (i < n1)
    {
        int temp = c[n1-i] + ans;
        ans = temp /10;
        s[i] = temp%10;
        i++;
    }
    while (i < n2-k)
    {
        int temp = c[n2-i] + ans;
        ans = temp /10;
        s[i] = temp%10;
        i++;
    }
    if (ans == 1)
    {
        s[i] = 1;
        i++;
    }
    i--;
    while (i >=0)
    {
        printf("%d", s[i]);
        i--;
    }
    return;
}

int main() 
{
    
    cin >> n;
    c[0] = 1;
    getchar();
    char ch;
    for (int i = 1; i<=n;i++) 
    {
        scanf("%c", &ch);
        int temp = ch-'0';
        c[i] = temp;
    }
    ll mid = n/2;
    ll r, l;
    if (n%2==0)
    {
        if (c[mid+1] != 0)
        {
            Print(mid);
        }
        else 
        {
            for (int i = 1; i <= mid; i++) 
            {
                l = mid-i;
                r = mid+i;
                //cout << l << " " << r;
                int res = CMP(l);
                if (c[r+1] == 0 && c[l+1] == 0)
                {
                    continue;
                }
                else if (c[r+1] == 0)
                {
                    Print(l);
                    break;
                }
                else if (c[l+1] == 0)
                {
                    Print(r);
                    break;
                }
                else
                {
                    if (res == 1)
                    {
                        Print(r);
                    }
                    else 
                    {
                        Print(l);
                    }
                    break;
                }
            }
        }
    }
    else 
    {
        for (int i = 1; i <= mid; i++) 
        {
            l = mid-i+1;
            r = mid+i;
            //cout << l << " " << r;
            int res = CMP(l);
            if (c[r+1] == 0 && c[l+1] == 0)
            {
                continue;
            }
            else if (c[r+1] == 0)
            {
                Print(l);
                break;
            }
            else if (c[l+1] == 0)
            {
                Print(r);
                break;
            }
            else
            {
                if (res == 1)
                {
                    Print(r);
                }
                else 
                {
                    Print(l);
                }
                break;
            }
        }
    }
    return 0;
}
