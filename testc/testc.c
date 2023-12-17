#include <stdio.h>
int f(int a)
{
    int b;

    static int c =3;
    a=c++,b++;

    return a;
}
int main()
{
    int a=2,i,k;
    for(i=0;i<3;i++)
    {
        k=f(a++);

    }
    printf("%d",k);
    return 0;
}

