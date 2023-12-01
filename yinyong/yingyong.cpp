#include <iostream>
using namespace std;
void jiaohuan(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=10;
    int b=20;

    jiaohuan(a,b);
    cout <<"a="<<a<<endl;
    cout <<"b="<<b<<endl;
    return 0;
}