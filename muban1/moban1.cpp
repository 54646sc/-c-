#include <iostream>
using namespace std;
template <typename T>
void myswap(T&a,T&b)
{
    T temp=a;
    a=b;
    b=temp;
}
template <class T>
void hanshu()
{
    cout<<"hanshu的调用\n"<<endl;
}
int main()
{
    double a=10.1;
    double b=20.2;
    myswap(a,b);
    //myswap<double>(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    hanshu<int>();
    return 0;
}
