//数列分段#贪心 二分 前缀和#
#include<stdio.h>
#define N 100010
int a[N];   
int n,m;

int check(long long limit)
{
    int cnt=1;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        if(sum+a[i]>limit)
        {
            cnt++;
            sum=a[i];
        }
        else
        {
            sum+=a[i];
        }
    }
    return cnt<=m;
}

int main()
{
    scanf("%d%d",&n,&m);
    long long l=0,r=0; 
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>l)
            l=a[i];
        r+=a[i];
    }
    while(l<r)
    {
        long long mid=l+(r-l)/2; 
        if(check(mid))
            r=mid;
        else
            l=mid+1;
    }
    printf("%lld",l);
    return 0;
}
