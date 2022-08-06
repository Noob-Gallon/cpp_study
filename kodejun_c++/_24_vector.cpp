#include <iostream>
#include <vector>

using namespace std;

class Person
{
public:
	int age;
	Person() : age(0) {};
};

int main(void)
{
	vector<int> ivector;

	ivector.push_back(10);
	ivector.push_back(20);
	ivector.push_back(30);

	//cout << boolalpha;
	//cout << "front: " << ivector.empty() << endl;
	//cout << "back: " << ivector.front() << endl;
	// ivector.pop_back(); // 가장 뒤에 있는 요소를 날린다.
	//cout << ivector.back() << endl;
	//
	//for (auto& i : ivector)
	//{
	//	cout << " " << i;
	//}
	//cout << endl;

	// 1 (index)
	for (int i = 0; i < ivector.size(); i++)
	{
		cout << " " << ivector.at(i);
	}
	cout << endl;

	// 2 (index)
	for (int i = 0; i < 3; i++)
	{
		cout << " " << ivector[i];
	}
	cout << endl;

	// 3 (vector command)
	for (auto p = ivector.begin(); p != ivector.end(); p++)
	{
		cout << " " << *p;
	}
	cout << endl;

	ivector.erase(ivector.begin() + 1);
	ivector.insert(ivector.begin() + 1, 40);
	ivector.insert(ivector.begin() + 1, 999);

	for (auto p = ivector.begin(); p != ivector.end(); p++)
	{
		cout << " " << *p;
	}
	cout << endl;

	return 0;
}

/*
int main(void)
{
	Person p[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "age: " << p[i].age << endl;
	//}

	//for (auto& i : p)
	//{
	//	cout << "age : " << i.age << endl;
	//}
	// range based for loop.

	return 0;
}
*/