/*

	static member variable

	-객체와 상관없이 존재하는 variable
	-모든 객체가 마치 자신의 variable처럼 공유 (마치 kotlin의 companion object)
	-변경 내용이 모든 객체에게 visible
	-초기화는 별도로
	-객체 없이도 사용이 가능하다.

	const static member variable

	-값 변동 불가
	-class 선언할 때 초기화

	static member function

	-객체와 상관없이 존재
	- *** static variable만 access 가능 *** 객체가 없이도 존재할 수 있기 때문에, static method는 static variable만 access 가능하다.

*/

#include <iostream>

using namespace std;

class Car {
public:
	static int year; // non-const static variable이라면, class 바깥에서 초기화해준다.
	const static int year2 = 1010;
	int month;
	// const 변수이므로, 값을 바로 지정해주어야 한다.
	Car() {}

	void showYear() {
		cout << year << endl;
	}
	static void showYear2() {
		cout << year << endl;
	}
	void changeYear(int _y) {
		year = _y;
	}
	
};

int Car::year = 2020; // 이 방법이 static variable을 초기화하는 유일한 방법이다.
// kotlin에서는 그냥 생성할 때 초기값을 지정해주면 됐는데, 여기는 따로 class 바깥에서
// 지정해줘야 초기화할 수 있는 모양이다.

int main(void) {

	Car c;
	c.showYear(); // 2020

	Car d;
	d.showYear(); // 2020

	cout << "without object " << Car::year << endl;
	Car::showYear2(); // 2020, 그런데 static이므로, static variable에만 접근할 수 있는 static method가 불려온다.

	Car::year = 3030;
	c.showYear(); // 3030
	d.showYear(); // 3030

	cout << "without object: " << Car::year << endl; // 3030

	d.changeYear(4040);
	c.showYear(); // 4040
	d.showYear(); // 4040

	cout << "without object: " << Car::year << endl; // 4040

	cout << Car::year2 << endl;

	return 0;
}

