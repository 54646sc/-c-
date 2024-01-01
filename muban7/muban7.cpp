#include <iostream>
using namespace std;
#include "person.hpp"
// #include <string>
// template<class T1,class T2>
// class person
// {
//     public:
//     person(T1 age,T2 name);
//     void showperson();
//     T1 age;
//     T2 name;

// };
// template<class T1,class T2>
// person<T1,T2>::person(T1 age,T2 name)
// {
//     this->age=age;
//     this->name=name;
// }
// template<class T1,class T2>
// void person<T1,T2>::showperson()
// {
//     cout<<"age="<<age<<endl;
//     cout<<"name="<<name<<endl;
// }
void test()
{
    person <int ,string>p(10,"dg");
    p.showperson();
}
int main()
{
    test();
    return 0;
}