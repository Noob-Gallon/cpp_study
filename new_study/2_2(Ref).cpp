#include <iostream>

using namespace std;

void SwapByRef2(int& ref1, int& ref2);

int main(void)
{
	int num = 12;
	int* ptr = &num; // 변수 num을 가리키는 포인터 ptr
	int** dptr = &ptr; // 포인터 변수 ptr의 주소를 가리키는 포인터 dptr(이중 포인터)

	int& ref = num; // 변수 num의 참조자 ref
	int* (&pref) = ptr; // 포인터 변수 ptr이 가리키는 주소 (즉, &num) 을 가리키는 포인터 참조자 변수 &pref
	int** (&dpref) = dptr; // &ptr을 가리키는 포인터 참조자 변수 &dpref

	cout << ref << endl;	// 참조자 ref는 num과 똑같다. (별칭)
	cout << *pref << endl;	// 참조자 pref는 ptr과 똑같다. (단지 이름에 &를 붙여서 별칭으로 표현해준 것일 뿐이다.)
	cout << **dpref << endl;// 참조자 dpref는 dptr과 똑같다.

	cout << "\n\n\n";

	// --------------- 참조자의 활용에는 함수가 큰 위치를 차지한다. --------------- //

	// Call By Reference : 주소 값을 전달받아서, 함수 외부에 선언된 변수에 접근하는 형태의 함수 호출\
	// 1) 주소 값을 이용한 Call By Reference
	// 2) 참조자를 이용한 Call By Reference

	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}

// 참조자를 이용한 Call By Reference

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}