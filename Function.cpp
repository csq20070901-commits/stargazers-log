#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
long long mem[21][21][21];

long long w(long long a,long long b,long long c)
{
    if(a<=0||b<=0||c<=0)
        return 1;
    if(a>20||b>20||c>20)
        return w(20,20,20);
    if(mem[a][b][c]!=-1)
        return mem[a][b][c];
    if(a<b&&b<c)
    {
        mem[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    }
    else{
        mem[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    }
    return mem[a][b][c];
}
int main()
{
    memset(mem,-1,sizeof(mem));
    long long a,b,c;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
    {
        if(a==-1&&b==-1&&c==-1)
            break;
        long long res=w(a,b,c);
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c);
    }
    return 0;
}
