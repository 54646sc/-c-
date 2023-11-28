#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int num=rand()%100+1;
	cout <<num<<endl;
	system("pause");
	return 0;
 } 
