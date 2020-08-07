#include "Person.h"
#include <cstring>
using namespace std;

Person::Person(const char* s)
{
	name = new char[::strlen(s) + 1];
	::strcpy_s(name, 20, s);
}
//private�������Ƕ������Կ��Է���ͬ������private��Ա
Person::Person(const Person& w)
//�������string���������Զ����ɵĿ�������
{
	name = new char[::strlen(w.name) + 1];
	::strcpy_s(name, 20, w.name);
}

Person::~Person()
{
	delete [] name;
}