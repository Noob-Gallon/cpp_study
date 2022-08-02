#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
	char ch;

	while (true) {
		cin.get(ch);
		// null도 char로 읽는다. null을 버리기 위해 한번 더 받음.
		cin.get();

		if (isalnum(ch)) {
			cout << "alpha numeric" << endl;
		}

		if (isalpha(ch)) {
			cout << "alphabet" << endl;
		}

		if (isblank(ch)) {
			cout << "blank" << endl;
		}

		if (isdigit(ch)) {
			cout << "digit" << endl;
		}

		if (isxdigit(ch)) {
			cout << "hexa digit" << endl;
		}

		if (islower(ch)) {
			cout << "lower" << endl;
		}

		if (isupper(ch)) {
			cout << "upper" << endl;
		}

		if (isspace(ch)) {
			cout << "space" << endl;
		}

		if (ispunct(ch)) {
			cout << "punctuation" << endl;
		}

		cout << "lower, " << char(tolower(ch)) << endl;
		cout << "upper, " << char(toupper(ch)) << endl;

		if (ch == '@') break;
	}

	/*
	cctype

	- ctype.h in C

	문자의 종류를 판단하는 함수를 제공

	isalnum : alphabet이거나, 10진수에 해당하는 문자면 1을 반환
	isalpha : alphabet인지 판단
	isblank : space, tab인지 판단
	isdigit : 숫자인지 판단
	isxdigit : 16진수에 사용되는 숫자(0~9, A~F)
	islower : 소문자인지 판단
	isupper : 대문자인지 판단
	isspace : 띄어쓰기인지 판단
	ispunct : punctuation ,이나 . 등의 문장기호인지 판단

	tolower : 소문자로 변환
	toupper : 대문자로 변환
	*/

	return 0;
}