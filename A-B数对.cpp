#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
const int MAXN = 200010;
ll a[MAXN];

//返回>=x第一个位置
int lower(ll x, int n)
{
    int l = 0, r = n;
    while(l < r)
    {
        int mid = (l + r) / 2;
        if(a[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}
//返回>x第一个位置
int upper(ll x, int n)
{
    int l = 0, r = n;
    while(l < r)
    {
        int mid = (l + r) / 2;
        if(a[mid] > x)
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int cmp(const void *p1,const void *p2)
{
    ll x=*(ll*)p1;
    ll y=*(ll*)p2;
    if(x<y)return -1;
    if(x>y)return 1;
    return 0;
}

int main()
{
    int n;
    ll c;
    scanf("%d%lld",&n,&c);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    qsort(a,n,sizeof(ll),cmp);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll target=a[i]+c;
        int l=lower(target,n);
        int r=upper(target,n);
        ans += r-l;
    }
    printf("%lld\n",ans);
    return 0;
}
