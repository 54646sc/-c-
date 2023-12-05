#include <iostream>
using namespace std;
class person
{
    public:
    // person(int a,int b,int c)
    // {
    //     age=a;
    //     height=b;
    //     number=c;
    // }
    person(int a,int b,int c):age(a),height(b),number(c)
    {

    }

    int age;
    int height;
    int number;
};
int main()
{
    person p(30,50,20);
    cout <<"age="<<p.age<<endl;
    cout <<"height="<<p.height<<endl;
    cout <<"number="<<p.number<<endl;
}