// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������
#pragma once
#include "monom.h"
#include "list.h"

class Polinom
{
private:
	List list;
public:
	Polinom (/*Monom *m*/);
	void AddMonom(Monom& m); 
};
