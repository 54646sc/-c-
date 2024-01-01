#include <iostream>
using namespace std;
#include <string>
void test01()
{
    string s1;
    const char *arr ="fiohg";
    string s2("sghg");
    string s3(arr);
    cout<<s2<<endl;
    cout<<s3<<endl;
    string s4(s3);
    cout<<s4<<endl;
    string s6(6,'a');
    cout<<s6<<endl;
}
void test02()
{
    string s1="dhgis";
    //s1="ghf";
    cout<<s1<<endl;
    string s2=s1;
    cout<<s2<<endl;
    string s3;
    s3='a';
    cout<<s3<<endl;
    string s4;
    s4.assign("ghdg");
    s4.assign(4,'a');
    cout<<s4<<endl;

}
void test03()
{
    string s1;
    s1="我";
    s1+="爱玩";
    cout<<s1;
    s1+=':';
    cout<<endl<<s1<<endl;
    string s2="csgo";
    s1+=s2;
    cout<<s1<<endl;
}
void test04()
{
    string s1;
    s1="I";
    s1.append(" love ");
    cout<<s1<<endl;
    s1.append(s1);
    cout<<s1<<endl;
    s1.append(s1,0,1);
    cout<<s1<<endl;
    s1.append("gig",1);
    cout<<s1<<endl;
}
int main()
{
    test04();
    return 0;
}