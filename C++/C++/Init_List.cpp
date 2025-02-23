#include <iostream>
//using namespace std;
//
//class Stack {
//
//public:
//	Stack()
//	{
//
//	}
//private:
//};
//class Date
//{
//public:
//	Date(int year,int month,int day) :_year(year), _month(month), _day(day)
//	{
//		/*1. 每个成员变量在初始化列表中只能出现一次(初始化只能初始化一次)
//		3. 尽量使用初始化列表初始化，因为不管你是否使用初始化列表，对于自定义类型成员变量，
//		一定会先使用初始化列表初始化。*/
//
//		//初始化列表可以理解位每个对象的成员变量定义的地方
//		//编译器调用构造函数的时候，会默认先调用初始化列表，然后调用构造函数里面的
//		//2.const，引用，没有默认构造的自定义(要赋初始值)  都要在初始化列表里面初始化，因为这些都是定义的时候就要给初值，初始化列表就是定义的时候
//		/*4. 成员变量在类中声明次序就是其在初始化列表中的初始化顺序，与其在初始化列表中的先后
//		次序无关*/
//			
//
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	cout << "6.21" << endl;
//	Date d1 = Date(2004, 10, 10);
//	d1.Print();
//	return 0;
//}