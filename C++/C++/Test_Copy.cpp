//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//
//	Date(const Date& d)
//	{
//		cout << "Copy constructor called" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	//ȫȱʡ���캯�����޲ι��캯������Ĭ�Ϲ��캯��
//	Date(int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//	//Date func();
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	~Date()
//	{
//		cout << "Destructor called" << endl;
//	}
//private:
//	
//	int _year;
//	int _month;
//	int _day;
//};
// 
//Date func()
//{
//	Date d(2004, 10, 10);
//	return d;
//}
//int main()
//{
//	Date ret = func();
//
//	return 0;
//}