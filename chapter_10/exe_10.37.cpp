#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> target;
    auto target_inserter = back_inserter(target);
    copy(vi.crbegin() + 3, vi.crbegin() + 8, target_inserter);

    for (auto item: target) {
        cout << item << " ";
    }
    cout << endl;
}