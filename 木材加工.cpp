#include<stdio.h>
typedef long long ll;
#define MAXN 100005
ll a[MAXN];
int n;
ll k;
int check(ll mid)
{
    if(mid==0)
        return 1;
    ll cnt =0;
    for(int i=0;i<n;i++)
    {
        cnt+=a[i]/mid;
        if(cnt>=k)
        return 1;
    }
    return cnt>=k;

}
int main()
{
    scanf("%d%lld",&n,&k);
    ll maxl=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>maxl)
            maxl=a[i];
        sum+=a[i];
    }
    if(sum<k)
    {
        printf("0\n");
        return 0;
    }
    ll l=1,r=maxl;
    ll ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    printf("%lld",ans);
    return 0;
}