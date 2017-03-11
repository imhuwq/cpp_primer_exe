#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi = {0, 1, 2, 3};

    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
        }
        ++iter;
    }

    for (auto item : vi) {
        cout << item << " ";
    }
    cout << endl;
}