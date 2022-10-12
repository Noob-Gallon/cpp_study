/*

	Copy constructor

	- 언제 copy constructor를 새로 만들어서, 정의해서 사용해야 하는가?

*/

#include <iostream>

using namespace std;

class Car {
private:
	int year;
	char* ptr;
public:
	Car(int _year) : year(_year) {
		cout << "original constructor " << endl;
		ptr = new char[30000000];
	}
	~Car() {
		delete[] ptr;
	}
	Car(Car& _car) {
		cout << "Copy Constructor Was Called!" << endl;
		year = _car.year;
		ptr = new char[30000000];
	}
};

int main() {

	Car c(2010);

	{
		Car d = c; // 이를 이용하면, 
		// default copy constructor를 이용해서 copy constructor가 실행된다.
		// 즉, d에 있는 ptr도 c가 가리키던 곳을 가리키게 된다.
		// class가 의도한 것은, static이 아니기 때문에 각 class가 별개의 ptr 변수를 갖는 것이 맞을 것이다.
		// 하지만 이 예제에서는 두 개의 class에서 member ptr이 모두 같은 메모리를 가리킨다.
		// 이 예제의 경우, 중괄호가 끝나면 d는 제거된다. 즉, 소멸자가 실행된다.
		// 그런데 소멸자에서는 ptr의 메모리 공간을 해제시킨다.
		// 이렇게 되면, c와 d가 같은 메모리를 가리키고 있으므로, 메모리 공간이 해제되면
		// c가 가리키는 ptr의 메모리가 사라지게 돼서 문제가 발생하게 된다.
	}

	// deep copy : 깊게 복사하는 것, copy를 custom하게 지정한다.
	// shallow copy : 얕게 복사하는 것, 그냥 값을 그대로 복사해옴. (포인터가 가리키는 메모리주소까지 복사)

	return 0;
}