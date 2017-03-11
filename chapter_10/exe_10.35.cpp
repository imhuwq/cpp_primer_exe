#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5};
    for (auto begin = vi.cend()-1; begin >= vi.cbegin(); --begin) {
        cout << *begin << " ";
    }
    cout << endl;
}