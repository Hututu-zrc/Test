#include <iostream>
using namespace std;

//关于自增和自减运算符的重载函数
class  Person
{
public:
	friend ostream& operator<<(ostream& cout, Person &p);
	Person()
	{
		this->m_A=20;
	}
	Person& operator++()
	{
		this->m_A++;
		return *this;
	}
	Person operator++(int)
	{
		Person temp=*this;
		this->m_A++;
		return temp;
	}


private:
	int m_A; 
};

ostream& operator<<(ostream& cout, Person &p) 
{
    cout << p.m_A;
    return cout;
}


void test01()
{
	Person p;
	cout<< ++p<<endl;
	cout<< p<<endl;
	cout << p++<<endl;
	cout<< p<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
