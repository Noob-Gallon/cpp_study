#include <iostream>

using namespace std;

void func_A(void) {
	cout << "This is func_A" << endl;
}

void func_B(void) {
	cout << "This is func_B" << endl;
}

int func_C(int _num) {
	cout << "This is func_C: " << _num << endl;

	return _num + 1;
}

int main(void) 
{
	void (*pf)(void);
	pf = &(func_A);
	pf();

	pf = &(func_B);

	int (*pf2)(int);
	pf2 = &(func_C);
	cout << "num is : " << pf2(5) << endl;

	/*
	Function Pointer

	- 함수의 주소는 함수 이름 그 자체

	-함수 주소를 담는 포인터

	ex) int (*pf)(int);

	return 0;
	*/
}