#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string answer;

	cout << "Enter answer: ";
	
	// cin.getline(array, array_sz); 이전의 방식.
	// cin >> answer; // cin은 공백을 null로 받아들인다.
	getline(cin, answer);

	cout << "Your answer is: " << answer << endl;

	// Q. string은 문자열 길이의 한도가 없는가?

	cout << "Length: " << answer.length() << endl;
	// 문자열의 길이를 반환한다.

	cout << "first: " << answer[0] << endl;
	cout << "last: " << answer[answer.length() - 1] << endl;

	/*
	
	문자열 처리를 위한 C++의 도구,

	string class
	
	*/


	return 0;
}