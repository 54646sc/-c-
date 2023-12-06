#include <iostream>
using namespace std;
class person
{
    public:
    void show()
    {
        cout <<"this is a person class "<<endl;
    }
    void showage()
    {
        if(this ==NULL)
        {
            return ;
        }
        cout <<"age= "<<this ->age<<endl;
    }
    int age;
};
void test()
{
    person* p= NULL;
    p->show();
    p->showage();
}
int main()
{
    test();

    return 0;
}