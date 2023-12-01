#include <iostream>
using namespace std;
#include "circle.h"
#include "dian.h"
#include "circle.cpp"
#include "dian.cpp"
void panduan(circle& y,dian& d)
{
    int kk=(d.getx()-y.getcenter().getx())*(d.gety()-y.getcenter().gety());   
    int mm=y.getr()*y.getr();
    if(kk==mm)
    {
        cout <<"点在圆上"<<endl;
    }
    else if(kk>mm)
    {
        cout <<"点在圆外"<<endl;
    }
    else
    {
        cout <<"点在圆内"<<endl;
    }
}
int main()
{
    circle y;
    dian d;
    d.setx(0);
    d.sety(0);
    y.setcenter(d);
    y.setr(1);
    dian x;
    x.setx(1);
    x.sety(0);
    panduan(y,x);
    return 0;
}