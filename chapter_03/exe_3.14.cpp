#include <vector>
#include <iostream>

using std::cin;
using std::vector;

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
}