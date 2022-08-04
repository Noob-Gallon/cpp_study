#include <iostream>

using namespace std;

void func_a(int a, int b=2, int c=3) {
	cout << a << " : " << b << " : " << c << endl;
}

int main(void)
{
	func_a(999, 888, 777);

	/*
		defulat parameter of function
		
		- 함수 파라미터에 기본값을 지정,
		- 인수가 없는 경우, 기본값으로 호출

		void func(int a, int b);
		void func(int a = 5, int b = 6);
		void func(int a, int b = 6);
		=> 이 경우에, a는 필수로 값을 지정해주어야 한다.
	*/

	return 0;
}