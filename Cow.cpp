#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int main()
{
    char s[35];
    ll n,len;
    scanf("%s%lld",s,&n);
    ll base=strlen(s);
    len=base;
    while(len<n)
    {
        len*=2;
    }
    while(len>base)
    {
        ll half=len/2;
        if(n>half)
        {
            if(n==half+1)
                n=half;
            else
                n=n-half-1;
        }
        len=half;
    }
    printf("%c",s[n-1]);
    return 0;
}
