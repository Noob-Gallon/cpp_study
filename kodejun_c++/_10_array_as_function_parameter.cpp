#include <iostream>

using namespace std;

// 1)
//int sum_array_elements(int _arr[], int _len) // <--- function parameter
//{
//	int sum(0);
//
//	for (int i = 0; i < _len; i++) {
//		sum += _arr[i];
//	}
//
//	return sum;
//}

// 2)
//int sum_array_elements(int* _arr, int _len) // <--- function parameter
//{
//	int sum(0);
//
//	for (int i = 0; i < _len; i++) {
//		sum += _arr[i];
//	}
//
//	return sum;
//}

// 1), 2)의 문제점? 
// 중요한 데이터가 어떠한 이유에 의해 값이 바뀔 가능성이 있다.

// 3)
// int *pa = &a;
// const int *pa = &a;
// => 앞에다가 const를 붙이면, pa라는 포인터를 이용해서는
// a를 Read 할 수는 있지만, Write 할 수 없다는 뜻이다.

int sum_array_elements(const int* _arr, int _len)
// 위와 같이 작성하면, argument로 전달되는 배열의 원소의 값을
// 변경할 수 없다.
{
	int sum(0);

	for (int i = 0; i < _len; i++) {
		sum += _arr[i];
	}

	return sum;
}


int main(void)
{
	int array_a[5] = { 1, 2, 3, 4, 5 };

	int sum = sum_array_elements(array_a, 5);
	cout << "Array sum: " << sum << endl;

	/*
	Function

	[1] Array as function parameter and argument

	-1차원 배열의 합을 구하는 함수 구현

	[2] pointer의 경거망동을 막아주는 const

	- int a = 10;

	- int *pa = &a;
	- const int *pa = &a; 
	
	=> 둘 간의 차이점은 무엇인가?
	*/

	return 0;
}