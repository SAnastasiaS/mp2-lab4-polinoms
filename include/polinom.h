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
	Polinom();
	void AddMonom(const Monom& m); 
	Polinom operator + (Polinom& p);
};
