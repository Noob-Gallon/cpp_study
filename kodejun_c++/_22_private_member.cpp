#include <iostream>
#include <string>

using namespace std;

/*
public vs private member

public: 

private: class 구현하는 코드 내에서만 사용가능
=> private 접근 제어
*/

class Grade
{
private:
	int cprog;
	int math;

public:
	int cprog_public;
	int math_public;

	int show_cprog()
	{
		return cprog;
	}
	int show_math()
	{
		return math;
	}
	void assign_cprog_score(int s)
	{
		if ((s < 0) || (s > 100))
		{
			cprog = 0;
		}
		else
		{
			cprog = s;
		}
		cprog_public = cprog;
	}
	void assign_math_score(int s)
	{
		if ((s < 0) || (s > 100))
		{
			math = 0;
		}
		else
		{
			math = s;
		}
		math_public = math;
	}
};
// 다음과 같이 만들면, 반드시 class의 method를 통해서
// member variable의 값을 바꿀 수 있다.
// 멤버 변수의 직접 접근이 불가능함.
// Data integrity : 데이터의 유효성

//class PrintData
//{
//// public: private:을 지정하지 않으면 자동으로 private?
//private:
//	int a; // class member variable
//	double b; // class member variable
//public:
//	PrintData(int _a, double _b);
//	void myprint();
//}; // class 마지막에 세미콜론 꼭 쓰기
//
//// Constructor는 반환형을 지정하지 않는다.
//PrintData::PrintData(int _a = 10, double _b = 45.0) : a(_a), b(_b)
//{
//	myprint();
//}
//
//void PrintData::myprint()
//{
//	cout << "int: " << a << endl;
//	cout << "double: " << b << endl;
//}

int main(void)
{
	Grade g;
	g.assign_cprog_score(80);
	g.assign_math_score(90);

	// 만약 cprog의 범위가 0~100
	// math의 범위가 0~100
	//
	// 실수로 g.cprog = -45를 넣고
	// g.math = 800을 넣었다.
	// cout << g.cprog << " " << g.math << endl; ?
	// => 잘못된 출력이 나오게 된다. 범위를 벗어남.
	// 따라서 class에서 checkin하는 과정을 넣어준다.
	// private을 이용해서 접근하지 못하게 만들 수 있음.

	//PrintData pd;

	// pd.a = 100;
	// pd.b = 200.459;
	// => why? pd의 a, b는 private이기 때문에
	// class를 선언할 때만 접근할 수 있다.

	//pd.myprint();
	// myprint()는 public이기 때문에 접근할 수 있다.

	cout << g.show_cprog() << " " << g.show_math() << endl;

	return 0;
}