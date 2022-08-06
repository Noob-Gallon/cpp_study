#include <iostream>

using namespace std;

int& func_a(int& n) {
	n = n + 10;
	return n;
}

int main(void)
{
	int k = 10;

	// int rk = func_a(k);

	/*cout << "k: " << k << endl;
	cout << "rk: " << rk << endl;*/

	int a = 10;
	func_a(a) = 1000;

	cout << "a: " << a << endl;
	/*
	reference for function return type

	-함수의 반환형으로서의 reference 사용

	int func(...);
	int& func(...);
	const int& func(...);
	*/

	return 0;
}