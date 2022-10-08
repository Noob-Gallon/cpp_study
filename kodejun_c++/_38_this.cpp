/*

	pointer this

	- inside class definition

	- 객체 자신을 가리키는 포인터

	- pointer this를 이용해서 class 내에서
	member variable (property)와 member function (method)를 접근 가능

	C++에서 this는 객체 자신을 가리키는 pointer이기 때문에, 참조 연산자로 ->를 사용해야한다.
	this를 이용하면 argument와 local variable의 name을 같게 해서 코드를 짤 수도 있다.
	this는 객체 자기 자신을 가리키는 pointer(주소)이기 때문에, 주소를 이용하는 여러가지 동작을 수행할 수 있다.

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

	void showName() {
		cout << "My name is " << this->name << endl;
	}

};

int main() {

	unique_ptr<Person> pa(new Person("Tom"));
	pa->showName();

	return 0;
}