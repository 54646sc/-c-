#include <iostream>
using namespace std;
class person
{
    public :
    void fun()const 
    {
       // a=100;
        b=100;
    }
    void funn()
    {

    }
    person()
    {

    }
    int a;
    mutable int b;
};
void test()
{
    const person p;
    //p.a=100;
    p.b=100;
    p.fun();
    //p.funn();
}
int main()
{
    test();
    return 0;
}