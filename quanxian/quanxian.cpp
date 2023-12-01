#include <iostream>
using namespace std;
class person
{
public:
string name;
protected :
string car;
private :
string possward ;
public :
void hanshu()
{
    name="张三";
    car ="宝马";
    possward= "4546";
}


};
int main()
{
    person s;
    s.hanshu();
    cout <<s.name<<endl;

    return 0;
}