#include <iostream>
#include <fstream>
using namespace std;
class person
{
    public :
    int age;
    char name[99];

};
person p = {18,"zhangshan"};
void test1()
{
    ofstream ofs;
    ofs.open("a.txt",ios::out|ios::binary);
    ofs.write((const char*)(&p),sizeof(p));
    ofs.close();
}
// void test()
// {
//     ifstream ifs;
//     ifs.open("book.txt",ios::in|ios::binary);
//     if(!ifs.is_open())
//     {
//         cout<<"fail"<<endl;
//         return ;
//     }
//     person p1;
//     ifs.read((char *)(&p1),sizeof(p1));
//     ifs.close();
//     cout<<p1.age<<" "<<p1.name<<endl;
// }
int main()
{
    test1();
    
    return 0;
}