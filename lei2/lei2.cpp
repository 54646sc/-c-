#include <iostream>
using namespace std;
class person
{
    public :
    void setname(string name)
    {
        m_name=name;
    }
    string getname()
    {
        return m_name;
    }
    int getage()
    {
        //int age=18;
            //m_age=age;
        return m_age;
    }
    void setlover(string lover)
    {
        m_lover=lover;
    }
    void setage(int age)
    {
        if(age<0||age>150)
        {
            m_age=0;
            cout <<"error"<<endl;
            return ;
        }
        m_age=age;
    }
    private :
    string m_name;
    int m_age;
    string m_lover;
};
int main()
{
    class person s;
    s.setname("zhangsan");
    s.setage(1000);
    cout <<s.getname()<<endl;
    cout <<s.getage()<<endl;
    s.setlover("###");
    
    return 0;
}