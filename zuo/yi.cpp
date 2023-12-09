#include <iostream>
using namespace std;
class person 
{
    friend ostream &operator<<(ostream &cout,person &p);
    public :
    person(int a,int b)
    {
        this ->a=a;
        this ->b=b;
    }
    private:
    int a;
    int b;
};
ostream &operator<<(ostream &cout,person &p)
{
    cout<<"a="<<p.a<<" b="<<p.b;
    return cout;
}
void test()
{
    person p(10,10);
    cout <<p<<endl;
}
int main()
{
    test();
    return 0;
}