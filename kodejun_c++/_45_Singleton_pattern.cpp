/*

	Design pattern : singleton pattern

	-클래스로부터 오직 한 개의 객체만 생성되도록 하는 방법

	-Design pattern : 객체 지향 프로그래밍에서 특정 문제에 봉착했을 때, 
	관습적으로 좋은 해결방안이라고 여겨지는 코딩 패턴을 디자인 패턴이라고 한다.

*/

#include <iostream>

using namespace std;

class Car {
private:
	Car() {}
	static Car* instance; // Car를 가리키는 pointer는 오로지 하나만 존재할 수 있다.
public:
	static Car* getInstance() {
		if (instance != nullptr) {
			return instance;
		}
		else {
			instance = new Car();
			return instance;
		}
	}
};

Car* Car::instance = nullptr; // class의 static variable을 초기화하는 유일한 방법.
// 자료형 namespace::변수명 = 값;

int main(void) {

	Car* c = Car::getInstance();
	Car* d = Car::getInstance();
	Car* e = Car::getInstance();
	cout << "c addr: " << c << endl;
	cout << "d addr: " << d << endl;
	cout << "e addr: " << e << endl;

	return 0;
}