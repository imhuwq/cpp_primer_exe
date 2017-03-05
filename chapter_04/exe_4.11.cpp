#include <iostream>

using namespace std;

int main() {
    int nums[4];
    int count = 0;
    while (count < 4) {
        ++count;
        cin >> nums[count];
    };

    if (nums[0] > nums[1] && nums[1] > nums[2] && nums[2] > nums[3]) {
        cout << "ok" << endl;
    } else {
        cout << "fail" << endl;
    }
}