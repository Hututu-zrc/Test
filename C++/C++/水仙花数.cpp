#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	cout<<"������һ������";
	int input=0,sum=0,tmp=0;
	cin>>input;
	tmp=input;
	while(input)
	{
		sum+=pow((input%10),3.0);
		input/=10;
	}
	if(sum==tmp)
		cout<<"����һ��ˮ�ɻ�����"<<endl;
	else
		cout<<"�ⲻ��һ��ˮ�ɻ�����" <<endl;
	system("pause");
	return 0;
 } 
