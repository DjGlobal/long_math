#include "LNum.h"

//����� ������ ���� ���������� �������, ��������� � LNum.h ��� ����������� �����,
//������ ����� ������� ������� �����. ��������� �������� ������� ����� �� ����� ����������.

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