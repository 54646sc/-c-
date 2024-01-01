#include <iostream>
using namespace std;
#include "muban9.hpp"
void print(MyArray <int >&arr)
{
    for(int i=0;i<arr.getsize();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void test01()
{
    MyArray <int >arr(5);
    for(int i=0;i<5;i++)
    {
        arr.weicha(i);
    }
    print(arr);
}
int main()
{
    test01();
    return 0;
}