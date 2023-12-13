#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofs;
    ofs.open("book.text",ios::out);
    ofs<<"zhangshan"<<endl;
    ofs.close();
    return 0;
}