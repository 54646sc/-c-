#pragma once 
#include "dian.h"
class circle 
{
    public :
    void setr(int r);
    int getr();
    void setcenter(dian center);
    dian getcenter();
    private:
    int myr;
    dian mycenter;
};