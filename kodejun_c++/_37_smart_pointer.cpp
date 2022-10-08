/*

	- Smart pointer

	- 기존 문제점 :
		- 할당과 해제가 짝이 맞아야
		- new, delete
		- malloc, free

	- 다른 언어의 해결책
		- Java
		- Garbage collector : 사용하고 버려두고 오면 된다. 백그라운드에서 도는 프로그램인 Garbage collector가 알아서 처리해준다.
		- 개발자는 편하나, 컴퓨터의 CPU load 증가.

	- C++의 Smart Pointer 도입 
		- 메모리 자동 해제 : no garbage collector ---> 속도 향상
		- nullptr로 자동 초기화
		- delete 하면 에러 발생!
		- delete는 동적으로 할당받은 공간에 대해서만 사용


	프로그램이 복잡해지면, 그냥 스마트 포인터를 사용하는 것이 좋다.

*/

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string _name) {
		name = _name;
	}
	void showName() {
		cout << "My name is : " << name << endl;
	}

};

int main() {

	// ------------------------------------------
	// unique pointer

	unique_ptr<int> pa(new int); 
	// unique_ptr인데, int를 가리키는 포인터이고, 그 포인터의 이름은 pa이다. 이를 smart_pointer라고 한다.
	// 사실, 모든 자료형은 다 Class이므로, C++에서는 VariableName(value) 로 초기화도 가능하다.
	// unique_ptr도 마찬가지로 type을 지정해주고 변수명(argument)로 값을 넣어줄 수 있다.
	// 이처럼 만들어서 쓰고, 떠날 때는 홀연히 떠나면 된다.

	*pa = 30;

	cout << "*pa: " << *pa << endl;

	// delete pa; -> smart pointer이므로 알아서 치워준다.

	// ------------------------------------------
	// unique pointer array

	unique_ptr<int[]> pa2(new int[5]);

	for (int i = 0; i < 5; i++) {
		pa2[i] = i + 1;
		cout << i << " " << pa2[i] << endl;
	}

	// ------------------------------------------
	// 동적으로 할당받은 공간이 아니면 unique_ptr을 사용할 수 없다.

	int a = 10;

	// unique_ptr<int> pa3(&a);

	// cout << *pa3 << endl; 
	// 출력하면 오류가 발생하는데, 이는 unique_ptr을 동적으로 할당받은 공간이 아니라
	// 정적 공간에 대해서 사용했기 때문이다.

	// ------------------------------------------
	// Person class를 이용한 unique_ptr

	unique_ptr<Person> pP(new Person("John"));

	pP->showName();

	// ------------------------------------------
	// Smart Pointer를 쓰지 않고 일반 동적 할당으로 Class 변수 사용하기

	Person* pPnew = new Person("John new");
	pPnew->showName();

	delete pPnew;

	return 0;
}