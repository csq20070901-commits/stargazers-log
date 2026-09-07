#include<stdio.h>
typedef long long ll;
ll dp[20];
int main()
{
    int n;
    scanf("%d",&n);
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i]=0;
        for(int j=0;j<i;j++)
        {
            dp[i]+=dp[j]*dp[i-1-j];
        }
    }
    printf("%lld",dp[n]);
        
    return 0;
}