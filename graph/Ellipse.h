#pragma once
#include "Shape.h"
class Ellipse :
    public Shape
{
public:
    Ellipse(float maj, float minr);
    virtual void render();
    //������virtual��������ɼӿɲ��ӣ�Ϊ�˿ɶ��Լ���
protected:
    float major_axis, minor_axis;
};

