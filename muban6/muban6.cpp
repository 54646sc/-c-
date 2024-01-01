#include <iostream>
using namespace std;
template <class T>
class person
{
    public :
    T obj;
};
template<class T1,class T2>
class son: public person<T1>
{
    public:
    son()
    {
        cout<<"T1的类型为"<<typeid(T1).name()<<endl;
        cout<<"T2的类型为"<<typeid(T2).name()<<endl;
    }
    T2 b;
};
void test()
{
    son <int ,char>s;
    
}
int main()
{
    test();
    return 0;
}