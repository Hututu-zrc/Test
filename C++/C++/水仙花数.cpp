#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	cout<<"请输入一个数：";
	int input=0,sum=0,tmp=0;
	cin>>input;
	tmp=input;
	while(input)
	{
		sum+=pow((input%10),3.0);
		input/=10;
	}
	if(sum==tmp)
		cout<<"这是一个水仙花数！"<<endl;
	else
		cout<<"这不是一个水仙花数！" <<endl;
	system("pause");
	return 0;
 } 
