#include <iostream>

using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		// FruitSeller::SaleApples ����Լ��� �ܵ����� ���� ����
		// �����Ƿ�, �߸��� ���� �ԷµǴ� ��츦 ó�����ش�.

		if (money < 0)
		{
			cout << "�߸��� �Է�\n";
			return;
		}

		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() const
	// Class�� ��������� �������� �ʴ� �Լ��� const�� �����ؼ�
	// �ڵ��� �������� ���δ�.
	{
		cout << "���� ��� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& Seller, int money) 
	// ����Լ��� �Ű������� Ŭ������ ������ �ִ�.
	// Call-By-Reference, �����ڸ� �̿���.
	{
		// money�� 0���� ���� ���� ������ �� ����.
		if (money < 0)
		{
			cout << "�߸��� �Է�\n";
			return;
		}

		numOfApples += Seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}