#include <iostream>

using namespace std;

inline double calc_sum(double a, double b) {
	return (a + b);
}

int main(void)
{
	/*
	함수 호출

	함수 호출에 따른 overhead
	=> 
	소스코드를 짜면 compile을 거쳐 코드->기계어->Binary로 바뀐다.
	함수를 위에 선언해놨다면, 함수 호출 시 함수로 이동한다.
	이 과정에서 돌아올 위치를 기록하기 때문에 overhead 발생,
	함수 동작 후에 돌아오기 때문에 속도가 느려진다.

	1) 돌아올 위치를 저장하기 때문에 overhead 발생.
	2) parameter & return data. 데이터의 stream을 가지고 이동한다.
	3) cache : cpu 안에 들어가 있는 ALU와 register. ALU는 실제로 연산을
	실행하며, register에 데이터가 들어가 있어야 연산을 수행할 수 있다.
	register는 스포츠카의 속도라고 한다면, 메모리는 배달용 오토바이다.
	그런데, register는 속도가 매우 빠르지만 용량이 작다. 그래서 memory
	로부터 데이터를 많이 가져올 수가 없다. => 그래서 cache가 존재한다.
	cache는 메모리보다는 빠르지만 register보단 느리다. cache는 예측을
	해서 다음 동작을 수행하기 위해 미리미리 데이터를 옮겨 놓는다.

	cache miss : cache가 다음 동작에 불필요한 데이터를 가져다 놓은것.
	cache hit : cache가 다음 동작에 필요한 데이터를 가져다 놓은것.

	=> cache miss를 예방하고자, 가능한 함수의 호출을 줄이고자 함.
	함수를 그냥 코드 부분에 박아버림. 1), 2), 3)이 해결됨.

	호출 overhead를 극복하는 inline function

	inline을 사용해야만 할까?
	=> No. 단점이 존재한다. 코드의 크기가 커진다.
	=> 진짜 필요한 상황에서만 사용해야 한다.

	inline으로 설정해두면, compiler가 알아서 사용한다.
	*/

	cout << calc_sum(1.0, 2.0) << endl;
	cout << calc_sum(2.0, 2.0) << endl;
	cout << calc_sum(3.0, 2.0) << endl;

	return 0;
}