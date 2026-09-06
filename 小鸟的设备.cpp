#include<stdio.h>
#include<math.h>
#define MAXN 100010
int a[MAXN],b[MAXN];
int n,p;
int check(double t)
{
    double sumneed=0;//统计所有设备一共所需要的电量
    for(int i=1;i<=n;i++)
    {
        double req=1.0*a[i]*t-b[i];
        if(req>0)
        {
            sumneed+=req;
        }
    }
    return sumneed<=p*t;
}
int main()
{
    scanf("%d%d",&n,&p);
    long long totalA=0;//累加所有电量的和
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        totalA+=a[i];
    }
    if(totalA<=p)
    {
        printf("-1\n");
        return 0;
    }
    double l=0,r=1e14;
    for(int iter=1;iter<=100;iter++)
    {
        double mid=(l+r)/2;
        if(check(mid))
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    printf("%.10lf",l);
    return 0;
}