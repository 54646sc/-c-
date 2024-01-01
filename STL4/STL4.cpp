#include <iostream>
using namespace std;
#include <string>
void test01()
{
    string s="abcdefg";
    int pos = s.find("deg");
    if(pos==-1)
    {
        cout<<"未找到\n"<<endl;
    }
    else
    {
        cout<<"pos="<<pos<<endl;
    }
    s.replace(2,2,"1111");
    cout<<s<<endl;
}
void test02()
{
    string s1="aang";
    string s2="yang";
    // if(s1.compare(s2)==0)
    // {
    //     cout<<"相等"<<endl;
    // }
    // else if(s1.compare(s2)>0)
    // {
    //     cout<<"1>2"<<endl;
    // }
    // else
    // {
    //     cout<<"1<2"<<endl;
    // }
    if(s1==s2)
    {
        cout<<"相等"<<endl;
    }
    else if(s1<s2)
    {
        cout<<"小于"<<endl;
    }
}
void test03()
{
    string s="ahgidh";
    for(int i=0;i<s.size();i++)
    {
        cout<<s.at(i)<<endl;
        cout<<s[i]<<endl;
    }
    s[0]='f';
    s.at(2)='k';
    cout<<s<<endl;
    s.insert(1,"ghhhhh");
    cout<<s<<endl;
    s.erase(1,3);
    cout<<s<<endl;
}
void test04()
{
    string s="ymh30994@gmail.com";
    int pos=s.find("@");
    string a=s.substr(0,pos);
    cout<<a<<endl;

}
int main()
{
    test04();
    return 0;
}