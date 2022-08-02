#include <iostream>

using namespace std;

int main(void) 
{
	// 최대값을 찾는 프로그램 (range based for loop)

	int b[5] = { 100, 200, 999, 345, 70 };

	int max = 0;

	for (auto k : b) {
		if (max < k) {
			max = k;
		}
	}

	cout << "max value is: " << max << endl;
	// k의 data type에는 크게 관심이 없기 때문에, 그냥 auto로
	// for loop을 돌린다.



	int a[5] = { 1, 2, 3, 4, 5 };

	// a라는 값을 k에 넣는다.
	for (double k : a) {
		cout << sizeof(k) << endl;
	}

	for (auto k : a) {
		cout << k << ' ' << sizeof(k) << endl; // k가 automatically select data types
	}

	// 정적 배열이 아닌, 동적 배열의 경우에는 range base for loop이
	// 정상적으로 동작할까?

	int* pa = new int[5];

	/*
	* 
	for (int k : pa) {
		cout << k << endl;
	}

	*/
	// => 동적 할당 배열에 대해서는 range based for loop이 동작하지 않는다.
	// 동적으로 배열을 할당하면 컴퓨터에 배열에 대한 정보가 충분하게
	// 전달되지 않기 때문에, range based for loop이 기본적으로는 동작하지 않는다.
	// 단, 동작하게 만드는 방법이 있긴 하다.

	/*
		반복문, for loop

		Range based for loop
		C++11 (2011년)

		int a[5] = {1, 2, 3, 4, 5};

		for (int k : a) {
			...
		}

		keyword auto
		for (auto k : a) {
			...
		}

		들어오는 변수를 보고 데이터 타입을 결정한다.

		응용 프로그램
		배열에서 최대값을 찾아서 출력
	*/

	return 0;
}