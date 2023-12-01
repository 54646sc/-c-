#include <iostream>
using namespace std;
int hanshu(int a,int b=20,int c=30);

int main()
{
    cout <<hanshu(10)<<endl;
}
int hanshu(int a,int b,int c)
{
    return a+b+c;
}