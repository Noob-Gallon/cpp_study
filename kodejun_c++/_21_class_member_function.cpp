#include <iostream>
#include <string>

using namespace std;

/*
[1] class member function의 overloading

-overloading : 같은 함수를 사용하지만 parameter가 달라서
			   선언할 수 있도록 하는 c++의 기능

[2] class member function에서 default parameter 사용
*/

//class PrintData
//{
//public:
//	void myprint(int i)
//	{
//		cout << "int: " << i << endl;
//	}
//	void myprint(double d)
//	{
//		cout << "double: " << d << endl;
//	}
//	void myprint(string s = "s is not given")
//	{
//		cout << "string: " << s << endl;
//	}
//};
//
//int main(void)
//{
//	//PrintData pd;
//	//pd.myprint(3);
//	//pd.myprint(3.14);
//	//pd.myprint("Hello, World!");
//	
//	// Default Parameter 이용, Class를 동적할당한다.
//	PrintData* ppd = new PrintData();
//	ppd->myprint(4);
//	ppd->myprint(1.1111);
//	ppd->myprint();
//	ppd->myprint("bye, world!");
//
//	delete ppd;
//
//	return 0;
//}

/*

class function prototype

-function declaration과 definition을 구별

-class에는 declaration (prototype)만 지정

-class외부에 function definition

-why?
	인터페이스와 구현을 분리하여 코드 생산성을 높인다.
	Class 안에 모든 함수를 구현해두면, 복잡해진다.

*/

//void foo() // function definition, 함수 정의 ---> C++, function prototype
//{
//	printf("Hello, world!");
//}
//
//void foo2(); // function declaration, 함수 선언 ---> function implementation
//
//int main()
//{
//	foo();
//}
//
//void foo2()
//{
//	printf("Hello, world!");
//}

/*
header file (.h)와 source code (.cpp)로 분리
class definition은 header file .h로,
class function implementation은 .cpp,
이 class를 사용하는 main 함수는 별도의 .cpp로 저장한다.
*/

class PrintData { // header file
public:
	void myprint(int i);
};

void PrintData::myprint(int i) // cpp file
{
	cout << "int: " << i << endl;
}

int main(void)
{
	PrintData* ppd = new PrintData();
	ppd->myprint(4);
	delete ppd;
}