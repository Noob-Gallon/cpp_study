#include <iostream>
#include <windows.h>

using namespace std;

class MY_CIRCLE
{
public:
	int left, right, top, bottom;

	MY_CIRCLE(int l, int t, int r, int b) :left(l), top(t), right(r), bottom(b)
	{
	}

	void do_draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow()); // 전경창
		// console을 열었을 때 보이는 화면을 fore ground라고 한다.
		Ellipse(hdc, left, top, right, bottom);
	}

	MY_CIRCLE Clone()
	{
		return *this;
	}

	MY_CIRCLE& CloneR()
	{
		return *this;
	}

	MY_CIRCLE* CloneP()
	{
		return this;
	}
};

int main(void)
{
	MY_CIRCLE c1(100, 100, 180, 180);
	MY_CIRCLE c2(200, 200, 300, 300);

	c1.do_draw();
	c2.do_draw();

	return 0;
}