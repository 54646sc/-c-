#include <iostream>
using namespace std;
int main()
{
	int a=88;
	int b=22;
	int c=0;
	c=(a<b?b:a);
	cout <<"c="<<c<<endl;
	c=99;
	(a<b?b:a)=c;
	cout <<c<<endl; 
	system("pause");
	return 0;
}
