#include <iostream>
#include <string>
using namespace std;

//�ֻ��࣬��ӡ�ֻ��� 
class Phone
{
public:
	//�вι��캯�� 
	Phone(string p_name):P_name(p_name)
	{
		
	}
	//���� 
	string P_name;
	
		
};


//���࣬��ӡ�� 
class People
{
	//Phone p_name=ph_name;//�����ʽ��ʼ�� 
	//�������ֺ������ͬ  ע�⣺ph_name���ַ������������� 
	//Phone p_name=Phone (ph_name);//Phone(ph_name)��һ���������� 
	//Phone p_name(ph_name);
public:
	//�вι��캯�� 
	People(string per_name,string ph_name):Per_name(per_name),p_name(ph_name)
	{
		
	}
	//����
	string Per_name;
	Phone p_name; 
};

int main()
{
	People p("�����","iphone 15 pro max");
	cout<<p.Per_name<<" have a "<<p.p_name.P_name<<endl;
	system("pause");
	return 0;
}
