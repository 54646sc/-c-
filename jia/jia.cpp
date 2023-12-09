#include <iostream>
using namespace std;
class add
{
    public:
    int operator()(int a,int b)
    {
        return a+b;
    }
};
int main()
{
    add p;
    int ret= p.operator()(1,2);
    cout <<ret<<endl;
    ret= p(3,4);
    cout <<ret<<endl;
    ret= add()(100,100);
    cout<<ret<<endl;
    return 0;
}