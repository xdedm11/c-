#pragma once
#include "VectorIndexError.h"

//ģ���ಢ��֧�ֽ�������ʵ�ַ���
template <class T>
class MyVector
{
public:
	//ÿһ���������Ǻ���ģ��
	MyVector(int);
	~MyVector();
	MyVector(const MyVector&) {}
	//MyVector& operator=(const Vector&);
	T& operator[](int);
	void length(int);
	int length() { return m_size; }
private:
	T* m_elements;
	int m_size;
};

template <class T>
MyVector<T>::MyVector(int size) :m_size(size)
{
	m_elements = new T[m_size];
}
template <class T>
T& MyVector<T>::operator[](int indx)
{
	if (indx < m_size && indx>=0)
	{
		return m_elements[indx];
	}
	else
	{
		//exit(22);
		//cout << "error";
		//T* error_marker = new T("some magic value");
		//return *error_marker;
		throw VectorIndexError(indx);
	}
}
template <class T>
MyVector<T>::~MyVector()
{
	delete[] m_elements;
}