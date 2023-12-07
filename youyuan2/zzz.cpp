#include <iostream>
using namespace std;
class person1;
class person2
{
    public :
    person1* p;
    void visit();
    person2();
};
class person1
{
    friend void person2::visit();
    public :
    person1();
    int a;
    private:
    int b;
};
person1::person1()
{
    a=100;
    b=1000;
}
person2::person2()
{
    p=new person1;
}
void person2::visit()
{
    cout <<p->a<<endl;
    cout<<p->b<<endl;
}
int main()
{
    person2 z;
    z.visit();
    return 0;
}