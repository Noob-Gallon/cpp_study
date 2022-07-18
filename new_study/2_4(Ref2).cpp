#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;

	// RefRetFuncOne �Լ��� ref�� return�ϸ�
	// �Ű������� ����� ������ ref�� ���������� �����ϹǷ� �Ҹ�ȴ�.
}

int RefRetFuncTwo(int& ref)
{
	// �� �Լ� ������ �Ű������� �����ڷ� ����ǹǷ�,
	// ���ڷ� ���޹��� int�� �� �Լ������� ++�ȴ�.
	// �׷���, ��ȯ���� int�� �̹Ƿ�, �����ڰ� return�Ǵ� ���� �ƴ϶�
	// int ���� return �ȴ�.
	// ����, return�Ǵ� ���� �޴� main �Լ������� ������
	// �����ڰ� �ƴ϶� int �����̴�.

	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1); // �����ڸ� ��ȯ�ϴ� �Լ��� �������� ���𿡼� �����ڸ� �ʱ�ȭ �� �� �ִ�.
	int numx = RefRetFuncOne(num1); // �������� ��ȯ �Լ��� �Ϲ� ������ ���޹��� �� �ִ�.

	num1 += 3;
	num2 += 100;
	numx += 7;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "numx: " << numx << endl;
	cout << "\n\n\n";

	// ------------------------------ //

	int num3 = 1;
	int num4 = RefRetFuncTwo(num3);

	num3++;
	num4 += 100;

	cout << "num1: " << num3 << endl;
	cout << "num2: " << num4 << endl;

	return 0;
}