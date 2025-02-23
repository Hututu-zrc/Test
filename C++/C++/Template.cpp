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
////	Swap(a, b);//���������ʽ��ʵ�������������Լ��Ƶ�����
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
////	Add(a, b);//�������ȵ��õ��Ǻ���
////	//���û�ж�Ӧ�ĺ���������ͻ����ģ�壬ԭ��������ȵ��ø���ƥ���
////
////	Add(a, c);
////	//�������������������Ͳ�һ�£��������������ַ���
////	//1.����ʹ��auto������ֵ�������Ƶ�
////	//2.����ģ�����ʽʵ������Add<int,double>(a,b);
////	Add<int>(a, c);
////
////
////	//1. һ����ģ�庯�����Ժ�һ��ͬ���ĺ���ģ��ͬʱ���ڣ����Ҹú���ģ�廹���Ա�ʵ����Ϊ�����ģ�庯��
////	//2.���ڷ�ģ�庯����ͬ������ģ�壬���������������ͬ���ڵ���ʱ�����ȵ��÷�ģ�庯��������Ӹ�ģ�������һ��ʵ�������ģ����Բ���һ�����и���ƥ��ĺ����� ��ô��ѡ��ģ��
////	//3.ģ�庯���������Զ�����ת��������ͨ�������Խ����Զ�����ת��
////
////	return 0;
////}
//
//
//
//#include <cstdio>
////��ģ������ֲ���һ����������
////��ģ����ʵ������ʱ��Ż���������һ����
//template<typename T>
//class Stack
//{
//public:
//	void Init()
//	{
//		_array = (T*)malloc(sizeof(T) * 3);
//		if (NULL == _array)
//		{
//			perror("malloc����ռ�ʧ��!!!");
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
//				perror("realloc����ռ�ʧ��!!!");
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
//	Stack<int> s;//���������ʾʵ����
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
