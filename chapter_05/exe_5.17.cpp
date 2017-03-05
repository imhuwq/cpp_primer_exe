#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 4, 5};
    vector<int> v2 = {1, 2, 3, 4};

    if (v1.size() < v2.size()) {
        swap(v1, v2);
    }

    decltype(v2.size()) sz = v2.size();
    int index = 0;

    while (index < sz) {
        if (v1[index] != v2[index]) {
            cout << false << endl;
            return 0;
        }
        ++index;
    }

    cout << true << endl;
    return 0;
}