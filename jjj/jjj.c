#include <stdio.h>
 void bubble(int* arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
}
int main()
{
    int arr[6]={1,6,9,8,5,3};
    bubble(arr,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}