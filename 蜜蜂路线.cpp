#include<stdio.h>
#define LEN 1000
int f[1005][LEN];
void add(int a,int b,int c)
{
    int carry=0;
    for(int i=0;i<LEN;i++)
    {
        int sum=f[b][i]+f[c][i]+carry;
        f[a][i]=sum%10;
        carry=sum/10;
    }
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    f[m][0]=1;
    f[m+1][0]=1;
    for(int i=m+2;i<=n;i++)
    {
        add(i,i-1,i-2);
    }
    int pos=LEN-1;
    while(pos>0&&f[n][pos]==0)
        pos--;
    for(int i=pos;i>=0;i--)
    {
        printf("%d",f[n][i]);
    }
    return 0;
}
