#include <iostream>
using namespace std;
class cube
{
    public:
    void setlong(int chang)
    {
        mylong=chang;
    }
    int getlong()
    {
        return mylong;
    }
    void setwide(int wide)
    {
        mywide=wide;
    }
    int getwide()
    {
        return mywide;
    }
    void sethigh(int high)
    {
        myhigh=high;
    }
    int gethigh()
    {
        return myhigh;
    }
    int tiji()
    {
        return myhigh*mylong*mywide;
    }
    bool panduan(cube& c2)
    {
        if(myhigh==c2.gethigh()&&mylong==c2.getlong()&&mywide==c2.getwide())
        {
            return true ;            
        }
        return false;
    }
    private:
    int mylong;
    int mywide;
    int myhigh;
};
bool panduan(cube & s1,cube &s2)
{
    if(s1.gethigh()==s2.gethigh()&&s1.getlong()==s2.getlong()&&s1.getwide()==s2.getwide())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    class cube s1;
    s1.setlong(10);
    s1.setwide(10);
    s1.sethigh(10);
    cout <<s1.getlong() <<endl;
    cout <<s1.getwide() <<endl;
    cout <<s1.gethigh() <<endl;
    cout <<s1.tiji()<<endl;

    class cube s2;
    s2.setlong(10);
    s2.setwide(10);
    s2.sethigh(10);
    cout <<s2.getlong() <<endl;
    cout <<s2.getwide() <<endl;
    cout <<s2.gethigh() <<endl;
    cout <<s2.tiji()<<endl;

    bool ret = panduan(s1,s2);
    if(ret)
    {
        cout <<"相等"<<endl;
    }
    else
    {
        cout <<"不相等"<<endl;
    }
    bool ret2 = s1.panduan(s2);
    
        if(ret2)
        {
            cout<<"相等"<<endl;
        }
        else
        {
            cout <<"不相等"<<endl;
        }
    
    return 0;
}