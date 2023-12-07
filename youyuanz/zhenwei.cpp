#include <iostream>
using namespace std;
class person ;
class person1
{
    public :
    person1();
    void viisit();
    private:
    person *p;
};
class person 
{
    friend person1;
    public:
    person();
    int a;
    private:
    int b;
};
void person1:: viisit()
    {
        cout<<p->a<<endl;
        cout <<p->b<<endl;
    }
person1::person1()
{
    p=new person;
}
person::person()
{
    a=100;
    b=1000;
}
int main()
{
    person1 z;
    z.viisit();
    return 0;
}