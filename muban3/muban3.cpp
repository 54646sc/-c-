#include <iostream>
using namespace std;
void hanshu(int a,int b)
{
    cout<<"普通函数的调用"<<endl;
}
template <class T>
void hanshu(T a,T b)
{
    cout<<"模板函数的调用"<<endl;
}
template <class T>
void hanshu(T a,T b,T c)
{
    cout<<"模板函数重载的调用"<<endl;
}
int main()
{
    hanshu(10,10);
    hanshu(10.0,10.0);
    hanshu('a','v');
    hanshu<>(10,10);
    hanshu<double>(10,10);
    hanshu(10, 10 ,10 );
    return 0;
}