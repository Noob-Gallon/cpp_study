#include <iostream>

using namespace std;

class Point
{
public:
	int x;
	int y;
	// x, y ��ǥ�� ������ 0�̻� 100�����̴�.
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;
public:
	void ShowRecInfo()
	{
		cout << "�� ���: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;

		cout << "�� �ϴ�: " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;
	}
};

int main(void)
{
	Point pos1 = { -2, 4 };
	Point pos2 = { 5, 9 };

	Rectangle rec = { pos2, pos1 };
	rec.ShowRecInfo();

	return 0;
}

// ���� ������ �����ϸ�, ���� ������ 0�̻� 100���� ������
// ������ ������ �ʴ� Point ��ü�� �����ϰ� �ȴ�.

// ����, ���簢���� �ǹ��ϴ� Rectangle ��ü�� �� ��� ��ǥ ����
// �� �ϴ� ��ǥ ������ ũ��.

// �̷��� ������ ��κ� ���α׷����� �Ǽ����� �߻��ϰ� �ȴ�.
// �Ǽ��� ������ �߻��� �� ������, �Ǽ��� ���� ��å�� �غ�Ǿ�� �Ѵ�.
