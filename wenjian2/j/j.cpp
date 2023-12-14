#include <iostream>
#include <fstream>
using namespace std;
class person
{
    public:
    int age;
    char name[99];
}; 
void test()
{
    ifstream ifs;
    ifs.open("a.txt",ios::in|ios::binary);
    if(!ifs.is_open())
    {
        cout<<"fail"<<endl;
        return ;
    }
    person p1;
    ifs.read((char *)(&p1),sizeof(p1));
    ifs.close();
    cout<<p1.age<<" "<<p1.name<<endl;
}
int main()
{
    test();
    return 0;
}