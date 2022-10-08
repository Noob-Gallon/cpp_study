/*

	const and pointer

	1) const int* pa

		pa가 가리키는 위치에 있는 변수의 값을 바꿀 수 없음.
		const [ int* pa ] : [ ] 안에 들어있는 부분이 const라는 것이다.
		즉, pa의 값을 read할 수는 있지만, 가리키는 곳의 값을 바꿀 수는 없다는 뜻이다.

	2) int* const pa

		pa에 저장된 주소 값을 바꿀 수 없음
		int* const [ pa ] : 포인터가 가리키는 주소를 바꿀 수 없다. 즉, reassign이 불가능하다 (마치 Kotlin의 val 또는 Javascript의 const와 비슷함)


	3) const int* const pa

		1)번과 2)번이 모두 적용된다.
	
*/

#include <iostream>

using namespace std;

int main(void) {

	// ------------------------------------------
	// 1) 포인터가 정적할당이므로, delete를 할 필요가 없다.

	cout << "1)\n";

	int a = 10;
	int* pa = nullptr;
	pa = &a;

	cout << "before: " << *pa << endl; // 10
	
	*pa = 35;

	cout << "after: " << *pa << endl; // 35

	int b = 10;
	const int* pb = nullptr;

	pb = &b;

	cout << "before: " << *pb << endl; // 10

	// *pb = 35; // const로 포인터를 감싸줬으므로, 포인터가 가리키는 변수의 값을 바꿀 수 없음.

	cout << "after: " << *pb << endl; // 10

	// ------------------------------------------
	// 2)
	cout << "\n\n\n2)\n";

	int c = 10;
	int d = 999;
	// int* const pc = nullptr; // 처음에 nullptr을 넣으면 끝까지 nullptr를 가리켜야만 한다.
	int* const pc = &c;

	cout << "before: " << *pc << endl; // 10
	// pc = &d;
	cout << "after: " << *pc << endl; // 참조하는 주소를 바꿀 수 없으므로, 10이 나온다.

	// ------------------------------------------
	// 3)

	int e = 10;
	int f = 555;

	const int* const pe = &e;

	// *pe = 50;
	// pe = &f;
	// 모두 변경이 불가능하다.

	return 0;
}