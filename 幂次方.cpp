#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void dfs(int n)
{
    int first=1;//写程序+的位置
    for(int i=14;i>=0;i--)
    {
        if(1<<i<=n)
        {
            if(!first)
            printf("+");
            first=0;    
        
        if(i==0)
        {
            printf("2(0)");
        }
        else if(i==1)
        {
            printf("2");
        }
        else
        {
            printf("2(");
            dfs(i);
            printf(")");
        }
        n-=(1<<i);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    dfs(n);
    return 0;
}