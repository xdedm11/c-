#include "Integer.h"
const Integer operator+(const Integer& lhs, const Integer& rhs)
{
	//��Ԫ���������Զ��岻�ܷ���h�ļ���
	//glogbal operators(friend)
	return Integer(lhs.i + rhs.i);
}

/*
Integer::operator double() const
{
	return (double)this->i;
}
*/