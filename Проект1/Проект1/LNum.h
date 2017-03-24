#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

typedef struct LNum {
	int len(); //����� len, ������������ ����� �����
	void setDigits(string str);
	vector<int> digits; //�������� ����� �������� �����������. (123 �������� ��� 3 -> [0], 2 -> [1], 1 -> [2])
} LNum;