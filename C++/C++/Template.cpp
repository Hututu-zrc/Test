//#include <iostream>
//using namespace std;
//#include <iomanip>
//
////template <typename T>
////void Swap(T& a, T& b)
////{
////	T temp = a;
////	a = b;
////	b = temp; 
////}
////int main()
////{
////	int a = 10, b = 20;
////	Swap(a, b);//这里就是隐式的实例化，编译器自己推导类型
////	cout << "A:" << a << " B:" << b << endl;
////	double c = 1.0, d = 2.0;
////	Swap(c, d);
////	cout << "C:" << fixed<<setprecision(2)<<c << " D:" << d << endl;
////	return 0;
////}
//
////
////int Add(int a, int b)
////{
////	cout << "int Add(int a, int b)" << endl;
////	return a + b;
////}
////
////template <class T>
////T Add(const T& a, const T& b)
////{
////	cout << "T Add(const T& a, const T& b)" << endl;
////	return a + b;
////}
////
////template <typename T1,typename T2>
////auto Add(const T1& a, const T2& b)
////{
////	cout << "auto Add(const T1& a, const T2& b)" << endl;
////	return a + b;
////}
////
////
////int main()
////{
////	int a = 10, b = 30;
////	double c = 30.2;
////	Add(a, b);//这里优先调用的是函数
////	//如果没有对应的函数，这里就会调用模板，原则就是优先调用更加匹配的
////
////	Add(a, c);
////	//这里由于两个参数类型不一致，我们有以下两种方法
////	//1.这里使用auto做返回值，自行推导
////	//2.函数模板的显式实例化，Add<int,double>(a,b);
////	Add<int>(a, c);
////
////
////	//1. 一个非模板函数可以和一个同名的函数模板同时存在，而且该函数模板还可以被实例化为这个非模板函数
////	//2.对于非模板函数和同名函数模板，如果其他条件都相同，在调动时会优先调用非模板函数而不会从该模板产生出一个实例。如果模板可以产生一个具有更好匹配的函数， 那么将选择模板
////	//3.模板函数不允许自动类型转换，但普通函数可以进行自动类型转换
////
////	return 0;
////}
//
//
//
//#include <cstdio>
////类模板的名字不是一个真正的类
////类模板在实例化的时候才会真正生成一个类
//template<typename T>
//class Stack
//{
//public:
//	void Init()
//	{
//		_array = (T*)malloc(sizeof(T) * 3);
//		if (NULL == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		_capacity = 3;
//		_size = 0;
//	}
//	void Push(T data)
//	{
//		CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	void Pop()
//	{
//		if (Empty())
//			return;
//		_size--;
//	}
//	T Top() { return _array[_size - 1]; }
//	int Empty() { return 0 == _size; }
//	int Size() { return _size; }
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	void CheckCapacity()
//	{
//		if (_size == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			T* temp = (T*)realloc(_array, newcapacity *
//				sizeof(T));
//			if (temp == NULL)
//			{
//				perror("realloc申请空间失败!!!");
//				return;
//			}
//			_array = temp;
//			_capacity = newcapacity;
//		}
//	}
//private:
//	T* _array;
//	int _capacity;
//	int _size;
//};
//int main()
//{
//	Stack<int> s;//这里必须显示实例化
//	s.Init();
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	s.Push(4);
//
//	printf("%d\n", s.Top());
//	printf("%d\n", s.Size());
//	s.Pop();
//	s.Pop();
//	printf("%d\n", s.Top());
//	printf("%d\n", s.Size());
//	s.Destroy();
//	return 0;
//}
