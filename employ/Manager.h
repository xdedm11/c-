#pragma once
#include "Employee.h"
/*����
����Ķ�����Ա���������Ķ��󣬶�����Ĳ��ֵ�ַ�ں󲿷�(upcast)    ��������
downcast�з���
*/

class Manager :
    public Employee
{
public:
    Manager(const string& name, const string& ssn, const string& title = "Someone");
    const string title_name() const;
    const string& get_title() const;
    void print(ostream& out) const;     //�븸��ͬ��������������ຯ�������ຯ�����أ�������������ʱ��ͬ������Ϊ���ຯ��;virtualʱ��������
private:
    string m_title;
};

Manager::Manager(const string& name, const string& ssn, const string& title) :
    Employee(name, ssn), m_title(title) {}

inline void Manager::print(ostream& out) const
{
    Employee::print(out);
    out << m_title << endl;
}
inline const string& Manager::get_title() const
{
    return m_title;
}
inline const string Manager::title_name() const
{
    return string(m_title + ": " + m_name);
}