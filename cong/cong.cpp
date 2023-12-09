#include <iostream>
using namespace std;
class person
{
    public :
    person(string name,int age)
    {
        this->age=age;
        this->name=name;
    }
    string name;
    int age;
    bool operator==(person& p)
    {
        if(this->age==p.age&&this->name==p.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    person p1("yang",12);
    person p2("yang",12);
    if(p1==p2)
    {
        cout <<"相等"<<endl;
    }
    else
    {
        cout <<"不相等"<<endl;
    }
    return 0;
}