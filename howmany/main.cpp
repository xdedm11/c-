#include <iostream>
#include <string>
using namespace std;
/*
�½�һ����
	constructor
	virtual destructor
	copy constructor
*/
static int objectCount = 0;

class HowMany
{
public:
	HowMany() { objectCount++; print("HowMany()"); }
	HowMany(int i){ objectCount++; print("HowMany(int)"); }
	HowMany(const HowMany& o) { objectCount++; print("HowMany(HM)"); }
	/*��������	T::T(const T&)
		Ĭ�ϻ���������죬����û���Զ����print,ͬʱ����ÿһ����Ա������������Ա����Ҳ����ָ�룬stringҲһ����
			�������ָ�룬����ָ��ָ��ͬһ���ַ��������ʱ���������Σ����Ի����
			�������string���������Զ����ɵĿ�������
		ʹ�ÿ�������
			���س��������ú���ʱ����������Ϊ�������������û�ָ�룩
						�������ض���ʱ��
			ֱ�ӳ�������ʼ��������h3,h4
	*/
	void print(const string& msg = "")
	{
		if (msg.size() != 0)
		{
			cout << msg << ": ";
		}
		cout << "objectCount = " << objectCount << endl;
	}
	~HowMany()
	{
		objectCount--;
		print("~HowMany()");
	}

};

HowMany f(HowMany x)
{
	//�������û��ͨ�����캯��ʵ��
	cout << "begin of f" << endl;
	x.print("x argument inside f()");
	cout << "end of f" << endl;
	return x;
}
/*
c�����У�static���������ã�hidden��persistent
c++�У�static����ʵ��persistent��hidden��public��ʵ��
	ȫ�ֱ����Ķ����캯����main֮ǰ����
				����������main֮��
	static���γ�Ա���������Ա������ȫ�ֵġ�
		class�ڲ����������Ƕ��壬û�и��ñ�������ռ䣬�����ڵ���ȫ�ֳ�Ա����ǰҪ��ĳ��cpp����int A::i;
			�ڶ���һ������ǰ������ͨ���ࣺ����Ա ���޸ľ�̬��Ա����
			�ڶ���iʱ��ǰ�治�ɼ�static����Ϊ��ĳ�Ա�����ɱ������ļ����ʡ�
		���캯�������ó�ʼ���б���ʽ��ʼ������Ϊ��̬��Ա���������ڶ���ĵط�����ʼ��
		����public�ľ�̬��Ա����/����ʱ������	����::��Ա����/����
		��̬��Ա�������ɵ��÷Ǿ�̬��Ա����/����
		this��ʾ��ǰ��������	��::��̬��Ա����ʱ��this
*/
int main()
{
	HowMany h;
	h.print("after construction of h");
	HowMany h2 = 10;
	HowMany h3 = h;//HowMany h3(h);
	HowMany h4 = f(h);
	h.print("after call to f()");

}