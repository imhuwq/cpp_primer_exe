#include <iostream>
#include <initializer_list>

using namespace std;

int sumof(initializer_list<int> nums) {
    int sum = 0;
    for (auto beg = nums.begin(); beg != nums.end(); ++beg) {
        sum += *beg;
    }
    return sum;
}

int main() {
    cout << sumof({3, 6, 1}) << endl;
}