#include <iostream>

using namespace std;

/*
object as function parameter

-class Person
-object p of class Person
-function: void foo(Person p_of_foo)

-Person p;
-foo(p);

-p_of_foo is a copy of p

-p_of_foo를 수정해도, p는 바뀌지 않는다.
-즉, call-by-value. argument p_of_foo는 p의 copy임.
*/

void foo(int k)
{
	k += 1;
}

class Person 
{
public:
	int age;

	int getAge() // getter
	{
		return age;
	}
	void setAge(int _age) // setter
	{
		age = _age;
	}
	// under score가 붙은 argument는 local variable, 최근 트렌드
};
// class 안에 implementation을 넣는 경우와 밖에 놓는 경우.
// 
// 1) 안에 넣는 경우.
// inline function으로 대체된다. 
// 속도가 빨라질 수 있으나, source code가 길어질 수 있다.
// 즉, function이 길지 않으면 class 안에 선언하는 것이 좋다.

// 2) 밖에 놓는 경우
// inline보다 속도가 느리지만, source code의 길이를 단축할 수 있다.

void foo(Person& p_of_foo) 
// p_of_foo가 Class p의 참조자가 되면서 값을 변경할 수 있게 된다.
{
	p_of_foo.age = p_of_foo.age * 2;
}

/*
object reference as function parameter

-class Person

-object p of class Person

-function: void foo(Person& p_of_foo)

-Person p;
-foo(p)

-p_of_foo is another name of p

-p_of_foo를 수정하면, p도 바뀐다.
*/

/*
object as function return value

-class Person

-object p of class Person

-function Person bar()

-Person p = bar()

-p is a copy of a return of function bar.
*/

int main(void)
{
	int i = 40;
	foo(i); // call-by-value

	/*
	getter, setter

	-private member variable
	-private member를 별도로 read, write 할 수 있는 member function 제공 필요
	-read하는 function을 getter
	-write하는 function을 setter
	-getter/setter naming: get/set+variable_name
	-member variable: age(private), getAge(), setAge()	
	*/

	Person p;

	p.age = 20;

	cout << "Before age: " << p.age << endl;

	foo(p); // call-by-value에 의해 값이 함수에서 변하지 않음.
	// 객체를 이용해서 프로그래밍 할 때, call-by-value를 하면 객체가 클 경우,
	// 복사되면서 메모리를 많이 잡아먹는다. 이 때, 참조자(reference)를 이용하여
	// 작업을 빠르게 수행할 수 있다.

	cout << "After age: " << p.age << endl;

	return 0;
}