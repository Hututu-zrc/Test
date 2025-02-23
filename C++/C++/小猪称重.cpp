//五只小猪称重和逆置
#include <iostream>
using namespace std;

int main()
{
	int arr[5]={1,2,3,4,5};
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(max<arr[i])
			max=arr[i];
			
	}
	cout<<"最重的小猪有:"<<max<<"百斤！"<<endl;
	system("pause");
	return 0;
 } 
