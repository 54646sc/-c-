#include <iostream>
using namespace std;
class person1
{
    public:
    void showperson1()
    {
        cout<<"1"<<endl;
    }
};
class person2
{
    public :
    void showperson2()
    {
        cout<<"2"<<endl;
    }
};
template <class T>
class person
{
    public :
    T obj;
    void func1()
    {
        obj.showperson1();
    }
    void func2()
    {
        obj.showperson2();
    }
};
void test01()
{
    person<person2> p;
   // p.func1();
    p.func2();
}
int main()
{
    test01();
    return 0;
}