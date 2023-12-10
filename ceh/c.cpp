#include <iostream>
using namespace std;
class base
{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
};
class p1:private base
{
    void func()
    {
        a=100;
        b=100;
        //c=10;
    }
};
class o2:public p1
{
    void hanshu()
    {
    //    a=100;
        //b=100;
    }
};

void test()
{
    p1 x;
    //x.a=100;
    //x.b=100;
}
int main()
{
    test();
    return 0;
}