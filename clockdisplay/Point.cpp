#include "Point.h"
/*
Point::Point(int a, int b)
{
	x = a;
	y = b;
	cout << "constructor" << endl<<x <<endl<< y<<endl;
}
*/

// ��::		����.		ָ��->
Point::Point(int a,int b):x(a),y(b)
//initialization��construct֮ǰ
{
	cout << "constructor" << endl << x << endl << y << endl;
}

Point::~Point()
{
	cout << "destructor" << endl;
}

B::B() :Point(3, 4)
{ 
	cout << "��������" << endl; 
	//�ȹ��츸���������
};

B::~B()
{
	cout << "��������" << endl;
	//�������������������
};