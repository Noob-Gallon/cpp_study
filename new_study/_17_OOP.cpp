#include <iostream>

using namespace std;

int main(void)
{
	/*
	구조체 struct는 데이터와 코드가 분리

	struct A {
		int a;
		int b;
	}

	void showA(struct A temp) {
		cout << temp.a << endl;
	}

	단점: 데이터 따로, 코드 따로.
	      데이터를 수동적인 존재라고 인식하고 개발

	
	클래스 class는 데이터와 코드가 한 번에

	class A {
		int a;
		int b;

		void showA() {	// JS의 closure와는 다름.
						// structure와 비슷하기 때문에,
						// a를 그냥 사용할 수 있다.
						
			cout << a << endl;
		}
	}

	장점: 데이터와 그것의 처리방법이 하나로 합쳐짐으로써,
		  능동적인 존재로 인식하고 개발.
		  객체(사물)들이 서로 상호간에 소통하고 반응하는 것을 상상하고 개발

		  코드 재활용성이 좋아져... (케익 + 촛불)


		  class는 structure와 같이 데이터 타입이다.
		  class를 이용해서 만든 변수를 object(객체)라고 한다.

	*/

	return 0;
}