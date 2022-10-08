#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Temp {

public:
    void addNum(int _a) {
        nums.push_back(_a);
    }
    void showSorted() {
        sort(nums.begin(), nums.end(), compare);
        nums.pop_back();
        nums.erase(nums.begin());

        for (auto& k : nums) {
            cout << k << " ";
        }
    }
    bool compare(int _a, int _b) {
        return _a < _b;
    }
private:
    vector<int> nums;
};

int main() {





    return 0;
}