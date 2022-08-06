#include <iostream>

using namespace std;

int main(void)
{
	const int arSize = 20;
	char buf[arSize]; // 최대 받아들일 수 있는 문자의 길이는 19글자.
	// => 배열을 선언할 때는 상수를 사용해서 선언도 가능.

	cout << "Enter answer: ";
	cin.getline(buf, arSize);
	// getline은 줄바꿈 문자를 만나면, 거기까지 잘라서 문자열로 받아온다.
	// 그 뒤에 맨 끝에 Null을 넣어준다.
	// 첫 번째 인수는 배열, 두 번째 인수는 크기(배열의 크기)
	// 배열의 크기를 넣으면 19글자 까지 넣을 수 있다는 걸 체크함.

	cout << "Answer is: " << buf << endl;

	/* 
	1. Array, 배열
	2. 문자열 배열
	3. 문자열 입력받기
	- cin.getline(배열, 최대크기+Null 1개)
	*/

	return 0;
}