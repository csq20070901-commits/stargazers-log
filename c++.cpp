//多项式输出
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[105];
    for(int i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    int first=1;
    for(int i=0;i<=n;i++)
    {
        int coe=a[i];
        int exp=n-i;
        if(coe==0)continue;
    
    if(first)
    {
        if(coe<0)printf("-");
        first=0;
    }
        else
        {
            if(coe>0)
                printf("+");
            else
                printf("-");
        }
    
    int abs_c=coe>0?coe:-coe;
    if(exp==0)
    {
        printf("%d",abs_c);
    }
    else
    {
        if(abs_c!=1)
        
            printf("%d",abs_c);
        printf("x");
            if(exp>1)
                printf("^%d",exp);
        
        }
    }
    return 0;
}
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
