#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define MAX 10005
int dp[MAX];
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    dp[0]=1;
    for(int i=1;i<=N;i++)
    {
        int w;
        scanf("%d",&w);
        for(int j=M;j>=w;j--)
        {
            dp[j]+=dp[j-w];
        }
    }
    printf("%d\n",dp[M]);
    return 0;
}
