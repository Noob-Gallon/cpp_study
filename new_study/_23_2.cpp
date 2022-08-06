#include <iostream>

using namespace std;

class Person
{
public:
	int age;
	Person() : age(0) {};
};

Person bar() 
{
	Person _p;
	_p.age = 30;
	return _p;
}

Person* bar2()
{
	Person* _p = new Person();
	return _p;
}

Person& bar3() // 이름(reference)만 남기 때문에, 실질적으로 사용 불가
{
	Person _p;
	return _p;
}

int main(void)
{
	Person p1; 

	cout << "p1.age: " << p1.age << endl;

	p1 = bar(); // p1 = bar() ... return _p.
				// p1에 _p가 복사되어 들어간다.
				// 함수 안에서 만들어진 _p는 함수가 종료됨가 동시에 사라지지만
				// _p가 return되어 p1에 값으로 들어가게 되므로,
				// p1의 값이 바뀌게 된다.

	cout << "p1.age: " << p1.age << endl;

	Person* p = bar2();
	p->age = 23;
	// 함수 안에서 만든 object는 함수가 끝나면 사라지므로,
	// 참조자를 이용해서 넘겨주는 것은 의미가 없다.

	// 그렇기 때문에 보통 동적할당을 통한 pointer 주소를 넘겨준다.

	cout << "age: " << p->age << endl;

	delete p;

	return 0;
}