#include <iostream>
using namespace std;
class CPU
{
    public:
    virtual void calculate()=0;
};
class VidioCard
{
    public:
    virtual void display()=0;
};
class Memory
{
    public:
    virtual void storage()=0;
};
class Computer
{
    public :
    Computer(CPU* p1,VidioCard* p2,Memory* p3)
    {
        cpu=p1;
        vidiocard=p2;
        memory=p3;
    }
    ~Computer()
    {
        cout<<"释放堆区内存"<<endl;
        if(cpu==NULL)
        {
            delete cpu;
            cpu=NULL;
        }
        if(vidiocard==NULL)
        {
            delete vidiocard;
            vidiocard=NULL;
        }
        if(memory==NULL)
        {
            delete memory;
            memory=NULL;
        }
    }
    void work()
    {
        cpu->calculate();
        vidiocard->display();
        memory->storage();
    }
    private:
    CPU* cpu;
    VidioCard* vidiocard;
    Memory* memory;
};
class interlcpu:public CPU
{
    public :
    void calculate()
    {
        cout <<"Interl 的cpu开始计算"<<endl;
    }
};
class interlvidiocard:public VidioCard
{
    public :
    void display()
    {
        cout <<"Interl 的discard开始工作"<<endl;
    }
};
class interlmemory:public Memory
{
    public :
    void storage()
    {
        cout <<"Interl 的内存条开始存储"<<endl;
    }
};
int main()
{
    CPU* cpu=new interlcpu;
    VidioCard* vidiocard=new interlvidiocard;
    Memory* memory=new interlmemory; 
    Computer computer1(cpu,vidiocard,memory);
    computer1.work();
    return 0;
}