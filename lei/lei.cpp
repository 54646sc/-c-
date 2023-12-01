#include <iostream>

using namespace std;
#define pi 3.14
class yuan
{
    public:
    int r;
    void zouchang()
    {
        cout <<pi*2*r<<endl;
    }
};
int main()
{
    yuan si;
    si.r=10;
    si.zouchang();
    return 0;
}