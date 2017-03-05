#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums (10, 0);

    for (auto ele: nums) {
        cout << ele << " ";
    }
    cout << endl;

    auto cnt = nums.size();

    for (decltype(nums.size()) i = 0; i != nums.size(); ++i, --cnt) {
        nums[i] = cnt;
    }

    for (auto ele: nums) {
        cout << ele << " ";
    }
    cout << endl;
}