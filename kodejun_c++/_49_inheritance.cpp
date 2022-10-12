/*

public을 이용하여 상속을 받으면, 부모의 public을 public으로 공개하겠다는 뜻이다.

superclass에서 protected로 멤버변수를 만들면 superclass 자체에서는 외부에 대해 여전히 private으로 유지되지만,
subclass에게 public으로 상속해주면 public으로 공개된다.

아무것도 쓰지 않으면, 부모로부터 public으로 받은 것을 private으로 쓰겠다는 뜻이다.
즉, 클래스 외부에서는 사용할 수 없다.
다시 말하면 superclass에서 public으로 선언된 것을 subclass에서 priavte으로 상속받는다.
-> 아무것도 쓰지 않으면 public을 private으로 상속받는다. 이 경우 protected는 어떻게 될까?
protected는 superclass에서는 class 외부에 대해 private으로 역할하지만, subclass에 상속할 때는
public으로 동작한다고 했다. 여기서도 마찬가지로 protected는 subclass에 상속되지만,
상속받는 방법이 (아무것도 쓰지 않는) private 이므로, subclass 내부에서만 사용할 수 있게 된다.

- method Overriding


*/

#include <iostream>

using namespace std;

class Coord_2D {
//private:
protected:
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) : x(_x), y(_y) { /* cout << "Constructor Coord_2D" << endl; */ }
	~Coord_2D() { /* cout << "Destructor Coord_2D" << endl; */ }
	void showCoord();
};

void Coord_2D::showCoord() {
	cout << x << ", " << y;
}

class Coord_3D : Coord_2D {
private:
	int z;
public:
	Coord_3D(int _x, int _y, int _z) : Coord_2D(_x, _y), z(_z) { /* cout << "Constructor Coord_3D" << endl; */ }
	~Coord_3D() { /* cout << "Destructor Coord_3D" << endl; */ }
	void showCoord();
};

void Coord_3D::showCoord() {
	// showCoord_2D();
	cout << x << ", " << y; // protected로 x, y를 선언하면 public으로 상속받을 시 public으로 이용할 수 있다.
	cout << ", " << z << endl;
	
}

int main(void) {

	Coord_3D b(10, 20, 30);
	b.showCoord();
	// b.showCoord_2D(); // public으로 받으면, 부를 수 있다.

	return 0;
}