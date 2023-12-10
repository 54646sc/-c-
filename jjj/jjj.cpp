#include <iostream>
using namespace std;
class father
{
    public:
    void func()
    {
        cout<<"father"<<endl;
    }
    father()
    {
        a=1000;
    }
    void func(int a)
    {
        cout<<"father"<<endl;
    }
    int a;
};
class son:public father
{
    public:
    void func()
    {
        cout<<"son"<<endl;
    }
    son()
    {
        a=100;
    }
    
    int a;
};
void test()
{
    son s;
    s.father::func(100);
}
int main()
{
    test();
    return 0;
}