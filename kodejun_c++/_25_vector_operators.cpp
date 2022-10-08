#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool aaa(int& a, int& b)
{
	return a < b;
}

int main(void)
{
	vector<int> v1 = { 45, 98, 34, 23, 66 };
	vector<int> v2;
	
	for (auto& e : v1)
	{
		cout << " " << e;
	}
	cout << endl;

	v2 = v1; // 벡터의 복사. 편리함
	sort(v1.begin(), v1.end(), aaa);
	// aaa는 두 개의 벡터를 받아다가 비교해주는 함수
	// 부등호의 방향은 반드시 <

	cout << " after sorting... " << endl;
	// ------------------- 복사, 비교 -------------------
	// v1 출력
	for (auto& e : v1)
	{
		cout << " " << e;
	}
	cout << endl;

	v2.push_back(1000);
	// v2 출력
	for (auto& e : v2)
	{
		cout << " " << e;
	}
	cout << endl;

	// 비교
	if (v1 == v2)
	{
		cout << "same" << endl;
	}
	else
	{
		cout << "different" << endl;
	}
	// --------------------------------------

	return 0;
}