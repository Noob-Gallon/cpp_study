/*

Pointer

	C언어에서는 포인터가 생유황 수준이었음.
	C++에서는 포인터가 식용 유황정도 수준으로 바뀌었다.

-pointer review : dereferencing

	*pa

-nullptr

	pointer를 만들고 초기화를 하지 않으면 이상한 값이 들어가있을 수 있다.
	따라서, 당장 값을 사용하지 않을 것이라면 0이나 NULL로 초기화해두면 된다.
	그런데, NULL은 사실 정수 NULL이다. 그래서 0이라고 해도 되는거였다.
	C++에서는 pointer를 NULL로 초기화하기 위한 특별한 값인 nullptr을 새로 만들었다.

-nullptr vs. NULL

	nullptr은 pointer 0 값을 가지고,
	NULL은 정수형 0 값을 가진다.

*/

#include <iostream>

using namespace std;

void func(int _i) {

	cout << "func (int _i)" << endl;
	return;
}

void func(char* _p) {

	cout << "func (char* _p)" << endl;
	return;
}

int main(void) {

	func(NULL); // NULL은 정수형이기 때문에, 위에 있는 함수를 부를 것이다.
	func(nullptr); // nullptr도 값이 0이긴 하지만, nullptr은 pointer 0이므로, 아래 것을 불러준다. (func 함수의 타입은 ptr이기만 하면 int인지, char인지는 크게 상관 없음)

	int a = 10;

	cout << "a: " << a << endl;

	int* np = nullptr;
	int* pa;
	pa = &a;

	cout << "pa: " << pa << endl;
	cout << "pa: " << *pa << endl; // dereferencing : 포인터의 주소에 가서 들어있는 값을 가져오는 것.

	return 0;
}
