#include <iostream>

using namespace std;

void func_a(int n) {
	n = 100;
}

void func_a(int* n) {
	*n = 100;
}

void func_b(int& n) {
	n = 555;
}

int main(void)
{
	int n(10);
	func_a(n);
	cout << "Value n: " << n << endl;

	func_a(&n);
	cout << "Pointer n: " << n << endl;

	func_b(n);
	cout << "Reference n: " << n << endl;

	// 첫번째 func_a는 당연히 10이 나온다. 
	// Why? Call by value. Call by reference가 아니다.
	// Call by value는 copy한다. main함수 내의 변수 n과
	// func_a 함수 내의 n은 전혀 다른 n이다. (복사됨)
	 






	int a = 55;
	int& ra = a;

	cout << "a: " << a << endl;
	cout << "ra: " << ra << endl;

	int k = 50;
	ra = k;

	cout << "a: " << a << endl;
	cout << "ra: " << ra << endl;
	cout << "k: " << k << endl;
	// 별명을 여러 개 갖게 된다.

	ra = 100;
	cout << "a: " << a << endl;
	cout << "ra: " << ra << endl;
	cout << "k: " << k << endl;

	//ra = 78;
	//cout << "a: " << a << endl; // 78
	//cout << "ra: " << ra << endl; // 78

	//int& rra = a;
	//rra = 56;

	//cout << "a: " << a << endl;
	//cout << "ra: " << ra << endl;
	//cout << "rra: " << rra << endl;

	//int& ka = rra;
	//ka = 89;

	//cout << "a: " << a << endl;
	//cout << "ra: " << ra << endl;
	//cout << "rra: " << rra << endl;
	//cout << "ka: " << ka << endl;

	/*
	Reference Variable
	참조 변수

	[1] 정의
	int a;
	int &ra = a; // 선언할 때

	[2] 왜 사용하는가?
	- 함수 호출시 사이즈가 큰 변수의 복사를 피하기 위해
	- 포인터의 위험을 피하기 위해 
	*/


	return 0;
}