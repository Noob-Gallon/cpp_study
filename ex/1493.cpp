/*
	필요한 헤더를 포함시키세요.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
	class Car를 정의하세요.

	method addName( )은 인수로 받은 데이터를 class object안에 저장

	method getSortedNames( )은 저장된 데이터를 오름차순(사전순)으로
	정렬하여 저장한 vector를 반환

*/

class Car {

public:
	void addName(string _s) {
		this->names.push_back(_s);
	}
	vector<string> getSortedNames(void) {
		sort(names.begin(), names.end());
	}
	Car() {

	}
private:
	vector<string> names;
};

//-----------------------------------------------------
//    아래 부분은 수정하지 마시오
//-----------------------------------------------------

int main()
{
	Car<string> c;

	string name;

	while (true)
	{
		getline(cin, name);

		if (name == "END")
		{
			break;
		}
		else
		{
			c.addName(name);
		}
	}

	Car<int> d;
	int n;
	while (true)
	{
		cin >> n;

		if (n == 999)
		{
			break;
		}
		else
		{
			d.addName(n);
		}
	}

	Car<char> e;
	char _c;
	while (true)
	{
		cin >> _c;

		if (_c == '`')
		{
			break;
		}
		else
		{
			e.addName(_c);
		}
	}


	auto res = c.getSortedNames();
	for (auto& e : res)
	{
		cout << e << " ";
	}

	auto res1 = d.getSortedNames();
	for (auto& e : res1)
	{
		cout << e << " ";
	}

	auto res2 = e.getSortedNames();
	for (auto& e : res2)
	{
		cout << e << " ";
	}


	return 0;
}