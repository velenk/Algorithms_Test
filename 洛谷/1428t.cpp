#include<cstdio>
#include<algorithm>
using namespace std;
int n;
struct node
{
    int val,index;
}a[101];
bool cmp(node a,node b)
{
    return a.val>b.val;
}
bool cmp1(node a,node b)
{
    return a.index<b.index;
}
int c[10001],ans[101];
int lowbit(int x)
{
    return x&(-x);
}
void update(int x,int val)
{
    for(int i=x;i<=n;i+=lowbit(i))
        c[i]+=1;
}
int getsum(int x)
{
    int tp=0;
    for(int i=x;i>0;i-=lowbit(i))
        tp+=c[i];
    return tp;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        scanf("%d",&a[i].val),a[i].index=i;
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;++i)
    {
        update(a[i].index,1);
        ans[a[i].index]=getsum(a[i].index-1);
    }
    sort(a+1,a+1+n,cmp1);
    for(int i=1;i<=n;++i)
        printf("%d ",i-ans[i]-1);
}
