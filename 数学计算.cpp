#include<iostream>
#include<algorithm>
#include<cstring>
#define MAX 1050
using namespace std;
int f[MAX];
int main()
{
    int n;
    scanf("%d",&n);
    f[1]=1;
    for(int x=2;x<=n;x++)
    {
        f[x]=1;
        for(int i=1;i<=x/2;i++)
        {
            f[x]+=f[i];
        }
    }
    printf("%d",f[n]);
    return 0;
}