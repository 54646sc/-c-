#include <iostream>
using namespace std;
class animal
{
    public :
    virtual void func()
    {
        cout<<"动物在说话"<<endl;
    }
};
class dog:public animal
{
    public :
    void func()
    {
        cout<<"狗在说话"<<endl;
    }
};
void dospeak(animal& a)
{
    a.func();
}
int main()
{
    dog a;
    dospeak(a);

    return 0;
}