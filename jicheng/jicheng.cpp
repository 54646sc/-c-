#include <iostream>
using namespace std;
class basement
{
    public:
    void hanshu()
    {cout<<"this is public"<<endl;
}};
class part1:public basement
{
    public :
    void han(){
    cout<<"this is part1"<<endl;
}};
class part2:public basement
{
    public :
  void shu(){  cout<<"this is part2"<<endl;
}};
int main()
{
    part1 s1;
    s1.hanshu(); 
    s1.han(); 
    return 0;
}