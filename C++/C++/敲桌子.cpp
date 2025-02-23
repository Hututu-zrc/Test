//敲桌子
//1~100之间，如果各位或者十位数上面含有7，或者是7的倍数,我们将打印敲桌子
#include <iostream>
using namespace std;

int main()
{
	int count=1; 
	for(int i=0;i<100;i++)
	{
		if(i%10==7 || (i/10)%10==7 || i%7==0)
			{
				cout<<"敲桌子第"<<count<<"次!"<<endl;
				count++;
			}
	}
	system("pause");
	return 0;
 } 
