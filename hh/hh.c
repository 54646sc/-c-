#include <stdio.h>
#include <math.h>
#include <string.h>
int isprime(long long n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
        int i,limit = sqrt(n)+1;
        for(i=2;i<=limit;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i>limit)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    char arr[99];
    scanf("%s",arr);
    int len=strlen(arr);
    char ch[99];
    strcpy(ch,arr);
    int left=0;
    int right = len-1;
    while(left<=right)
    {
        char a=ch[left];
        ch[left]=ch[right];
        ch[right]=a;
        left++;right--;
    }
    for(int i=0;i<len-1;i++)
    {
        ch[i]=ch[i+1];
    }
    ch[len-1]='\0';
    strcat(arr,ch);
    long long sum=0;
    len=len+len-1;
    for(int i=0;i<len;i++)
    {
        int a;
        a=arr[i]-'0';
        sum+=pow(10,len-1-i)*a;
    }
    int ret= isprime(sum);
    if(ret==1)
    {
        printf("prime\n");
    }
    else
    {
        printf("noprime\n");
    }
    return 0;
}