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
	Polinom ();
	void AddMonom(Monom& m); 
};
