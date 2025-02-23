#include <iostream>
#include <string>
using namespace std;

//手机类，打印手机名 
class Phone
{
public:
	//有参构造函数 
	Phone(string p_name):P_name(p_name)
	{
		
	}
	//属性 
	string P_name;
	
		
};


//人类，打印人 
class People
{
	//Phone p_name=ph_name;//类的隐式初始化 
	//下面两种和上面等同  注意：ph_name是字符串不是类型名 
	//Phone p_name=Phone (ph_name);//Phone(ph_name)是一个匿名对象 
	//Phone p_name(ph_name);
public:
	//有参构造函数 
	People(string per_name,string ph_name):Per_name(per_name),p_name(ph_name)
	{
		
	}
	//属性
	string Per_name;
	Phone p_name; 
};

int main()
{
	People p("朱润财","iphone 15 pro max");
	cout<<p.Per_name<<" have a "<<p.p_name.P_name<<endl;
	system("pause");
	return 0;
}
