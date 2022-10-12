// 다중 상속은 그렇게 권장되지 않는다.
// 이름이 같은 member가 superclass에 있는 경우
// namespace를 지정해줘서 해줘야 하기 때문?
// 교수님 의견으로 다중 상속은 자주 사용하지 않음.

#include <iostream>

using namespace std;

class PA {
public:
	int x;
	PA(int _x) : x(_x) {
		cout << "PA constructor called!" << endl;
	}
};

class PB {
public:
	int x;
	int y;
	PB(int _y) : y(_y) {
		x = 90;
		cout << "PB constructor called!" << endl;
	}
};

class CC : public PA, public PB {
public:
	CC(int _x, int _y) : PA(_x), PB(_y) { // 상속받은 subclass는 constructor를 통해서 superclass에서 상속받은 member를 초기화할 수 있다.
		cout << "CC constructor called!" << endl;
	}
};

int main(void) {

	CC obj_c(10, 20);

	cout << "----------------------" << endl;

	// 만약, 다중 상속을 받는데 superclass들이 이름이 같은 member variable을 갖고 있으면,
	// scope resolution operator를 이용해서 namespace를 지정해준다.
	cout << "x is: " << obj_c.PA::x << endl;
	cout << "x is: " << obj_c.PB::x << endl;
	cout << "y is: " << obj_c.y << endl;

	cout << "----------------------" << endl;

	return 0;
}