#define _CRT_SEUCRE_NO_WARNINGS

#include "Cal.h"
#include <iostream>

using namespace std;

void Calculator::Init()
{
	add = 0;
	min = 0;
	mul = 0;
	div = 0;
}

float Calculator::Add(float A, float B)
{
	float num = A + B;
	add++;

	return num;
}

float Calculator::Min(float A, float B)
{
	float num = A - B;
	min++;

	return num;
}

float Calculator::Mul(float A, float B)
{
	float num = A * B;
	mul++;

	return num;
}

float Calculator::Div(float A, float B)
{
	float num = A / B;
	div++;

	return num;
}

void Calculator::ShowOpCount()
{
	cout << "\n\n\n";
	cout << "����: " << add << endl;
	cout << "����: " << min << endl;
	cout << "����: " << mul << endl;
	cout << "������: " << div << endl;
}


