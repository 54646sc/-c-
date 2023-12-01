#include <iostream>
using namespace std;
void fun(int& a)
{
    cout <<"yi"<<endl;

}
void fun(const int& a)
{
    cout <<"er"<<endl;
}
void hanshu(int a,int b)
{
    cout <<"yi"<<endl;
}
void hanshu(int a)
{
    cout <<"er"<<endl;
}
int main()
{

    int a=9;
    hanshu(3,0);
    return 0;
}