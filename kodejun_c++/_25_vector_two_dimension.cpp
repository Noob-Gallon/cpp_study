#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<vector<int>> v3;

	v3.push_back({ 1, 2, 3 });
	v3.push_back({ 45, 32 });
	v3.push_back({ 10, 9, 8, 7 });

	cout << "3 " << v3[0][2] << endl; // 3
	cout << "10 " << v3[2][0] << endl; // 10
	v3[2].push_back(999);
	cout << "999 " << v3[2][4] << endl; // 999
	// vector를 각각의 행 별로 접근 가능하다.

	return 0;
}