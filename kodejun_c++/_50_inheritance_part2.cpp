/*

	Inheritance, 상속
	protected
	method Overriding

	부모 클래스의 overriden된 method 호출

	public 상속: 
	C++에서 상속을 받을 때는, class 내의 접근제어자와 상속 접근제어자를 각각 비교해서 더 강력한 것으로 바꿔준다.
	예를 들어, class 내에 
	protected:
	public: 이 있고,

	상속 접근제어자가 public이라고 한다면,
	protected > public
	public == public 이므로,
	상속받는 접근 제어자는

	protected:
	public:
	로 설정된다.



	protected 상속:
	만약, class 내에
	protected:
	public:

	이 있을때, 상속 접근제어자를 protected 로 한다면,

	protected == protected
	protected > public

	따라서, subclass는

	protected:
	protected:
	를 접근제어자로 지정받게 된다.
	


	private 상속(default 상속): 
	만약, 상속 접근제어자를 private으로 설정하면 priavte이 가장 강력하므로
	모두다 private으로 상속을 받게 된다.

*/

#include <iostream>

using namespace std;

class Coord_2D {
	//private:
public:
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

class Coord_3D : protected Coord_2D {
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
	
	// public: public: -> public inheritance
	/*b.x = 10;
	b.y = 20;
	b.showCoord();
	b.Coord_2D::showCoord();*/

	// public: public: -> protected inheritance
	//b.x = 10;
	//b.y = 20;
	//b.Coord_2D::showCoord();
	// 부를 수 없음. 왜냐면, protected로 상속받아서, class 외부에서는 private처럼 동작하기 때문.

	return 0;
}