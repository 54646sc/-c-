#include <iostream>
using namespace std;
class person
{
    public:
    person(int age,int height)
    {
        myage=age;
        myheight=new int(height);
    }
    person(const person& p)
    {
        myage=p.myage;
        myheight= new int(*p.myheight);
    }
    ~person()
    {
        if(myage!=NULL)
        {
            delete myheight;
            myheight==NULL;
        }
    }
    
    
    int myage;
    int *myheight;
};
void test()
{
    person p(18,180);
    cout <<p.myage<<endl<<*p.myheight<<endl;
    person p1(p);
    cout <<p1.myage<<endl<<*p1.myheight<<endl;
}
int main()
{
    test();
    return 0;
}