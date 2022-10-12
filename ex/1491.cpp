/*
	필요한 헤더파일을 넣으시오
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

/*

	Class car를 구현하시오.

	- singleton 패턴을 지원해야 함
	- method addName(string s): s를 클래스 내에 저장
	- vector<string> getSortedNames(void): 저장된 s들을 오름차순으로 정렬하여
	  vector로 반환

*/

class Car {
private:
	Car() {}
	vector<string> name;
	static Car* instance;
public:
	void addName(string _s) {
		this->name.push_back(_s);
	}
	vector<string> getSortedNames(void) {

		sort(name.begin(), name.end());

		return name;
	}
	static Car* getInstance() {
		if (instance != nullptr) {
			return instance;
		}
		else {
			instance = new Car();
			return instance;
		}
	}
};

Car* Car::instance = nullptr;

//------------------------------------------------------
// 여기부터는 절대 건드리지 마시오.
//------------------------------------------------------
int main()
{
	Car* c = Car::getInstance();

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
			c->addName(name);
		}
	}

	Car* d = Car::getInstance();
	auto res = d->getSortedNames();
	for (auto& e : res)
	{
		cout << e << " ";
	}

	return 0;
}