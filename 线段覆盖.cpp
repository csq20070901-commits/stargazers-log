#include<bits/stdc++.h>
using namespace std;
const int N=1000010;

struct Node{
	int l,t;
}a[N];
bool cmp(Node x,Node y) 
{
	return x.t<y.t;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i].l,&a[i].t);
	}
	sort(a+1,a+1+n,cmp);
	int cnt=0;
	int last=-1;
	for(int i=1;i<=n;i++)
	{
		if(a[i].l>=last)
		{
			cnt++;
			last=a[i].t;
		}
	}
	printf("%d",cnt);
	return 0;
    
}
