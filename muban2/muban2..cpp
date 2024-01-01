#include <iostream>
using namespace std;
#include <string >
class person
{
    public :
    // bool operator==(const person& p)
    // {
    //     if(this->age==p.age&&this->name==p.name)
    //     {
    //         return true;

    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }
    person(int age,string name)
    {
        this->age=age;
        this->name=name;
    }
    int age;
    string name;
};
template <class  T>
void myswap(T& a,T& b)
{
    T temp=a;
    a=b;
    b=temp;
}
template <class T>
void mysort(T* arr,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //交换
                myswap(arr[j],arr[j+1]);
            }
        }
    }
}
template <class T>
void print(T* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void test1()
{
    int arr[]={3,6,4,9,1,9,43,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    mysort(arr,n);
    print(arr,n);
}
void test2()
{
    char arr[]="gjsdojgor";
    int n=sizeof(arr)/sizeof(arr[0])-1;
    mysort(arr,n);
    print(arr,n);
}
int xiangjia(int a,int b)
{
    return a+b;
}
void test3()
{
    double a=3.1;
    double b=6.1;
    cout <<xiangjia(a,b)<<endl;
}
template <class T>
bool x(T& a,T& b)
{
    if(a==b)
    {
        return true ;
    }
    else
    {
        return false;
    }
}
template <>bool x(person &a,person &b)
{
    if(a.age==b.age&&a.name==b.name)
    {
        return true ;
    }
    else
    {
        return false;
    }
}
void test4()
{
    person p1(10,"zhangshan");
    person p2(11,"zhangshan");
    int ret=x(p1,p2);
    if(ret)
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }
}
int main()

{
    // test1();
    // test2();
    // test3();
    test4();
    return 0;
}