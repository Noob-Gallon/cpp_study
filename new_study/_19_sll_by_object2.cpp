#include <iostream>

using namespace std;

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

class My_SLL
{
public:
	Node* head;
	Node* last;
	int cnt;

	// Constructor
	My_SLL() : cnt(0), head(0), last(0)
	{
	}

	void addNode(Node* _new_one)
	{
		if (head == 0)
		{
			head = _new_one;
			last = _new_one;
			cnt = 1;
		}
		else
		{
			last->next = _new_one;
			last = _new_one;
			cnt += 1;
		}
	}

	// SLL에 들어있는 모든 node들을 보여주는 함수
	void showAll()
	{
		if (cnt == 0)
		{
			cout << "No Node!!!" << endl;
			return;
		}

		Node* temp = head;

		while (temp != 0)
		{
			cout << temp->n << endl;
			temp = temp->next;
		}
	}
};

int main(void)
{
	Node* a = new Node(777);
	Node* b = new Node(888);

	My_SLL my_sll;
	my_sll.addNode(a);
	my_sll.addNode(b);

	// my_sll.showAll();

	Node* c = new Node(999);
	Node*& r_head = my_sll.head;
	c->addToSLL(r_head);

	my_sll.showAll();

	return 0;
}