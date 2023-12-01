#include <iostream>
using namespace std;
class xi
{
    public :
    string xuehao;
    string name;
    void show()
    {
        cout <<"学号为"<<xuehao<<"  姓名为"<<name<<endl;
    }
    void funame(string namea)
    {
        name=namea;
    }
    void fuxuhao(string hao)
    {
        xuehao=hao;
    }
};
int main()
{
    class xi a;
    a.funame("zhangshan");
    a.fuxuhao("46564");
    a.show();
    return 0;
}