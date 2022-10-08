/*

	const and class

	-member function 뒤에 const를 붙이면,
	그 함수 내에서는 member variable의 값을 수정할 수 있다.

	-Class 객체를 가리키는 pointer가 const이면,
	const member function만 호출할 수 있다.

*/

#include <iostream>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string _name) {
		this->name = _name;
	}

	void showMyName() const {
		// this->name += ", Nice guy";
		// class의 method에 const를 붙이면, const method 내에서는
		// member variable의 값을 변경할 수 없다.
		cout << "My name is " << this->name << endl;
	}

	void showChangedName() {
		this->name = this->name + " Nice guy";
		cout << "My name is " << this->name << endl;
	}

};

int main(void) {

	const Person* pa = new Person("Tom"); 
	// pointer에 const를 붙이면, 포인터를 통해서 포인터 내의 값을 바꿀 수 없다.
	// 이렇게 const ptr을 만들면, pointer를 통해서는 class 내의 method 중에서도
	// const가 붙은 method 들만 호출할 수 있다.

	unique_ptr<Person> pb(new Person("John"));

	pa->showMyName();
	// pa->showChangedName();
	// const ptr이므로, const가 붙지 않은 member method 호출 불가

	pb->showChangedName();
	// pb는 const가 아니기 때문에, 호출 가능.

	delete pa;

	return 0;
}