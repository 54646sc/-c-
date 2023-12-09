#include <iostream>
using namespace std;
class person
{
    friend void test();
    public:
    person(int a)
    {
        p=new int(a);
    }
    ~person()
    {
        if(p!=NULL)
        {
            delete p;
            p=NULL;
        }
    }
    person& operator=(person& p)
    {
        this ->p=new int(*p.p);
        return *this;
    }
    private:
    int *p;
};
void test()
{
    person p(10);
    cout<<*p.p<<endl;

    person p2(12);
    person p3(11);
    p3=p2=p;
    
    cout<<*p2.p<<endl;
    cout <<*p3.p<<endl;
}
int main()
{
    test();
    return 0;
}