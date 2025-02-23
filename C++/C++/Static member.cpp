#include <iostream>
using namespace std;

class Person
{
public:
	static int var1;
	static void func1()
	{
		var1=200;
		var3=400;
		cout<<var1<<endl;
	}
	void func3()
	{
		cout<<"told me why"<<endl;
	}
private:
	static int var2;
	int var3;
	void func2()
	{
		cout<<var1<<endl;
	}	
};
int main()
{
//	test2();
//	test1();
	Person p3;
	p3.func1();
	Person::func1();
	system("pause");
	return 0;
 } 
 
 int Person::var1=100;
int Person::var2=300;

void test1()
{
	Person p;
	//access
	cout<<p.var1<<endl;
}
void test2()
{
	Person p2;
	p2.var1=200;
	cout<<Person::var1<<endl;
}
