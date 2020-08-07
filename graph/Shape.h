#pragma once
#include "XYPos.h"
class Shape
{
public:
	Shape();
	virtual ~Shape();	//ֻҪ��virtual�ĳ�Ա������������Ҳ����ΪVirtual
	virtual void render();
	//���Shape��������ͬ��������������������ϵ
	void move(const XYPos&);
	virtual void resize();
protected:
	XYPos center;
};

