#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("book.text",ios::in);
    if(!(ifs.is_open()))
    {
        cout<<"fail"<<endl;
        return 0;
    }
    //char arr[2014]={0};
    // while(ifs>>arr)
    // {
    //     cout<<arr<<endl;
    // }
    // while(ifs.getline(arr,sizeof(arr)))
    // {
    //     cout<<arr<<endl;
    // // }
    // string arr;
    // while(getline(ifs,arr))
    // {
    //     cout<<arr<<endl;
    // }
    char c;
    while((c=ifs.get())!=EOF)
    {
        cout<<c;
    }
    ifs.close();
    return 0;
}