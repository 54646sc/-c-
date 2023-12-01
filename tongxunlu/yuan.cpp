  #include "text.cpp"
  int main()
  {
    struct Addressbooks abs;
    abs.m_Size=0;
    while(true)
    {
      showMenu();
      int select=0;
      cout <<"请输入你的选择"<<endl;
      cin>>select;
    switch(select)
    {
      case 1:
      addperson(&abs);
      break;
      case 2:
      xianshi(&abs);
      break;
      case 3:
      shanchu(&abs);
      break;
      case 4:
      chazhao(&abs);
      break;
      case 5:
      xiugai(&abs);
      break;
      case 6:
      qingkong(&abs);
      break;
      case 0:
      cout <<"欢迎下次使用"<<endl;
      return 0;
      break;
      default :
      break;
    }
    }
    return 0;
  }