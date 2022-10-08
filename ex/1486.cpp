#include <iostream>

using namespace std;

class Temp {
public:
    int calcSum(int _a, int _b) {
        return _a + _b;
    }
};

int main()
{
    Temp t;
    int a, b;
    cin >> a >> b;
    cout << t.calcSum(a, b);
    return 0;
}