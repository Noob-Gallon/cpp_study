/*

	Pointer to Array

*/

#include <iostream>

using namespace std;

int main(void) {

	int* p = new int; // c언어의 malloc
	delete p; // c언어의 free

	int* p = new int[5];

	for (int i = 0; i < 5; i++) {
		p[i] = i + 1;
	}

	for (int i = 0; i < 5; i++) {
		cout << p[i] << endl;
	}

	delete[] p;

	return 0;
}