#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int *beg = begin(arr); beg != end(arr); ++beg) {
        *beg = 0;
    }

    for (auto n : arr) {
        cout << n << " ";
    }
    cout << endl;

}