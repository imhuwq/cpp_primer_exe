#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5};
    for (auto rbegin = vi.crbegin(); rbegin != vi.crend(); ++rbegin) {
        cout << *rbegin << " ";
    }
    cout << endl;
}