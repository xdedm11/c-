#include "Circle.h"

void render(Shape* p)
{
	//polymorphism ��̬�ԣ����������Ҷ�̬�󶨣����ú�����ָ����������
	//������ຯ�������أ��뱻���า��/��д(override),����ҲҪ����ͬ����
	p->render();	//p�Ƕ�̬����
}

void func()
{
	Ellipse ell(10, 20);
	ell.render();

	Circle circ(40);
	circ.render();

	render(&ell);	//�������ͣ�������virtual�����Ի���ellipse���͵�
	render(&circ);
}

int main()
{
	Ellipse elly(20, 40);
	Circle circ(60);
	//elly = circ;
	return 0;
}