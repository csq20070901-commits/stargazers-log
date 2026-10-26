#include<bits/stdc++.h>
using namespace std;
const int N=5005;
struct Apple{
	int x,y;
}a[N];
bool cmp(Apple p,Apple q)
{
	return p.y<q.y;
}
int main()
{
	int n,s;
	scanf("%d%d",&n,&s);
	int c,b;
	scanf("%d%d",&c,&b);
	int maxh=c+b;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i].x,&a[i].y);
		if(a[i].x>maxh)
		{
			a[i].y=10000;
		}
		
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		if(s>a[i].y)
		{
			s-=a[i].y;
			cnt++;
		}
		else
		{
			break;
		}
	}
	printf("%d\n",cnt); 
	return 0;
}