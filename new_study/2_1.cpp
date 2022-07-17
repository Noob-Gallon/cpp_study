#include <iostream>

using namespace std;

int main(void)
{
	// const int num = 10;
	// ���� num�� ���� ������ �� ����.

	const int num = 10;

	int val1 = 1;
	int val2 = 2;
	int val3 = 3;

	cout << num << endl;

	// num++;

	const int* ptr1 = &val1;
	int* const ptr2 = &val2;
	const int* const ptr3 = &val3;

	// *ptr1 = 10; �Ұ���, const int*�� �����ϸ� 
	// ptr1�� ����Ű�� ����� ���� ������ �� ����.
	// ��, ptr1 = &val2; ��� ���� �ٸ� ���� ����Ű��
	// ���� ���� ����.

	cout << *ptr1 << endl;;

	// ptr2 = &val1; �Ұ���, int* const�� �����ϸ�
	// �����Ͱ� �ٸ� �ּҸ� ����Ű���� ���� �� ����.

	cout << *ptr2 << endl;;

	// const int* const ptr3 = &val3��
	// �����Ͱ� ����Ű�� ����� ���� ������ �� ������
	// �����Ͱ� �ٸ� �ּҸ� ����Ű���� ���� �� ����.

	cout << *ptr3 << endl;;

	return 0;
}