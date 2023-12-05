#include <iostream>
using namespace std;
class shouji
{
    public :
    shouji(string name):shoujiming(name)
    {
        cout << "shouji houzhaohanshudediaoyong"<<endl;
    }
    string shoujiming;
    ~shouji()
    {
        cout<<"shouji xigouhanshudediaoyong"<<endl;
    }
};
class person
{
    
    public :
    person(string name,string sjname):myname(name),myshoujiming(sjname)
    {
        cout<<"person gouzao"<<endl;
    }
    ~person()
    {
        cout<< "person xigou"<<endl;
    }
    string myname;
    shouji myshoujiming;
};
int main()
{
    person p("zhangshan","huawei");
    cout <<p.myname<<"拿了"<<p.myshoujiming.shoujiming<<endl;
    return 0;
}