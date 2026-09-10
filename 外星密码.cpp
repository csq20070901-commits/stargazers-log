#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define MAX 20005
void expend (char buf[])
{
    char c;//存放临时字符
    char sub[MAX];//存放[]里面的字符
    int sum;//循环多少次
    buf [0]='\0';//初始化空字符串
    while(scanf("%c",&c)==1)
    {
      
        if(c=='[')
        {
        scanf("%d",&sum);
        expend(sub);
            for(int i=0;i<sum;i++)
            {
                strcat(buf,sub);
            }
        }
        else if(c==']')
        {
            return;
        }
        else
        {
            int len=strlen(buf);
            buf[len]=c;
            buf[len+1]='\0';
        }
    }
}
int main()
{
    char str[MAX];
    expend(str);
    printf("%s\n",str);
    return 0;
}