#include "ILNum.h"

//���������� � LNum.h, ������� �� ����� ����������.

ILNum::ILNum()
{

}

void ILNum::setDigits(string a)
{
	if (a[0] == '-')
		pos = false;
	for (auto it = a.rbegin(); it != a.rend(); it++)
		digits.push_back(*it - '0');
	if (!pos)
		digits.pop_back();
}

int ILNum::len()
{
	return digits.size();
}