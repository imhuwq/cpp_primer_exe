#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    int arr [10];

    int index = 0;
    for (auto &num : arr) {
        num = index;
        ++index;
    }

    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;
}