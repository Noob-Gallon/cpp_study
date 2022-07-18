#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;

	// RefRetFuncOne 함수가 ref를 return하면
	// 매개변수로 선언된 참조자 ref는 지역변수와 동일하므로 소멸된다.
}

int RefRetFuncTwo(int& ref)
{
	// 이 함수 내에서 매개변수가 참조자로 선언되므로,
	// 인자로 전달받은 int가 이 함수내에서 ++된다.
	// 그러나, 반환형이 int형 이므로, 참조자가 return되는 것이 아니라
	// int 값이 return 된다.
	// 따라서, return되는 값을 받는 main 함수에서의 변수는
	// 참조자가 아니라 int 변수이다.

	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1); // 참조자를 변환하는 함수는 참조자의 선언에서 참조자를 초기화 할 수 있다.
	int numx = RefRetFuncOne(num1); // 참조자형 반환 함수를 일반 변수가 전달받을 수 있다.

	num1 += 3;
	num2 += 100;
	numx += 7;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "numx: " << numx << endl;
	cout << "\n\n\n";

	// ------------------------------ //

	int num3 = 1;
	int num4 = RefRetFuncTwo(num3);

	num3++;
	num4 += 100;

	cout << "num1: " << num3 << endl;
	cout << "num2: " << num4 << endl;

	return 0;
}