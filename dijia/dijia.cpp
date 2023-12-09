#include <iostream>
using namespace std;
class person
{
    friend ostream& operator<<(ostream& cout ,person& p);
    public :
    person()
    {
        a=0;
    }
    person(int n)
    {
        a=n;
    }
    person& operator++()
    {
        a++;
        return *this ;
    }
    person operator++(int)
    {
        person temp=*this;
        a++;
        return temp;
    }
    private:
    int a;
};
ostream& operator<<(ostream& cout ,person& p)
{
    cout <<p.a;
    return cout;
}
void test01()
{
    person p1(10);
    cout <<p1<<endl;
}
void test02()
{
    person p1;
    person p2= p1++;
    cout<<p2<<endl;
    cout <<p1<<endl;
}

int main()
{
    //test01();
    test02();
    return 0;
}