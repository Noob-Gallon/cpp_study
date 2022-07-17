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

	// �����ڸ� �̿��ؼ� �� �����Ͱ� ���� ����Ű�� ���� �����ϴ� �Լ�.
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
	// �����ڸ� �̿��ؼ� �����Ͱ� ����Ű�� ���� �ٲ��ش�.
	// Ref.

	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

void SwapPointer2(int** ptr1, int** ptr2)
{
	// �ּҸ� �̿��ؼ� �����Ͱ� ����Ű�� ���� �ٲ��ش�.
	// Address.
	// ���� �Ű����� ptr1�� ptr2�� main�Լ����� ���� ������ ���� ptr1�� ptr2�� �ּ��̴�.
	// �׷��Ƿ�, ptr1�� ptr2�� ����Ű�� ���� ���� �ٲ��ַ��� ������ ���� ��ȯ�� �־�� �Ѵ�.

	int* temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
