#include <iostream>
using namespace std;
int & hanshu()
{
    static int a=10;
    return a;
}
int main()
{
    int &ret = hanshu();
    cout <<ret<<endl;
    cout <<ret <<endl;
    return 0;
}
