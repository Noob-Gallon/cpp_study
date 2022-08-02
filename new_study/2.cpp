#include <iostream>

using namespace std;

int main(void)
{
	//int a = 50;
	//int b(50); // b라는 변수를 50으로 초기화, 배열은 a[50];
	//int c = (50);
	//int d{ 50 };
	//int e = { 50 }; // 배열이 아니다.

	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;
	//cout << d << endl;
	//cout << e << endl;

	// 진수별 숫자 표기법

	// 16진수, 0x10;
	// 8진수, 010;
	// 10진수, 10

	//int a = 10; // 10진수
	//int b = 0x10; // 16진수
	//int c = 010; // 8진수

	//cout << a << endl;
	//cout << hex; // 숫자 출력을 16진수로 변경.

	//cout << b << endl;
	//cout << oct; // 숫자 출력을 8진수로 변경.

	//cout << c << endl;
	//cout << dec;

	//cout << a << " " << b << " " << c << endl;
	
	// bool 데이터형
	// true, false

	// boolalpha for cout

	// noboolalpha for cout

	bool b = true;
	bool c = false;

	cout << boolalpha; // std::boolalpha
	cout << b << endl;
	cout << c << endl;

	cout << noboolalpha; // std::noboolalpha
	cout << b << endl;
	cout << c << endl;

	return 0;
}