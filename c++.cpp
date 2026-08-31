//多项式输出
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[105];
    for(int i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    int first=1;
    for(int i=0;i<=n;i++)
    {
        int coe=a[i];
        int exp=n-i;
        if(coe==0)continue;
    
    if(first)
    {
        if(coe<0)printf("-");
        first=0;
    }
        else
        {
            if(coe>0)
                printf("+");
            else
                printf("-");
        }
    
    int abs_c=coe>0?coe:-coe;
    if(exp==0)
    {
        printf("%d",abs_c);
    }
    else
    {
        if(abs_c!=1)
        
            printf("%d",abs_c);
        printf("x");
            if(exp>1)
                printf("^%d",exp);
        
        }
    }
    return 0;
}