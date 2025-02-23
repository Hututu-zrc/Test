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
////	cout<<"请输入一个string ：";
////	cin>>arr;
////	cout<<"arr = "<<arr<<endl;
////	//bool类型的打印
////	bool temp=true;
////	cout<<"请输入一个bool ：";
////	cin>>temp;
////	cout<<"temp = "<<temp<<endl;
//
//	//三只小猪选择结构比大小
//	int PigA,PigB,PigC;
//	cout<<"请输入三只小猪的大小"<<endl;
//	cout<<"PigA :";
//	cin>>PigA; 
//	cout<<"PigB :";
//	cin>>PigB; 
//	cout<<"PigC :";
//	cin>>PigC; 
////	if(PigA>PigC)
////	{
////		if(PigA>PigB)
////		cout<<"PigA是最重的一只小猪"<<endl;
////		else 
////		cout<<"PigB是最重的一只小猪"<<endl;
////	}
////	else
////	{
////		if(PigC>PigB)
////		cout<<"PigC是最重的一只小猪"<<endl;
////		else 
////		cout<<"PigB是最重的一只小猪"<<endl;
////	}
//	int max=PigA>(PigB>PigC?PigB:PigC)?PigA:(PigB>PigC?PigB:PigC);
//	if(PigA==max)
//	cout<<"PigA是最重的一只小猪"<<endl;
//	else if(PigB==max)
//		cout<<"PigB是最重的一只小猪"<<endl;
//	else
//	cout<<"PigC是最重的一只小猪"<<endl;
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
//public://访问权限 这里是公共权限
//	 
//	//行为
//	void setname(string M_name)
//	{
//		name=M_name;
//	}
//	void getname()
//	{
//		cout<<"姓名为 : "<<name<<endl;
//	}
//	void setId(string ID)
//	{
//		Id=ID;
//	}
//	void getId()
//	{
//		cout<<"学号为 : "<<Id<<endl;
//	}
//	void setpassword(string word)
//	{
//		Password=word; 
//	} 
//	//属性 
//private: 
//	string name;//可读可写 
//	string Id;// 可读可写 
//	string Password;//可写,不可以读 
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
//    无参（默认）构造函数
//    Person() {
//        cout << "无参构造函数!" << endl;
//    }
//    有参构造函数
//    Person(int age ,int height) {
//
//        cout << "有参构造函数!" << endl;
//
//        m_age = age;
//        m_height = new int(height);
//
//    }
//    拷贝构造函数  
//    Person(const Person& p) {
//        cout << "拷贝构造函数!" << endl;
//        如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
//        m_age = p.m_age;
//        m_height = new int(*p.m_height);
//
//    }
//
//    析构函数
//    ~Person() {
//        cout << "析构函数!" << endl;
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
//    cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << endl;
//
//    cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << endl;
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
//        //1、当形参和成员变量同名时，可用this指针来区分
//        this->age = age;
//    }
//
//    Person& PersonAddPerson(Person &p)
//    {
//        this->age += p.age;
//        //返回对象本身
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
//    //返回this指针所指向的对象，然后返回引用类型，达到链式访问的目的
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
//    //this指针的本质是一个指针常量，指针的指向不可修改
//    //如果想让指针指向的值也不可以修改，需要声明常函数
//    void ShowPerson()  const{
//        //const Type* const pointer;
//        //this = NULL; //不能修改指针的指向 Person* const this;
//        //this->m_A = 100; //但是this指针指向的对象的数据是可以修改的
//
//        //const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
//        this->m_B = 100;
//    }
//
//    void MyFunc() const{
//        //mA = 10000;
//    }
//
//public:
//    int m_A;
//    mutable int m_B; //可修改 可变的
//};
//
//
////const修饰对象  常对象
//void test01() {
//
//    const Person person; //常量对象  
//    cout << person.m_A << endl;
//    //person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
//    person.m_B = 100; //但是常对象可以修改mutable修饰成员变量
//
//    //常对象访问成员函数
//    person.MyFunc(); //常对象不能调用const的函数
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
////	//这里不使用引用的原因就是，不能返回局部变量的引用 
////	Person operator+(const Person& p)
////	{
////		Person temp(0);//因为我写的是有参构造函数，所以这里也必须是有参构造 
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
////链式编程
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
//	//链式思维编程，cout<<p1，是我们的操作符重载，然后返回的是cout，标准输出流，接着就是
//	//cout<<"hello world"<<endl;这个调用的就不是我们的操作符重载函数，是我们默认的cout
//	cout <<p1 <<"hello world"<< endl;
//	return 0;
//}


////关于自增和自减运算符的重载函数
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

////重载赋值运算符=,到达深拷贝的效果 
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
//		//浅拷贝，在涉及指针的时候，会导致内存重复释放 
//		//this->m_A=p1.m_A;
//		//深拷贝
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


////重载关系运运算符
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


////重载关系运运算符
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
//	//有名的对象，生命周期在当前的作用域
//	//A aa1;
//	//A aa2(1);
//	//匿名对象，生命周期这一行，执行完马上析构
//	A(2);
//
//	F(2);
//	A aa4 = 4;//在连续一个表达式当中，构造+拷贝构造-->优化为直接构造
//
//	A ret = F2();//在连续一个表达式当中，拷贝构造+拷贝构造-->优化为一个拷贝构造
//
//	A ret2;
//	ret2 = F2();//这里变成了拷贝赋值，不能优化，所以不是这里不是连续表达式
//
//
//	//const int temp = 10;//权限只读，不可以修改
//	//int tmp=20;
//	//const int& val1 = temp;//int &val val的权限是可读可写,需要加上const，实现权限的平移
//	//int& val2 = tmp;
//	//val2 = 30;
//
//	//对象调用成员函数
//	d1.Print(); //实际上是 d1.Print(&d1)
//	void Print()//实际上是 d1.Print(Date *const d1)
//	return 0;
//}



//int main()
//{
//	//这里对于内置类型来讲
//	//可以不初始化，但是可以初始化
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
//	//new，delete在内置类型上面其实和malloc，free等等差不多
//	//malloc等，不能调用构造函数
//	//new和delete主要是用于自定义类型，可以调用自定义类型的构造函数和析构函数
//	delete[]p4;
//
//	A* p5 = new A;//operate new->(malloc+失败后抛出异常) +构造函数
//	delete p5;//析构函数(自定义类型里面的资源清理） + operator delete（释放的p5这个空间==free）
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
//	//创建每一个节点
//	//new失败了，抛异常，不需要再检查是否为空
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
//	//不要乱匹配使用开辟空间，容易造成未知的问题
//	A* p1 = new A[10];
//	//如果这个类有析构函数，则实际开的空间要多四个字节来存储开辟空间的个数，这是为了后面调用析构函数的时候知道析构多少次
//	//这里底层是调用了operator new[]--> operator new函数(n次) --> (malloc+失败后抛出异常) +构造函数
//
//	delete[]p1; 
//	//operator delete[]-->n次析构函数(自定义类型里面的资源清理） + operator delete（释放的指针 == free）
//	return 0;
//}

//int main()
//{
//	//正常的new的用法
//	A* p1 = new A;
//	//如果我们不能使用new
//	//1.使用operator new
//	A* p2 = (A*)operator new(sizeof(A));
//	//2.使用定位new显示调用构造函数
//	//new(p2)A;//这里是没有使用的初始化列表
//	new(p2)A{ 1,2 };//这里是使用的初始化列表 new(p2)A(10);
//
//	//正常的delete用法
//	delete p1;
//
//	//如果我们不能使用delete
//	//1.显示调用析构函数
//	p2->~A();
//	//2.使用operator delete释放空间
//	operator delete(p2);
//
//
//	//new[]
//	A* p3 = (A*)operator new[](sizeof(A) * 10);
//	//如果是多个对象，下面使用循环调用（循环更灵活）或者是new(p2)A[10]{1,2,3,4}
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
//// 64 位输出请用 printf("%lld")

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