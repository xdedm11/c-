#pragma once
#include <iostream>
/*
��ĿӦ��Ϊ��Ա
= () [] -> ->* ����Ϊ��Ա
����������Ԫ�����Ϊ�ǳ�Ա
*/
class Integer
{
public:
	Integer(int n = 0) :i(n) {}
	/*
	const Integer operator+(const Integer& n) const
	{
		return Integer(i + n.i);//����ֵΪconst�������Ϊ��ֵ
	}
	*/
	const Integer operator-() const
	{
		return Integer(-i);
	}
	friend const Integer operator+(const Integer& lhs, const Integer& rhs);
		//glogbal operators(friend)
	//operator double() const;
	void print() { std::cout << i << std::endl; }
private:
	int i;
};

