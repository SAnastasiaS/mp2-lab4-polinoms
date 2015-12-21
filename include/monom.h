 /*����� ��� ��������� ������ (double �����������, ����� ��������� �������)*/
#ifndef _TMONOM_H
#define _TMONOM_H

#include <iostream>
#include "datvalue.h"

using namespace std;

class TMonom : public TDatValue
{
protected:
		int Coefficient; //����������� ������
		int Index; //�������
public:
	TMonom (int CValue = 1, int IValue = 0) 
	{
		Coefficient = CValue;
		Index = IValue;
	}
	virtual TDatValue *GetCopy(); //���������� �����?!

	void SetCoefficient (int CValue)
	{
		Coefficient = CValue;
	}
	int GetCoeff(void)//?!
	{
		return Coefficient;
	}

	void SetIndex (int IValue)
	{
		Index = IValue;
	}

	int GetIndex(void)//?!
	{
		return Index;
	}

	TMonom& operator= (const TMonom &tm)
	{
		if (&tm != this)
		{
			Coefficient = tm.Coefficient;
			Index = tm.Index;
		}
		return *this;
	}

	int operator == (const TMonom &tm)
	{
		return (Coefficient==tm.Coefficient) && (Index==tm.Index);//������� �����
	}

	int operator< (const TMonom &tm)//��� ����� bool �������?
	{
		return Index<tm.Index;
	}

	friend ostream& operator << (ostream &ostr, TMonom &tm)
	{
		ostr << tm.Coefficient << " " << tm.Index;
		return ostr;
	}

friend class TPolinom;

};

typedef TMonom *PTMonom;
#endif;