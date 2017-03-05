#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    int arr[10];

    int index = 0;
    for (auto &num : arr) {
        num = index;
        ++index;
    }

    int arr2[10];

    for (int i = 0; i != 10; ++i) {
        arr2[i] = arr[i];
    }

    for (auto num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> vec;
    int index2 = 0;
    while (index2 != 10) {
        vec.push_back(index2);
        ++index2;
    };

    vector<int> vec2;
    for (auto num : vec) {
        vec2.push_back(num);
    }

    for (auto num: vec2) {
        cout << num << " ";
    }
    cout << endl;
}