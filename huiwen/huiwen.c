#include <stdio.h>
#include <string.h>
#include <math.h>
int ishuiwen(int n)
{
    int i=0;
    int x=n;
    char arr[99];
    while(n)
    {
        int a=n%10;
        arr[i]=a+'0';
        i++;
        n/=10;
    }
    arr[i]='\0';
    int len=strlen(arr);
    int sum=0;
    for(i=0;i<len;i++)
    {
        sum+=(arr[i]-'0')*pow(10,len-1-i);
    }
    if(sum==x)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int weishuhe(int n)
{
    int sum=0;
    while(n)
    {
        int a=n%10;
        sum+=a;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=10000;i<1000000;i++)
    {
        int ret = weishuhe(i);
        if(ret==n)
        {
            int x=ishuiwen(i);
            if(x==1)
            {
                printf("%d\n",i);
                count ++;
            }
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}