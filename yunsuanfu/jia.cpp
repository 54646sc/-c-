#include <iostream>
using namespace std;
class person
{
    public:
    person operator+(int num);
    int a;
    int b;
};
person person::operator+(int num)
{
    person temp;
    temp.a=this ->a+num;
    temp.b=this ->b+num;
    return temp;
}
// person operator+(person&a,person&b)
// {
//     person temp;
//     temp.a=a.a+b.a;
//     temp.b=a.b+b.b;
//     return temp;
// }
void test()
{
    person p1;
    person p2;
    p1.a=10;
    p1.b=10;
    p2.a=1;
    p2.b=11;
    person p3=p1+1;

    //person p3=operator+(p1,p2);
    //person p3=p1+p2;
    cout <<p3.a<<endl;
    cout<<p3.b<<endl;
    
}
int main()
{
    test();
    return 0;
}