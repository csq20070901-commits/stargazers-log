#include<iostream>
#include<algorithm>
#include<cstring>
#define MOD 10000
#define MAXN 1000010
long long f[MAXN], g[MAXN];
int main()
{
    int n;
    scanf("%d",&n);
    f[0]=1; f[1]=1;
    g[0]=0; g[1]=1;
    for(int i=2;i<=n;i++)
    {
        f[i] = ( f[i-1] + f[i-2] + 2 * g[i-2] ) % MOD;
        g[i] = ( f[i-1] + g[i-1] ) % MOD;
    }
    printf("%lld",f[n]);
    return 0;
}
