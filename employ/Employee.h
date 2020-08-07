#include <iostream>
using namespace std;

class Employee
{
//��Ա����������ʱ��д��body����Ϊ��������
public:
	Employee(const string& name, const string& ssn);
	const string& get_name() const;
	/*
	const���α���ʱ�������ڳ�ʼ��ʱ��ֵ������ǰ��extern(����ĳ��const��ȫ�ֱ���)
	������const����cin������������ݣ���Ϊ����ʱ��δ֪(externҲһ��)
	ָ��	
		char* const q="abc";	q��const,�ɸ�ָ�����ݣ�����q++
		const char *p="ABC";	pָ��������const������ͨ��ָ���޸�ָ������
	��
		Person p1("Fred",200);
		const Person *p=&p1;		pָ�����ݣ���������const
		Person const* p=&p1;		������const
		Person *const p=&p1;		ָ����const
		const��*ǰ���������const����*������ָ����const

		const���ζ���ʱ����������ֵ�����޸ģ�����Щ��Ա�������޸ĳ�Ա����
		�����ڳ�Ա�������const����֤�ĳ�Ա�������޸��κγ�Ա�����������Ͷ��嶼Ҫ�ظ���;
		��Ա��������const�ɹ������أ�Ĭ�ϵ�����const��
		�����Ա����Ϊconst��������ó�ʼ���б��ʼ��
	
	�ַ����ڴ���Σ�Ĭ��const��	����ʱ�����ָ����ʽ������������������ʽ������´������ջ
	����
		void f(const int* x);	����ָ�룬����֤�����޸�ָ��ָ������
	*/
	void print(ostream& out) const;
	void print(ostream& out, const string& msg) const;
protected:
	string m_name;
	string m_ssn;
};

Employee::Employee(const string& name, const string& ssn) :m_name(name), m_ssn(ssn) {}

inline const string& Employee::get_name() const
{
	return m_name;
}

inline void Employee::print(ostream& out) const
{
	out << m_name << endl;
	out << m_ssn << endl;
}

inline void Employee::print(ostream& out, const string& msg) const
{
	out << msg << endl;
	print(out);		//������븴��
}