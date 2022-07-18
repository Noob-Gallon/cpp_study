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
		// FruitSeller::SaleApples 멤버함수가 단독으로 사용될 수도
		// 있으므로, 잘못된 값이 입력되는 경우를 처리해준다.

		if (money < 0)
		{
			cout << "잘못된 입력\n";
			return;
		}

		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() const
	// Class의 멤버변수를 변경하지 않는 함수는 const를 지정해서
	// 코드의 안정성을 높인다.
	{
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl << endl;
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
	// 멤버함수가 매개변수로 클래스를 가질수 있다.
	// Call-By-Reference, 참조자를 이용함.
	{
		// money가 0보다 작은 경우는 존재할 수 없다.
		if (money < 0)
		{
			cout << "잘못된 입력\n";
			return;
		}

		numOfApples += Seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}