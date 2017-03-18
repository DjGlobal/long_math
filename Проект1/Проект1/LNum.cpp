#include "LNum.h"

//����� ������ ���� ���������� �������, ��������� � LNum.h ��� ����������� �����,
//������ ����� ������� ������� �����. ��������� �������� ������� ����� �� ����� ����������.
//����������: obj.digits - ������ ����� � ����������� ����.

LNum::LNum()
{

}

void LNum::setDigits(string a)
{
	for (auto it = a.rbegin(); it != a.rend(); it++)
		digits.push_back(*it - '0');
}

bool NZER_N_B(LNum& num)
{
	for (int i = 0; i < num.len(); ++i)
		if (num.digits[i])
			return false;
	return true;
}

int LNum::len()
{
	return digits.size();
}