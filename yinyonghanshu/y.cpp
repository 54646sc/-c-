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
    hanshu()=100;
    cout <<ret <<endl;
    cout <<ret <<endl;
    int x=10;
    const int &y=1000;
    
    cout <<y<<endl;

    return 0;

}