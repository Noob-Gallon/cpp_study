#include <iostream>

using namespace std;

int main(void)
{
	int pa[10]; // stack에 잡힌다. 정적 선언
	pa[5] = 10;
	cout << "pa[5]: " << pa[5] << endl;

	int* pb = new int[10]; // 동적 배열
	pb[5] = 10;
	cout << "pb[5]: " << pb[5] << endl;
	delete[] pb;

	/*
	static array

	(소스 코드가 컴파일 단계를 거치면 object file로 변함.)
    (이 단계에서 10칸을 선언하게 됨)

	int pa[10];



	dynamic array

	int* pb = new int[10];
	
	free dynamic array
	
	delete[] pb;
	*/

	return 0;
}