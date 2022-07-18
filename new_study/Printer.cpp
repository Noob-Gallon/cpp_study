#define _CRT_SECURE_NO_WARNINGS

#include "Printer.h"
#include <iostream>
#include <cstring>

using namespace std;

void Printer::SetString(const char* _str)
{
	strcpy(str, _str);
}

void Printer::ShowString()
{
	cout << str << endl;
}