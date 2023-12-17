#include <stdio.h>
int main()
{
    int p,k;
    scanf("%d",&k);
    for(p=0;p<k;p++)
    {
        int n,m,i,j;
        scanf("%d%d",&n,&m);
        int count=0;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(i!=j&&n%i==n%j)
                {printf("Yes\n");
                count=1;
                goto xx;
                }
            }
        }
        xx:
        ;
        if(count!=1)
        {
            printf("No\n");
        }
    }

    return 0;
}