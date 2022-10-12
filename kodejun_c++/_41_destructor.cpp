/*

	Constructor, 생성자
	Destructor, 소멸자

	-객체가 사라질 때 수행되는 함수
	-클래스 이름에 ~를 붙여서 선언
	-객체가 할당받은 동적 메모리를 해제해야 할 때 사용

*/

#include <iostream>
using namespace std;

class Car {
public:
	Car() {
		cout << "Car constructor was called!\n";
		ptr = new char[30000000];
	}
	~Car() {
		cout << "Car destructor was called!\n";
		delete[] ptr;
	}
private:
	char* ptr;
};

int main() {
	cout << "Start --------------------\n";
	
	// 이와 같은 방법으로 지역을 임시로 지정해줄 수 있다.
	{
		Car c;
	}

	cout << "End ----------------------\n";

	return 0;
}