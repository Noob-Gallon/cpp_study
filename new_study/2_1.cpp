#include <iostream>

using namespace std;

int main(void)
{
	// const int num = 10;
	// 변수 num의 값을 변경할 수 없음.

	const int num = 10;

	int val1 = 1;
	int val2 = 2;
	int val3 = 3;

	cout << num << endl;

	// num++;

	const int* ptr1 = &val1;
	int* const ptr2 = &val2;
	const int* const ptr3 = &val3;

	// *ptr1 = 10; 불가능, const int*로 선언하면 
	// ptr1이 가리키는 대상의 값을 변경할 수 없음.
	// 단, ptr1 = &val2; 등과 같이 다른 값을 가리키게
	// 만들 수는 있음.

	cout << *ptr1 << endl;;

	// ptr2 = &val1; 불가능, int* const로 선언하면
	// 포인터가 다른 주소를 가리키도록 만들 수 없음.

	cout << *ptr2 << endl;;

	// const int* const ptr3 = &val3는
	// 포인터가 가리키는 대상의 값을 변경할 수 없으며
	// 포인터가 다른 주소를 가리키도록 만들 수 없음.

	cout << *ptr3 << endl;;

	return 0;
}