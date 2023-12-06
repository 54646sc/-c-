#include <iostream>
using namespace std;
class person
{
    public:
    person(int age)
    {
        this->age=age;
    }
    person& add(person& p1)
    {
        this->age+=p1.age;
        return *this;
    }
    int age;

};
void test01()
{
    person p(10);
    cout<<p.age<<endl;
}
void test02()
{
    person p1(10);
    person p2(p1);
    p2.add(p1).add(p1).add(p1);
    cout<<p2.age<<endl;
}
int main()
{
    //test01();
    test02();
    return 0;
}