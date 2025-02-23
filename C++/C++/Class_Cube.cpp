#include <iostream>
using namespace std;
class Cube
{
public:
	int Calculate_S(Cube &C)
	{
		return 2*C.H*C.L+2*C.H*C.W+2*C.L*C.W;
	}
	int Calcalate_V(Cube &C)
	{
		return C.H*C.L*C.W;
	}
	
	//L,W,H³õÊ¼»¯ 
	void set_L(int l)
	{
		L=l;
	}
	int  get_L()
	{
		return L;
	}
		void set_W(int w)
	{
		W=w;
	}
	int  get_W()
	{
		return W;
	}
	void set_H(int h)
	{
		H=h;
	}
	int  get_H()
	{
			return H;
	}
	void is_compare(Cube &C2)
	{
	if(L==C2.get_L() && W== C2.get_W() && H==C2.get_H())
		cout<<"Inside : they are same!"<<endl;
	else 
		cout<<"Inside : they are unlike!"<<endl;
	}
		
private:
	int L;
	int W;
	int H;	
};

void Is_compare(Cube &C1,Cube &C2)
{
	if(C1.get_L()==C2.get_L() && C1.get_W()== C2.get_W() && C1.get_H()==C2.get_H())
		cout<<"Outside : they are same!"<<endl;
	else 
		cout<<"Outside : they are unlike!"<<endl;
}
int main()
{
	Cube C;
	C.set_L(10);
	C.set_W(10);
	C.set_H(10);
	
	Cube C2;
	C2.set_L(10);
	C2.set_W(10);
	C2.set_H(10);
	cout<<"L = "<<C.get_L()<<endl; 
	cout<<"W = "<<C.get_W()<<endl; 
	cout<<"H = "<<C.get_H()<<endl; 
	cout<<"S = "<<C.Calculate_S(C)<<endl;
	cout<<"V = "<<C.Calcalate_V(C)<<endl;
	C.is_compare(C2);
	Is_compare(C,C2);
	system("pause");
	return 0;
}
