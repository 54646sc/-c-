#include <iostream>
using namespace std;
class abstractcaculator
{
    public:
    virtual int func()
    {
        return 0;
    }
    int a;
    int b;
};
class addcaculator :public abstractcaculator
{
    public:
    int func()
    {
        return a+b;
    }
};
class subcaculator:public abstractcaculator
{
    public:
    int func()
    {
        return a-b;
    }
};
int main()
{
    abstractcaculator* p=new subcaculator;
    p->a=100;
    p->b=10;
    cout<<p->func();
    delete p;
    p=NULL;
    return 0;
}