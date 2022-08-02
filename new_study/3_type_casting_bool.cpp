#include <iostream>

using namespace std;

int main()
{
	/*char c = 'a';
	cout << c << endl;
	cout << (int)c << endl; Casting 방법 2가지
	cout << int(c) << endl;*/

	// a는 ASCII 코드 값이 97이다.

	cout.setf(ios_base::fixed, ios_base::floatfield);
	// setf : set format
	// ios_base::floatfield, 소숫점을 찍을 때 어떻게 찍는가?
	// ios_base::fixed, 0을 정해진 숫자만큼 찍어라.
	// 기본은 소숫점 이하가 0으로 끝나면 생략하는데,
	// 이렇게 하면 끝까지 다 찍는다.

	float a = 10.0 / 3.0;
	double b = 10.0 / 3.0;

	cout << a << endl;
	cout << b << endl;

	a = a * 1e6; // 1*10^6
	b = b * 1e6; // 1*10^6

	cout << a << endl;
	cout << b << endl;

	// float는 double보다 숫자를 잃을 가능성이 높다.
	// 정밀한 계산을 하려면 double을 사용해야 한다.

	const int c = 10; // 더 이상 값이 바뀌지 않는다.
	cout << c << endl;

	const double pi_value = 3.141592; // #define보다 
	// Datatype을 정확히 지정해줄 수 있는 const 변수를
	// 사용하는 것이 좋다.

	return 0;
}