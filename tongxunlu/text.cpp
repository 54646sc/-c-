#include "tou.h"
struct Person
  {
    string m_name;
    string  m_Sex;
    int m_age;
    string m_Phone;
  };
  struct Addressbooks
  {
    struct Person personArray[MAX];
    int m_Size;
  };
  void showMenu()
  {
    cout << "***************************"<<endl;
    cout << "*****  1、添加联系人  *****"<<endl;
    cout << "*****  2、显示联系人  *****"<<endl;
    cout << "*****  3、删除联系人  *****"<<endl;
    cout << "*****  4、查找联系人  *****"<<endl;
    cout << "*****  5、修改联系人  *****"<<endl;
    cout << "*****  6、清空联系人  *****"<<endl;
    cout << "*****  0、退出通讯录  *****"<<endl;
    cout << "***************************"<<endl;
  }
  void addperson(struct Addressbooks* abs)
  {
    if(abs->m_Size==MAX)
    {
      cout <<"通讯录已满，操作失败"<<endl;
      return;
    }
    cout <<"请输入要添加联系人的姓名"<<endl;
    string  name;
    cin>>name;
    abs->personArray[abs->m_Size].m_name=name;
    cout <<"请输入要添加联系人的性别"<<endl;
    string sex;
    cin>>sex;
    abs->personArray[abs->m_Size].m_Sex=sex;
    int age;
    cout <<"请输入要添加联系人的年龄"<<endl;
    cin >>age;
    abs->personArray[abs->m_Size].m_age=age;
    cout <<"请输入要添加联系人的电话"<<endl;
    string phone;
    cin>>phone;
    abs->personArray[abs->m_Size].m_Phone=phone;
    cout <<"添加成功"<<endl;
    abs->m_Size++;
  }
  void xianshi(struct Addressbooks* abs)
  {
    if(abs->m_Size==0)
    {
      cout <<"通讯录为空"<<endl;
      return ;
    }
    for(int i=0;i<abs->m_Size;i++)
    {
      cout <<"姓名: "<<abs->personArray[i].m_name<<"  ";
      cout <<"性别: "<<abs->personArray[i].m_Sex<<"  ";
      cout <<"年龄: "<<abs->personArray[i].m_age<<"  ";
      cout <<"电话: "<<abs->personArray[i].m_Phone<<"  ";
      cout <<endl;
    }
  }
  int jiance(struct Addressbooks* abs,string name)
  {
    //cout <<"请输入你要操作的联系人姓名"<<endl;
    for(int i=0;i<abs->m_Size;i++)
    {
      if(abs->personArray[i].m_name==name)
      {
        return i;
      }
    }
    return -1;
  }
  void shanchu(struct Addressbooks* abs)
  {
    cout <<"请输入你要操作的联系人姓名"<<endl;
    string name;
    cin>>name;
    int ret = jiance(abs,name);
    if(ret != -1)
    {
      for(int i=ret ;i<abs->m_Size-1;i++)
      {
        abs->personArray[i]=abs->personArray[i+1];
      }
      abs->m_Size--;
      cout <<"删除成功"<<endl;
    }
    else
    {
      cout <<"查无此人"<<endl;
    }
  }
  void chazhao(struct Addressbooks* abs)
  {
    cout <<"请输入你要操作的联系人姓名"<<endl;
    string name;
    cin>>name;
    int ret = jiance(abs,name);
    if(ret !=-1)
    {
      cout <<"姓名: "<<abs->personArray[ret].m_name<<"  ";
      cout <<"性别: "<<abs->personArray[ret].m_Sex<<"  ";
      cout <<"年龄: "<<abs->personArray[ret].m_age<<"  ";
      cout <<"电话: "<<abs->personArray[ret].m_Phone<<"  ";
      cout <<endl;
    }
    else
    {
      cout <<"查无此人"<<endl;
    }
  }
  void xiugai(struct Addressbooks* abs)
  {
    cout <<"请输入你要操作的联系人姓名"<<endl;
    string name;
    cin>>name;
    int ret = jiance(abs,name);
    if(ret !=-1)
    {
      cout <<"请输入联系人的姓名"<<endl;
    string  name;
    cin>>name;
    abs->personArray[ret].m_name=name;
    cout <<"请输入联系人的性别"<<endl;
    string sex;
    cin>>sex;
    abs->personArray[ret].m_Sex=sex;
    int age;
    cout <<"请输入联系人的年龄"<<endl;
    cin >>age;
    abs->personArray[ret].m_age=age;
    cout <<"请输入联系人的电话"<<endl;
    string phone;
    cin>>phone;
    abs->personArray[ret].m_Phone=phone;
    cout <<"修改成功"<<endl;
    }
    else
    {
      cout <<"查无此人"<<endl;
    }
  }
  void qingkong(struct Addressbooks* abs)
  {
    abs->m_Size=0;
    cout <<"已经清空"<<endl;
    
  }