#include "Integer.h"

int main()
{
	Integer x(1), y(5);
	/*
	Integer z = x + 3;
	//xΪreceiver���Զ�����iΪ3��Integer(�Զ�����ת�����������explicit���ι��캯�����޷��Զ�����ת��)
	Integer out = x.operator+(y);//xΪreceiver
	//Integer w = 3+ y;	//x
	Integer w = -x;
	w.print();
	z.print();
	out.print();
	*/
	Integer z = 3 + y;
	z.print();
}