#include <iostream>

using namespace std;

int main(void)
{
	int* pi = new int;

	*pi = 10;
	cout << *pi << endl;
	
	*pi = 20;
	cout << *pi << endl;

	delete pi;

	/* 
		Pointer를 이용한 변수 접근

		1) 기존 C언어의 방법

		int i = 10;
		int *pi = &i;
		*pi = 20;
		
		2) C++에서 변수공간을 생성하고 접근하는 방법

		new: 공간 생성(malloc)
		delete: 공간 해제(free)
	*/

	return 0;
}