//乘法口诀表
#include <iostream>
using namespace std;
 
int main()
{
	cout<<"接下来，我们将打印9*9的乘法口诀表!"<<endl;
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<i<<"*"<<j<<"="<<i*j<<" ";
		cout<<endl;
		
	 } 
	system("pause");
	return 0;
 } 
