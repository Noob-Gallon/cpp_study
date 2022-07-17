#include <iostream>

using namespace std;

void SwapByRef2(int& ref1, int& ref2);

int main(void)
{
	int num = 12;
	int* ptr = &num; // ���� num�� ����Ű�� ������ ptr
	int** dptr = &ptr; // ������ ���� ptr�� �ּҸ� ����Ű�� ������ dptr(���� ������)

	int& ref = num; // ���� num�� ������ ref
	int* (&pref) = ptr; // ������ ���� ptr�� ����Ű�� �ּ� (��, &num) �� ����Ű�� ������ ������ ���� &pref
	int** (&dpref) = dptr; // &ptr�� ����Ű�� ������ ������ ���� &dpref

	cout << ref << endl;	// ������ ref�� num�� �Ȱ���. (��Ī)
	cout << *pref << endl;	// ������ pref�� ptr�� �Ȱ���. (���� �̸��� &�� �ٿ��� ��Ī���� ǥ������ ���� ���̴�.)
	cout << **dpref << endl;// ������ dpref�� dptr�� �Ȱ���.

	cout << "\n\n\n";

	// --------------- �������� Ȱ�뿡�� �Լ��� ū ��ġ�� �����Ѵ�. --------------- //

	// Call By Reference : �ּ� ���� ���޹޾Ƽ�, �Լ� �ܺο� ����� ������ �����ϴ� ������ �Լ� ȣ��\
	// 1) �ּ� ���� �̿��� Call By Reference
	// 2) �����ڸ� �̿��� Call By Reference

	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}

// �����ڸ� �̿��� Call By Reference

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}