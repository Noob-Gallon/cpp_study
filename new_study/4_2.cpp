#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	int rad;
	Point center;
public:
	void Init(int _x, int _y, int _radius)
	{
		rad = _radius;
		center.Init(_x, _y);
	}
	void ShowCircleInfo() const
	{
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle InnerCircle;
	Circle OuterCircle;
public:
	void Init(int _x1, int _y1, int _radius1, int _x2, int _y2, int _radius2)
	{
		InnerCircle.Init(_x1, _y1, _radius1);
		OuterCircle.Init(_x2, _y2, _radius2);
	}
	void ShowRingInfo() const
	{
		InnerCircle.ShowCircleInfo();
		OuterCircle.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}