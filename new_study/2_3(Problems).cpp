#include <iostream>

using namespace std;

void blank(void);
void plus_function(int& _num);
void inverse_sign(int& _num);
void SwapPointer(int*& ptr1, int*& ptr2);
void SwapPointer2(int** ptr1, int** ptr2);

int main(void)
{
	int num = 0;

	cout << num;
	blank();

	plus_function(num);
	cout << "plus_function\n" << num;
	blank();

	inverse_sign(num);
	cout << "inverse_sign\n" << num;
	blank();

	// ------------------------ //

	int num1 = 5;
	int* ptr1 = &num1;

	int num2 = 10;
	int* ptr2 = &num2;

	// 참조자를 이용해서 두 포인터가 서로 가리키는 값을 변경하는 함수.
	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer2(&ptr1, &ptr2);
	blank();

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	return 0;
}

void blank(void)
{
	cout << "\n\n\n";
}

void plus_function(int& _num)
{
	_num++;
}

void inverse_sign(int& _num)
{
	_num *= -1;
}

void SwapPointer(int*& ptr1, int*& ptr2)
{
	// 참조자를 이용해서 포인터가 가리키는 값을 바꿔준다.
	// Ref.

	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

void SwapPointer2(int** ptr1, int** ptr2)
{
	// 주소를 이용해서 포인터가 가리키는 값을 바꿔준다.
	// Address.
	// 현재 매개변수 ptr1과 ptr2는 main함수에서 각각 포인터 변수 ptr1과 ptr2의 주소이다.
	// 그러므로, ptr1과 ptr2가 가리키는 값을 서로 바꿔주려면 다음과 같이 교환해 주어야 한다.

	int* temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
