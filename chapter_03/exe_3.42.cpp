#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int arr[5];

    for (decltype(vec.size()) i = 0; i < vec.size(); ++i) {
        arr[i] = vec[i];
    }

    for (auto n : arr) {
        cout << n << " ";
    }
    cout << endl;
}