//������
//1~100֮�䣬�����λ����ʮλ�����溬��7��������7�ı���,���ǽ���ӡ������
#include <iostream>
using namespace std;

int main()
{
	int count=1; 
	for(int i=0;i<100;i++)
	{
		if(i%10==7 || (i/10)%10==7 || i%7==0)
			{
				cout<<"�����ӵ�"<<count<<"��!"<<endl;
				count++;
			}
	}
	system("pause");
	return 0;
 } 
