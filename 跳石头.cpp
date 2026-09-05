#include<stdio.h>
#define MAXN 50010
int  rock [MAXN];
int L,N,M;
int check(int mid)
{
    int last=0;
    int remove=0;
    for(int i=1;i<=N;i++)
    {
        if(rock[i]-last<mid)
        {
            remove++;
        }
        else
        {
            last=rock[i];
        }
    }
    return remove<=M;
}
int main()
{
    scanf("%d%d%d",&L,&N,&M);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&rock[i]);
    }
    int l=1,r=L;
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    printf("%d\n",ans);
    return 0;
}