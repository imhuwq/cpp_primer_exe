#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


void answerA() {
    vector<int> nums;

    int num;

    while (cin >> num) {
        nums.push_back(num);
    };

    bool is_even = true;
    int last_num = 0;

    for (auto num : nums) {
        is_even = !is_even;
        if (is_even) {
            cout << num + last_num << endl;
        } else {
            last_num = num;
        }
    }

    if (!is_even) {
        cout << last_num << endl;
    }
}

void answerB() {
    vector<int> nums;

    int num;

    while (cin >> num) {
        nums.push_back(num);
    };

    decltype(nums.size()) size = nums.size();
    if (size == 0) {
        return;
    } else if (size == 1) {
        cout << nums[0] << endl;
    } else {
        int mid = size / 2;

        int index = 0;
        while (index < mid) {
            cout << nums[index] + nums[size - 1 - index] << endl;
            ++index;
        };

        if (size % 2 != 0) {
            cout << nums[index] << endl;
        }

    }

}

int main() {
    answerA();
    answerB();
}