#include<iostream>
#include<algorithm>
#include<cstring>
#define LEN 2000
int a[LEN]={0};
int b[LEN]={0};
int c[LEN]={0};

void add(int x[],int y[],int res[])
{
    int carry=0;
    for(int i=0;i<LEN;i++)
    {
        int sum = x[i]+y[i]+carry;
        res[i]=sum%10;
        carry=sum/10;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n==1){printf("1");return 0;}
    if(n==2){printf("2");return 0;}
    a[0]=1; //f[1]
    b[0]=2; //f[2]
    for(int i=3;i<=n;i++)
    {
        add(a,b,c);
        //滚动数组更新
        for(int j=0;j<LEN;j++) a[j]=b[j];
        for(int j=0;j<LEN;j++) b[j]=c[j];
    }
    //输出，跳过前导0
    int pos=LEN-1;
    while(pos>0 && b[pos]==0) pos--;
    for(int i=pos;i>=0;i--)
        printf("%d",b[i]);
    return 0;
}
