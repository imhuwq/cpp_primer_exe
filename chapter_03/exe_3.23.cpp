#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> nums (10, 10);

    for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
        *iter *= 2;
        cout << *iter << endl;
    }
}