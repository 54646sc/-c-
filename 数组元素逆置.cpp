#include <iostream>
using namespace std;
int main()
{
	int arr[9]={1,2,5,9,7,3,55,66,88};
	int left = 0;
	int  right = 8;
	while(left<right )
	{
		int t= arr[left];
		arr[left]=arr[right];
		arr[right]=t;
		right--;
		left ++;
	 } 
	 for(int i=0;i<9;i++)
	 {
	 	cout <<arr[i]<<endl;
	 }
	system("pause");
	return 0;
}
