#include <stdio.h>
#include <string.h>
void caozuo(char *arr,char ch1,char ch2,char ch3,char ch4,int len)
{
    int count=1;
    while(count!=0)
    {
    for(int i=0;i<len;i++)
    {
        if(arr[i]==ch1)
        {
            arr[i]=ch2;
            count =1;
        }
        else if(arr[i]==ch3)
        {
            count =1;
            arr[i]=ch4;
        }
        else
        {
            count=0;
        }
    }
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char ch1;
    scanf("%c",&ch1);
    getchar();
    char ch2;
    scanf("%c",&ch2);
    getchar();
    char ch3;
    scanf("%c",&ch3);
    getchar();
    char ch4;
    scanf("%c",&ch4);
    char arr[n+1];
    scanf("%s",arr);
    int len=strlen(arr);
    caozuo(arr,ch1,ch2,ch3,ch4,len);
    printf("%s",arr);
    return 0;
}