#ifndef _CAL_H_
#define _CAL_H_

class Calculator
{
private:
	int add;
	int min;
	int mul;
	int div;
public:
	void Init();
	float Add(float A, float B);
	float Min(float A, float B);
	float Mul(float A, float B);
	float Div(float A, float B);
	void ShowOpCount();
};

#endif