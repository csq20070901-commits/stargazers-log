#include<stdio.h>
#define MAXN 100010
int pos[MAXN];
int L,N,K;
int check(int mid)
{
    int need=0;
    for(int i=1;i<N;i++)
    {
        int d=pos[i]-pos[i-1];
        if(d>mid)
        {
            need+=(d-1)/mid; 
        }
    }
    return need<=K;
}
int main()
{
    scanf("%d%d%d",&L,&N,&K);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&pos[i]);
    }
    int l=1,r=L;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    printf("%d",l);
    return 0;
}
