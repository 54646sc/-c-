#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
class person
{
    public:
    person(int age,string name)
    {
        this->age=age;
        this->name=name;
    }
    int age;
    string name;
};
void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    vector<int >::iterator itbegin = v.begin();
    vector<int>::iterator itend=v.end();
    while(itbegin!=itend)
    {
        cout<<*itbegin<<endl;
        itbegin++;
    }
}
void test02()
{
    vector<person*> v;
    person p1(10,"a");
    person p2(20,"b");
    v.push_back(&p1);
    v.push_back(&p2);
    for(vector <person*>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<(*(*it)).age<<endl;
        cout<<(*it)->name<<endl;
    }
}
void print(char& ch)
{
    cout <<ch<<endl;
}
void test03()
{
    vector<char > ch;
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('c');
    for_each(ch.begin(),ch.end(),print);
}
int main()
{
    test02();
    return 0;
}