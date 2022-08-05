#include <iostream>

using namespace std;

// Object reference
// Object pointer reference

// Class 선언
// 생성자, constructor : 객체가 만들어질 때 '자동으로' 수행되는 함수(method)
//						 이 함수는 특수해서, 클래스 이름과 동일한 이름을 갖는다.
//                       또한 이 함수는 반환값이 없으며, 객체가 만들어질 때
//                       초기화 등을 수행한다.

class Node 
{ // class는 선언시에 class를 뺀다.
public:
	int n;
	Node* next;

	//Node(int _v) // 선언과 동시에 초기화가 가능하다.
	//{
	//	n = _v;
	//	next = 0;
	//}

	// class constructor의 축약형
	// 기본 초기화는 콜론 뒤에 쓰고
	// 복잡한 초기화는 { } 안에 쓴다.
	Node(int v) : n(v), next(0) 
	{
	}

	void showN() 
	{
		cout << "n is : " << n << endl;
	}
};

Node* head = 0;

int main(void)
{
	// Object reference
	Node myobj(777);
	Node& r_myobj = myobj;

	r_myobj.n = 20; // myobj(r_myobj)의 멤버 n의 값이 20이 된다.
	myobj.showN();

	// -----------------------------------------
	
	// Object pointer reference

	Node* p_myobj = new Node(888);
	Node*& rp_myobj = p_myobj;
	rp_myobj->n = 44;
	p_myobj->showN();

	//Node myobj(777); struct A temp, 정적 할당
	//myobj.n = 777;
	//myobj.showN();

	//Node yourobj(999);
	//yourobj.n = 888;
	//yourobj.showN();

	//Node* p_myobj = new Node(777); // struct A* temp = (struct A*)malloc(...)
	//p_myobj->showN();

	return 0;
}
