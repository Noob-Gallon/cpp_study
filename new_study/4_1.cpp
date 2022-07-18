#include <iostream>

using namespace std;

class Point
{
public:
	int x;
	int y;
	// x, y 좌표의 범위는 0이상 100이하이다.
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;
public:
	void ShowRecInfo()
	{
		cout << "좌 상단: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;

		cout << "우 하단: " << '[' << lowRight.x << ", ";
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

// 다음 예제를 실행하면, 점의 범위는 0이상 100이하 이지만
// 범위에 속하지 않는 Point 객체가 존재하게 된다.

// 또한, 직사각형을 의미하는 Rectangle 객체의 좌 상단 좌표 값이
// 우 하단 좌표 값보다 크다.

// 이러한 문제는 대부분 프로그래머의 실수에서 발생하게 된다.
// 실수는 언제나 발생할 수 있지만, 실수에 대한 대책이 준비되어야 한다.
