//��cppʵ��ð���㷨
#include <iostream>
using namespace std;


#define Print(x) for(int i=0;i<x;i++) cout<<arr[i]<<" ";

int main()
{
	int arr[10]={0};
	int rub=0;
	while(cin>>arr[rub])
		rub++;
	int sz=sizeof(arr)/sizeof(arr[0]);
	cout<<"δ���������Ϊ��";
	Print(sz); 
	for(int i=0;i<sz-1;i++)
	{
		for(int j=0;j<sz-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<endl<<"����������Ϊ�� ";
	Print(sz);
	system("pause");
	return 0;
 } 
