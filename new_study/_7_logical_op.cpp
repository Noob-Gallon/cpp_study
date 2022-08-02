#include <iostream>

using namespace std;

int main(void)
{
	int a(10), b(20); // C++ 표현법
	// int a = 10, b = 20;

	if ((a < b) and (b % 2 == 0)) {
		cout << "1" << endl;
	}
	else if ((a < b) or (b % 2 == 0)) {
		cout << "2" << endl;
	}
	else if (not (a < b))
	{
		cout << "3" << endl;
	}


	/*
		논리 연산자, logical operator.

		&& : AND
		|| : OR
		! : NOT

		C++에서는 and, or, not을 지원.
		(주의! 소문자!)

		키보드 중에서, &, |, !을 지원하지 않는 것을 고려.
	*/

	return 0;
}