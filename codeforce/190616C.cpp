#include<iostream>
#include<cstring>
#include<cstdio>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<algorithm>
#define maxn 2750132
#define lowbit(x) x&(-x)
#define pi pair<int,int>
#define md 1000000007
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
int n,m;
char a[1005][1005];
int dwn[1005][1005],len[1005][1005];
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%s",a[i]+1);
	for(int i=n;i>=1;i--)
	for(int j=1;j<=m;j++)
	if(i<n&&a[i][j]==a[i+1][j])dwn[i][j]=dwn[i+1][j]+1;
	else dwn[i][j]=1;
	ll ans=0;
	ll tmp=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i+2*dwn[i][j]<=n&&dwn[i+dwn[i][j]][j]==dwn[i][j]&&dwn[i+2*dwn[i][j]][j]>=dwn[i][j])
			len[i][j]=dwn[i][j];
			if(j==1)
			{
				if(len[i][j])tmp=1;else tmp=0;
				continue;
			}
			if(len[i][j]&&len[i][j]==len[i][j-1]&&i+2*len[i][j]<=n&&a[i][j]==a[i][j-1]&&a[i+len[i][j]][j]==a[i+len[i][j]][j-1]&&a[i+2*len[i][j]][j]==a[i+2*len[i][j]][j-1])tmp++;
			else
			{
				ans=ans+tmp*(tmp+1ll)/2;
				if(len[i][j])tmp=1;else tmp=0;
			}
		}
		ans=ans+tmp*(tmp+1ll)/2;
		tmp=0;
	}
	printf("%lld\n",ans);
}
