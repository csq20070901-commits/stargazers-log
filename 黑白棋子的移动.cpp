#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
char s[210];
int n;
void print()
{
    printf("%s\n",s);
}
void move(int a)
{
    int pos =strstr(s, "--") -s;
    s[pos]=s[a];
    s[pos+1]=s[a+1];
    s[a]='-';
    s[a+1]='-';
    print();
}
void dfs(int x)
{
    if(x==4)
    {
        move(4);
        move(8);
        move(3);
        move(7);
        move(2);
        move(6);
        move(1);
        move(5);
        return ;
    }
    move(x-1);   // 修改这里！！x改成x-1
    move(2*x -1); // 修改这里！2*x改成2*x-1
    dfs(x-1);
}
int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s[i]='o';
    }
    for(i=n;i<2*n;i++)
    {
        s[i]='*';
    }
    s[2*n]='-';
    s[2*n+1]='-';
    s[2*n+2] = '\0';
    print();
    dfs(n);
    return 0;
}
