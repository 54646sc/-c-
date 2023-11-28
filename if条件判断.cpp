#include <iostream>
using namespace std;
int main()
{
	int score;
	cout <<"请输入你的高考分数"<<endl;
	cin>> score;
	cout<<"你的高考分数为："<<score<<endl;
	if(score>=600)
	{
		cout <<"恭喜你，成功上岸"<<endl;
	}
	else
	{
		cout <<"很可惜，差一点点"<<endl;
	 } 
	system("pause");
	return 0;
}
