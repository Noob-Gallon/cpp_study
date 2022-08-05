#include <iostream>

using namespace std;

// SLL을 class와 object로 구현
// 단, Node를 SLL에 붙이는 코드를 Node가 갖도록 한다.

class Node {
public:
	int n;
	Node* next;

	Node(int v) : n(v), next(0)
	{
	}

	void addToSLL(Node*& _head) // 근데 Node* head는 전역변수인데 굳이 왜?
	{
		if (_head == 0)
		{
			_head = this;
			// this는 객체를 만들 때, 그 객체의 포인터(주소)를 갖고있는
			// 것이 this이다.
		}
		else
		{
			Node* temp = _head;

			while (temp->next != 0)
			{
				temp = temp->next;
			}

			temp->next = this;
		}
	}

	void showN()
	{
		cout << "n is : " << n << endl;
	}
};

Node* head = 0;

int main(void)
{
	Node* a = new Node(777);
	Node* b = new Node(888);

	Node*& r_head = head; // 왜 참조자를?

	a->addToSLL(r_head); 
	// 니가 능동적으로 움직여서
	// r_head가 가리키는 곳에 가서 붙어

	b->addToSLL(r_head);

	head->showN(); // 777
	head->next->showN(); // 888

	return 0;
}