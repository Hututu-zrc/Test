//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string> 
//#include<vector>
//#include <functional>
//using namespace std;
#include <iostream>
using namespace std;

//int main()
//{
////	string arr="abcdef";
////	cout<<"������һ��string ��";
////	cin>>arr;
////	cout<<"arr = "<<arr<<endl;
////	//bool���͵Ĵ�ӡ
////	bool temp=true;
////	cout<<"������һ��bool ��";
////	cin>>temp;
////	cout<<"temp = "<<temp<<endl;
//
//	//��ֻС��ѡ��ṹ�ȴ�С
//	int PigA,PigB,PigC;
//	cout<<"��������ֻС��Ĵ�С"<<endl;
//	cout<<"PigA :";
//	cin>>PigA; 
//	cout<<"PigB :";
//	cin>>PigB; 
//	cout<<"PigC :";
//	cin>>PigC; 
////	if(PigA>PigC)
////	{
////		if(PigA>PigB)
////		cout<<"PigA�����ص�һֻС��"<<endl;
////		else 
////		cout<<"PigB�����ص�һֻС��"<<endl;
////	}
////	else
////	{
////		if(PigC>PigB)
////		cout<<"PigC�����ص�һֻС��"<<endl;
////		else 
////		cout<<"PigB�����ص�һֻС��"<<endl;
////	}
//	int max=PigA>(PigB>PigC?PigB:PigC)?PigA:(PigB>PigC?PigB:PigC);
//	if(PigA==max)
//	cout<<"PigA�����ص�һֻС��"<<endl;
//	else if(PigB==max)
//		cout<<"PigB�����ص�һֻС��"<<endl;
//	else
//	cout<<"PigC�����ص�һֻС��"<<endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	cout<<arr<<endl;
//	cout<<&arr<<endl;
//	cout<<&arr[0]<<endl;
//	cout<<arr[0]<<endl;
//	system("pause");
//	return 0;
// } 


//int Add(int &a)
//{
//	a+=10;
//	return a;
//}
// 
//int Add(int &a,int b=10)
//{
//	a+=10;
//	return a;
//}
// 
//int main()
//{
//	int a=0;
//	int ret=Add(a);
//	cout<<"ret = "<<ret<<endl;
//	system("pause");
//	return 0;
//}

//class Student
//{
//public://����Ȩ�� �����ǹ���Ȩ��
//	 
//	//��Ϊ
//	void setname(string M_name)
//	{
//		name=M_name;
//	}
//	void getname()
//	{
//		cout<<"����Ϊ : "<<name<<endl;
//	}
//	void setId(string ID)
//	{
//		Id=ID;
//	}
//	void getId()
//	{
//		cout<<"ѧ��Ϊ : "<<Id<<endl;
//	}
//	void setpassword(string word)
//	{
//		Password=word; 
//	} 
//	//���� 
//private: 
//	string name;//�ɶ���д 
//	string Id;// �ɶ���д 
//	string Password;//��д,�����Զ� 
//};
//int main()
//{
//	Student s1;
//	s1.setname("zhangsan");
//	s1.setId("5201314");
//	s1.getname();
//	s1.getId(); 
//	string word;
//	cin >> word;
//	s1.setpassword(word);
//		system("pause");
//	return 0;
// } 


//class Person {
//public:
//    �޲Σ�Ĭ�ϣ����캯��
//    Person() {
//        cout << "�޲ι��캯��!" << endl;
//    }
//    �вι��캯��
//    Person(int age ,int height) {
//
//        cout << "�вι��캯��!" << endl;
//
//        m_age = age;
//        m_height = new int(height);
//
//    }
//    �������캯��  
//    Person(const Person& p) {
//        cout << "�������캯��!" << endl;
//        �������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
//        m_age = p.m_age;
//        m_height = new int(*p.m_height);
//
//    }
//
//    ��������
//    ~Person() {
//        cout << "��������!" << endl;
//        if (m_height != NULL)
//        {
//            delete m_height;
//        }
//    }
//public:
//    int m_age;
//    int* m_height;
//};
//
//void test01()
//{
//    Person p1(18, 180);
//
//    Person p2(p1);
//
//    cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_height << endl;
//
//    cout << "p2�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_height << endl;
//}
//
//int main() {
//
//    test01();
//
//    system("pause");
//
//    return 0;
//}
//

//
//class Person
//{
//public:
//
//    Person(int age)
//    {
//        //1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
//        this->age = age;
//    }
//
//    Person& PersonAddPerson(Person &p)
//    {
//        this->age += p.age;
//        //���ض�����
//        return *this;
//    }
//
//    int age;
//};
//
//void test01()
//{
//    Person p1(10);
//    cout << "p1.age = " << p1.age << endl;
//
//    Person p2(10);
//    //����thisָ����ָ��Ķ���Ȼ�󷵻��������ͣ��ﵽ��ʽ���ʵ�Ŀ��
//    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//    cout << "p2.age = " << p2.age << endl;
//}
//
//int main() {
//
//    test01();
//
//    system("pause");
//
//    return 0;
//}

//
//
//class Person {
//public:
//    Person() {
//        m_A = 0;
//        m_B = 0;
//    }
//
//    //thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
//    //�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
//    void ShowPerson()  const{
//        //const Type* const pointer;
//        //this = NULL; //�����޸�ָ���ָ�� Person* const this;
//        //this->m_A = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵ�
//
//        //const���γ�Ա��������ʾָ��ָ����ڴ�ռ�����ݲ����޸ģ�����mutable���εı���
//        this->m_B = 100;
//    }
//
//    void MyFunc() const{
//        //mA = 10000;
//    }
//
//public:
//    int m_A;
//    mutable int m_B; //���޸� �ɱ��
//};
//
//
////const���ζ���  ������
//void test01() {
//
//    const Person person; //��������  
//    cout << person.m_A << endl;
//    //person.mA = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
//    person.m_B = 100; //���ǳ���������޸�mutable���γ�Ա����
//
//    //��������ʳ�Ա����
//    person.MyFunc(); //�������ܵ���const�ĺ���
//
//}
//
//int main() {
//
//    test01();
//
//    system("pause");
//
//    return 0;
//}

//
//class Person
//{
//	
//public :
//	Person(int a)
//	{
//		this->m_A=a;
//	}
////	//���ﲻʹ�����õ�ԭ����ǣ����ܷ��ؾֲ����������� 
////	Person operator+(const Person& p)
////	{
////		Person temp(0);//��Ϊ��д�����вι��캯������������Ҳ�������вι��� 
////		temp.m_A=this->m_A + p.m_A;
////		return temp;
////	}
//	
//public:
//	int m_A;
//};
//
//Person operator+(const Person &p1,const Person& p2)
//{
//	Person temp(0);
//	temp.m_A=p1.m_A+p2.m_A;
//	return temp;
//}
//
//int main()
//{
//	Person p2(10);
//	Person p1(20);
//	Person p3=p1+p2;
//	cout<<"p3.m_A = "<<p3.m_A<<endl;
//	system("pause");
//	return 0;
//}
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout,const Person& p);
//public:
//	Person()
//	{
//		this->m_A=20; 
//	}
//
//private:
//	int m_A;
//};
//
////��ʽ���
//ostream& operator<<(ostream& cout,const Person& p)
//{
//	cout << p.m_A;
//	return cout;
//}
//
//
//int main()
//{
//	Person p1;
//	//��ʽ˼ά��̣�cout<<p1�������ǵĲ��������أ�Ȼ�󷵻ص���cout����׼����������ž���
//	//cout<<"hello world"<<endl;������õľͲ������ǵĲ��������غ�����������Ĭ�ϵ�cout
//	cout <<p1 <<"hello world"<< endl;
//	return 0;
//}


////�����������Լ�����������غ���
//class  Person
//{
//public:
//	friend ostream& operator<<(ostream& cout, Person p);
//	Person()
//	{
//		this->m_A=20;
//	}
//	Person& operator++()
//	{
//		this->m_A++;
//		return *this;
//	}
//	Person operator++(int)
//	{
//		Person temp=*this;
//		this->m_A++;
//		return temp;
//	}
//
//
//private:
//	int m_A; 
//};
//
//ostream& operator<<(ostream& cout, Person p) 
//{
//    cout << p.m_A;
//    return cout;
//}
//
//
//void test01()
//{
//	Person p;
//	cout<< ++p<<endl;
//	cout<< p<<endl;
//	cout << p++ << endl;
//	cout<< p<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

////���ظ�ֵ�����=,���������Ч�� 
//class Person
//{
//	friend ostream& operator<<(ostream& cout,const Person &p);
//public:
//	
//	Person(int a)
//	{
//		this->m_A=new int(a);
//	}
//	~Person()
//	{
//		delete this->m_A;
//		this->m_A=NULL;
//	}
//	
//	void operator=(const Person&p1)
//	{
//		//ǳ���������漰ָ���ʱ�򣬻ᵼ���ڴ��ظ��ͷ� 
//		//this->m_A=p1.m_A;
//		//���
//		this->m_A=new int(*p1.m_A); 
//	}
//private:
//	int *m_A;
//};
//
//ostream& operator<<(ostream &cout,const Person &p)
//{
//	cout<<*p.m_A;
//	return cout;
//}
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	cout<<p1<<endl;
//	cout<<p2<<endl;
//	p1=p2;
//	cout<<p1<<endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


////���ع�ϵ�������
//class Person
//{
//	friend void operator==(const Person&p1,const Person&p2);
//public:
//	
//	Person(int a)
//	{
//		this->m_A=a;
//	}
//	
//private:
//	int m_A;
//};
//
//void operator==(const Person&p1,const Person&p2)
//{
//	if(p1.m_A==p2.m_A)
//		cout<<"p1 == p2"<<endl;
//	else
//		cout<<"p1 != p2"<<endl; 
//}
//
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	p1==p2;
//	
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


////���ع�ϵ�������
//class Person
//{
//	
//public:
//	
//	int operator()(int a,int b)
//	{
//		return a+b;
//	}
//	
//	
//private:
//	int m_A;
//};
//
//
//
//
//void test01()
//{
//
//	cout<<Person()(20,50)<<endl;
//	
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	vector<int> v;
//	int Max = max(2, 3);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a = 0) :_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(const A &aa) :_a(aa._a)
//	{
//		cout << "const A &aa" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//
//private:
//	int _a;
//};
//void F(A a)
//{
//
//}
//A F2()
//{
//	A aa;
//	return aa;
//}
//int main()
//{
//	//�����Ķ������������ڵ�ǰ��������
//	//A aa1;
//	//A aa2(1);
//	//������������������һ�У�ִ������������
//	A(2);
//
//	F(2);
//	A aa4 = 4;//������һ�����ʽ���У�����+��������-->�Ż�Ϊֱ�ӹ���
//
//	A ret = F2();//������һ�����ʽ���У���������+��������-->�Ż�Ϊһ����������
//
//	A ret2;
//	ret2 = F2();//�������˿�����ֵ�������Ż������Բ������ﲻ���������ʽ
//
//
//	//const int temp = 10;//Ȩ��ֻ�����������޸�
//	//int tmp=20;
//	//const int& val1 = temp;//int &val val��Ȩ���ǿɶ���д,��Ҫ����const��ʵ��Ȩ�޵�ƽ��
//	//int& val2 = tmp;
//	//val2 = 30;
//
//	//������ó�Ա����
//	d1.Print(); //ʵ������ d1.Print(&d1)
//	void Print()//ʵ������ d1.Print(Date *const d1)
//	return 0;
//}



//int main()
//{
//	//�������������������
//	//���Բ���ʼ�������ǿ��Գ�ʼ��
//	int* p1 = new int;
//	int* p2 = new int(10);
//	int* p3 = new int[10];
//	int* p4 = new int[10] {1, 2, 3, 4};
//
//	delete p1;
//	delete p2;
//	delete[]p3;
//	delete[]p4;
//	return 0;
//}


//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(int a, int b)
//	{
//		cout << "A(int a,int b)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = new A;
//	A* p3 = new A(1);
//	delete p2;
//	delete p3;
//	free(p1);
//	p1 = nullptr;
//
//	cout << endl;
//	A* p4 = new A[10]{ 1,2,3,4,5,6,{7,8} };
//	//new��delete����������������ʵ��malloc��free�ȵȲ��
//	//malloc�ȣ����ܵ��ù��캯��
//	//new��delete��Ҫ�������Զ������ͣ����Ե����Զ������͵Ĺ��캯������������
//	delete[]p4;
//
//	A* p5 = new A;//operate new->(malloc+ʧ�ܺ��׳��쳣) +���캯��
//	delete p5;//��������(�Զ��������������Դ���� + operator delete���ͷŵ�p5����ռ�==free��
//
//	return 0;
//}

//struct ListNode
//{
//	ListNode* next;
//	int _val;
//	ListNode(int val)
//		:next(nullptr),
//		_val(val)
//	{}
//};
//
//void func()
//{
//	//����ÿһ���ڵ�
//	//newʧ���ˣ����쳣������Ҫ�ټ���Ƿ�Ϊ��
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//
//	n1->next = n2;
//	n2->next = n3;
//	delete n1;
//	delete n2;
//	delete n3;
//}
//int main()
//{
//	try
//	{
//		func();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(int a, int b)
//	{
//		cout << "A(int a,int b)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};

//int main()
//{
//	//��Ҫ��ƥ��ʹ�ÿ��ٿռ䣬�������δ֪������
//	A* p1 = new A[10];
//	//����������������������ʵ�ʿ��Ŀռ�Ҫ���ĸ��ֽ����洢���ٿռ�ĸ���������Ϊ�˺����������������ʱ��֪���������ٴ�
//	//����ײ��ǵ�����operator new[]--> operator new����(n��) --> (malloc+ʧ�ܺ��׳��쳣) +���캯��
//
//	delete[]p1; 
//	//operator delete[]-->n����������(�Զ��������������Դ���� + operator delete���ͷŵ�ָ�� == free��
//	return 0;
//}

//int main()
//{
//	//������new���÷�
//	A* p1 = new A;
//	//������ǲ���ʹ��new
//	//1.ʹ��operator new
//	A* p2 = (A*)operator new(sizeof(A));
//	//2.ʹ�ö�λnew��ʾ���ù��캯��
//	//new(p2)A;//������û��ʹ�õĳ�ʼ���б�
//	new(p2)A{ 1,2 };//������ʹ�õĳ�ʼ���б� new(p2)A(10);
//
//	//������delete�÷�
//	delete p1;
//
//	//������ǲ���ʹ��delete
//	//1.��ʾ������������
//	p2->~A();
//	//2.ʹ��operator delete�ͷſռ�
//	operator delete(p2);
//
//
//	//new[]
//	A* p3 = (A*)operator new[](sizeof(A) * 10);
//	//����Ƕ����������ʹ��ѭ�����ã�ѭ������������new(p2)A[10]{1,2,3,4}
//	for (int i = 0; i < 10; ++i)
//	{
//		new(p3 + i)A(i);
//	}
//
//	//delete[]
//	for (int i = 0; i < 10; ++i)
//	{
//		(p3 + i)->~A();
//	}
//	operator delete[](p3);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int year, sum;
//
//    while (cin >> year >> sum)
//    {
//        int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//        int month = 1;
//        while (sum > arr[month])
//        {
//            if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
//            {
//                arr[2] += 1;
//            }
//            sum -= arr[month];
//            
//            month++;
//        }
//        if (sum != 0)
//            printf("%04d-%02d-%02d\n", year, month, sum);
//        else
//            printf("%04d-%02d-%02d\n", year, month - 1, arr[month - 1]);
//    }
//}
//// 64 λ������� printf("%lld")

//#include <iostream>
//using namespace std;
//
//int  Sum(int year, int month, int day)
//{
//
//    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int ret = 0;
//    for (size_t i = 1; i < month; i++)
//        ret += arr[i];
//    ret += day;
//    if (month > 2)
//        ret += (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
//    return ret;
//}
//int main() {
//    int n;
//    cin >> n;
//
//
//    while (n--)
//    {
//        int year1, month, day, num;
//        cin >> year1 >> month >> day >> num;
//        int sum = Sum(year1, month, day);
//        sum += num;
//        int year = year1;
//        year += (sum / 365);
//        for (int i = year1; i < year; i++)
//        {
//            sum-=365+ (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0));
//        }
//        int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//        arr[2] += (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
//        month = 1;
//        while (sum > arr[month])
//        {
//            sum -= arr[month++];
//        }
//        printf("%04d-%02d-%02d\n", year, month, sum);
//    }
//}

//#include <iostream>
//using namespace std;
//#include <string>
//#include <climits>
//class Solution {
//
//public:
//
//    int myAtoi(string str) {
//
//        string num;
//
//        int flag = 1;
//
//        long long ret = 0;
//
//        for (size_t i = 0; i < str.size(); i++)
//
//        {
//
//            if (str[i] != '-' && str[i] != '+' && str[i] != ' ' && !isdigit(str[i]))
//
//                break;
//
//            if (str[i] == '-')
//
//                flag = -1;
//
//            if (i + 1 < str.size() && (str[i] == '+' || str[i] == '-') && !isdigit(str[i + 1]))
//
//                return 0;
//
//            if (isdigit(str[i]))
//
//            {
//
//                for (size_t j = i; j < str.size() && isdigit(str[j]); j++)
//
//                {
//
//                    ret = ret * 10 + (str[j] - '0');
//
//                    if (ret >= INT_MAX && flag == 1)
//
//                        return INT_MAX;
//
//                    else if (ret > INT_MAX && flag == -1)
//
//                        return INT_MIN;
//
//                }
//
//                return flag * ret;
//
//            }
//
//
//
//
//
//            //
//
//        }
//
//        return flag * ret;
//
//    }
//};
//
//int main()
//{
//    string s;
//    cin >> s;
//    Solution so;
//    int ret=so.myAtoi(s);
//    cout << ret << endl;
//}

#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1;
        string ans;
        for (int c = 0; i >= 0 || j >= 0 || c; --i, --j) {
            int a = i < 0 ? 0 : num1[i] - '0';
            int b = j < 0 ? 0 : num2[j] - '0';
            c += a + b;
            ans += to_string(c % 10);
            c /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string multiply(string num1, string num2) {

        string s1;
        for (int i = num1.size() - 1; i >= 0; i--)
        {
            int a = num1[i] - '0';
            string s2;
            int carry = 0;
            for (int j = num2.size() - 1; j >= 0; j--)
            {
                int b = num2[j] - '0', ret = a * b + carry;
                carry = ret / 10;
                ret %= 10;
                s2 += ret + '0';
            }
            if (carry != 0)
                s2 += carry + '0';
            reverse(s2.begin(), s2.end());
            for (int j = num1.size() - 1; j > i; j--)
            {
                s2 += '0';
            }
            s1 = addStrings(s2, s1);
        }
        int i = 0;
        for (; i < s1.size(); i++)
        {
            if (s1[i] != '0')
                break;
        }
        string ret=s1.substr(i, s1.size() - i);
        if (ret == "")
            return "0";
        else
            return ret;
    }
};

int main()
{
    Solution solution;
    string s=solution.multiply("9133", "0");
    cout << s << endl;

}