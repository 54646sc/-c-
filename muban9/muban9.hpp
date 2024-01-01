#pragma once 
#include <iostream>
using namespace std;
template <class T>
class MyArray
{
    public:
    MyArray(int capicity)
    {
        this->capicity=capicity;
        size=0;
        arr=new T[this->capicity];
    }
    ~MyArray()
    {
        if(this->arr!=NULL)
        {
            delete []this->arr;
            this->arr=NULL;
        }
    }
    MyArray(const MyArray& p)
    {
        this->capicity=p.capicity;
        this->size=p.size;
        this->arr=new T[p.capicity];
        for(int i=0;i<this->size;i++)
        {
            this->arr[i]=p.arr[i];
        }
    }
    MyArray& operator=(const MyArray& p)
    {
        if(this->arr!=NULL)
        {
            delete []arr;
            arr=NULL;
            this->capicity=0;
            this->size=0;
        }
        this->capicity=p.capicity;
        this->size=p.size;
        this->arr=new T[p.capicity];
        for(int i=0;i<this.size;i++)
        {
            this->arr[i]=p.arr[i];
        }
        return *this;   
    }
    void weicha(const T &val)
    {
        if(this->capicity==this->size)
        {
            return ;
        }
        this->arr[this->size]=val;
        this->size++;
    }
    void weishan()
    {
        if(this->size==0)
        {
            return ;
        }
        this->size--;

    }
    int getcapcity()
    {
        return this->capicity;
    }
    int getsize()
    {
        return this->size;
    }
    T& operator[](int xiabiao)
    {
        return this->arr[xiabiao];
    }
    private:
    T* arr;
    int size;
    int capicity;

};