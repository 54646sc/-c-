#include <iostream>
using namespace std;
class person
{
    public:
    person()
    {
        cout<<"fu"<<endl;
    }
    ~person()
    {
        cout<<"fu"<<endl;
    }
};
class son:public person
{
    public:
    son()
    {
        cout<<"son"<<endl;
    }
    ~son()
    {
        cout<<"son"<<endl;
    }
};
int main()
{
    son l;
    
    return 0;
}