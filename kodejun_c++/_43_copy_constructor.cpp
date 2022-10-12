/*

	Copy constructor

	새로운 객체를 만들 때, 다른 객체의 내용을 복사해서 만드는 경우 호출되는 생성자.

	- 컴파일러에 의해 자동으로 생성되며,
	모든 member variable을 자동 복사한다.

	- 별도로 만들 수도 있음.
	생성자와 동일하되, 인수는 객체 reference variable
	member variable 복사를 모두 처리해 줘야 한다.
	
*/

#include <iostream>

using namespace std;

class Car {
private:
	int year;
public:
	Car(int _year) : year(_year) {
		cout << "original constructor " << endl;
	} 
	Car(Car& c) {
		cout << "Copy constructor was called!" << endl;
		year = c.year + 100;
	}
	void showYear() {
		cout << "This car was made in " << year << endl;
	}
};

int main() {

	Car c(2010);
	c.showYear();

	// c를 복사해서 객체 d와 e를 만드는 방법.
	// Car d = c; // Custom copy constructor called
	// Car e(c); // Custom copy constructor called
	// 생성자에 c를 넣어준다. Copy constructor가 자동생성 되어 있으므로, 
	// 이와 같은 방법으로 그냥 넣어줄 수 있다.
	// 그런데, 복사생성자를 사용하면 사용자가 class 내에서 지정해준 constructor가
	// 실행되지 않는다.

	// d.showYear();
	// e.showYear();
	
	Car f(2030);
	f.showYear();

	// d와 e는 생성 단계에서 복사가 실행됐기 때문에, copy constructor가 실행되면서 생성->복사가 이루어지지만
	// f = c;에서 f는 이미 생성되어 있는 class이다. f는 이미 있는 값인데, 그냥 c를 f에다가 넣어버린다.
	// 그냥 복사해버리는 것이며, 생성하는 것이 아니다.
	f = c;

	return 0;
}