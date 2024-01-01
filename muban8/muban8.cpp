#include <iostream>
using namespace std;
#include <string >
template<class T1,class T2>
class person;
template<class T1,class T2>
void print(person<T1,T2>& p)
{
    
    cout<<"age="<<p.age<<" name="<<p.name<<endl;
    
}
template<class T1,class T2>
class person
{
    friend void print<>(person<T1,T2>& p);
    // {
    //     cout<<"age="<<p.age<<" name="<<p.name<<endl;
    // }
    public:
    person(T1 age,T2 name)
    {
        this->age=age;
        this->name=name;
    }
    T1 age;
    T2 name;
};
void test()
{
    person <int ,string>p(18,"gf");
    print(p);
}
int main()
{
    test();
    return 0;
}