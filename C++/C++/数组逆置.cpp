//һά������λ����
#include <iostream>
using namespace std;
 
int main()
{
	int arr[10]={0},j=0;
	while(cin>>&arr[j])
		j++;
	int sz=sizeof(arr)/sizeof(arr[0]);
	cout<<"ԭʼ����Ϊ�� ";
	for(int i;i<sz;i++)
		cout<<arr[i]<<" "; 
	cout<<endl;
	int left=0,right=sz-1;
	while(left<right)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
	cout<<"����Ϊ:";
	for(int i=0;i<sz;i++)
		cout<<arr[i]<<" ";	
	system("pause");
	return 0;
 } 
