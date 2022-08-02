#include <iostream>
#include <climits> // 변수의 max, min을 선언한 Macro 사용 가능.

using namespace std;

int main(void)
{
	cout << "short max: " << SHRT_MAX << endl;
	cout << "short min: " << SHRT_MIN << endl;
	cout << "unsgiend short max: " << USHRT_MAX << endl;

	cout << "int max: " << INT_MAX << endl;
	cout << "long min: " << LONG_MIN << endl;
	cout << "unsigned int max: " << UINT_MAX << endl;

	cout << "long long max: " << LLONG_MAX << endl;
	cout << "long long min: " << LLONG_MIN << endl;
	cout << "unsigned long long: " << ULLONG_MAX << endl;

	return 0;
}