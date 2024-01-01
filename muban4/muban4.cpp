#include <iostream>
using namespace std;
#include <string>
template<class T1 ,class T2>
class person
{
    public:
    person(T1 age,T2 name)
    {
        this->age=age;
        this->name=name;
    }
    void showperson()
    {
        cout<<this->age<<"  "<<this->name<<endl;
    }
    T1 age;
    T2 name;
};
void hanshu(person< int ,string>& p)
{
    p.showperson();
}
void test1()
{
    person< int ,string> p1(10,"网");
    hanshu(p1);
}
template<class T1,class T2>
void hanshu1(person< T1 ,T2>& p1)
{
    p1.showperson();
}
void test2()
{
    person< int ,string> p1(101,"网a");
    hanshu1(p1);
}
template <class T>
void hanshu2(T &p1)
{
    p1.showperson();
}
void test3()
{
    person< int ,string> p1(101,"网a");
    hanshu2(p1);
}
int main()
{
    test3();
    return 0;
}