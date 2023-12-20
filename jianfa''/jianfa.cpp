#include <iostream>
using namespace std;
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    int a;
    int b;
    cin >>a;
    cin>>b;
    int c = sub(a,b);
    cout<<c<<endl;
    return 0;
}