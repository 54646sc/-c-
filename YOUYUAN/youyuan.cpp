#include <iostream>
using namespace std;
class person
{
    friend void hanshu(person* x);
    public :
    person()
    {
        this->a=100;
        this ->b=1000;
    }

    public :
    int a;
    private:
    int b;
};
void hanshu(person* x)
{
    cout<<x->a<<endl;
    cout<<x->b<<endl;
}
void test()
{
    person p;
    hanshu(&p);
}
int main()
{
    test();
    return 0;
}