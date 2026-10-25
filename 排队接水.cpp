#include<bits/stdc++.h> 
using namespace std;

const int N=10005;

struct Node{
	int t,id;
	
}a[N];


bool cmp(Node x,Node y)
{
	if(x.t!=y.t)
	return x.t<y.t;
	return x.id<y.id; 
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].t;
		a[i].id=i;
	}
	sort(a+1,a+1+n,cmp);
	//输出排队顺序;
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i].id);
	}
	printf("\n");
	long long sum=0;
	long long pre=0;
	for(int i=1;i<=n;i++)
	{
		sum+=pre;
		pre+=a[i].t; 
	}
	double avg=1.0*sum/n;
	printf("%.2f",avg);
	return 0;
}