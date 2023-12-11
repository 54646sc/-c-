#include <iostream>
using namespace std;
class abstractbase
{
    public:
    virtual void zhu()=0;
    virtual void zuo()=0;
    void make()
    {
        zhu();
        zuo();
    }
};
class naicai :public abstractbase
{
    public :
    void zhu()
    {
        cout<<"煮奶茶"<<endl;
    }
    void zuo()
    {
        cout<<"做奶茶"<<endl;
    }
};
class kafei :public abstractbase
{
    public :
    void zhu()
    {
        cout<<"煮咖啡"<<endl;
    }
    void zuo()
    {
        cout<<"做咖啡"<<endl;
    }
};
void docha(abstractbase* p)
{
    p->make();
    delete p;
    p=NULL;
}
void test()
{
    docha(new kafei);
    docha(new naicai);
}
int main()
{
    test();
    return 0;
}