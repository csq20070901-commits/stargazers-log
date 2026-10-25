#include<bits/stdc++.h>
using namespace std;
const int N=100010;
long long a[N];
int main()
{
	int n;
	long long x;
	scanf("%d%lld",&n,&x);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);	
	}
	long long ans=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]+a[i+1]>x)
		{
			long long d=a[i]+a[i+1]-x;
			ans+=d;
			a[i+1]-=d;
		}
	}
	printf("%lld\n",ans);
	return 0;
}