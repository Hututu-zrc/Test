#include <iostream>
#include <cmath>
using namespace std;

class Dot
{
public:
	void set_x(int X)
	{
		x = X;
	}
	int get_x()
	{
		return x;
	}
	void set_y(int Y)
	{
		y = Y;
	}
	int get_y()
	{
		return y;
	}
private:
	int x;
	int y;
};


class Circle
{
public:
	void set_radius(double R)
	{
		radius = R;
	}
	double get_radius()
	{
		return radius;
	}
	void set_center(Dot &point)
	{
		center=point;
	}
	Dot get_center()
	{
		return center;
	}
	double calculate_Diameter()
	{
		return 2 * radius;
	}
	double calculate_Perimeter()
	{
		return 2 * 3.14 * radius;
	}
private:
	double radius;
	Dot center; 

};



void judge_relation(Circle& c, Dot& d)
{
	double distance = sqrt((double)(
		(c.get_center().get_x() - d.get_x()) * (c.get_center().get_x() - d.get_x()) +
		(c.get_center().get_y() - d.get_y()) * (c.get_center().get_y() - d.get_y())
		));
	if (distance == c.calculate_Diameter())
		cout << "The dot is on the circle!" << endl;
	else if (distance < c.calculate_Diameter())
		cout << "The dot is inside the circle" << endl;
	else
		cout << "The dot is outside the circle" << endl;
}
int main()
{
	Circle C;
	Dot D;
	Dot C_D;
	C.set_radius(2.5);
	D.set_x(3);
	D.set_y(4);
	C_D.set_x(0);
	C_D.set_y(0);
	C.set_center(C_D);
	judge_relation(C, D);
	system("pause");
	return 0;
}

//值得注意的是，类中可以嵌套其他的类
//此题中，圆的圆心也是点，所以直接嵌套点类 





